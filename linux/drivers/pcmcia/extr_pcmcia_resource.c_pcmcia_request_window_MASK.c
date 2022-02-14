
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct resource {int end; int start; int flags; TYPE_4__* parent; } ;
struct pcmcia_socket {int state; int map_size; int features; int ops_mutex; TYPE_1__* ops; TYPE_2__* win; } ;
struct pcmcia_device {int dev; int _win; struct pcmcia_socket* socket; } ;
struct TYPE_6__ {int map; int flags; unsigned int speed; int static_start; TYPE_4__* res; scalar_t__ card_start; } ;
typedef TYPE_2__ pccard_mem_map ;
struct TYPE_7__ {int start; } ;
struct TYPE_5__ {scalar_t__ (* set_mem_map ) (struct pcmcia_socket*,TYPE_2__*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (int,int,int,int ,struct pcmcia_socket*) ;
 int FUNC_6 (int *,struct resource*) ;
 scalar_t__ FUNC_7 (struct pcmcia_socket*,TYPE_2__*) ;

int FUNC_8(struct pcmcia_device *VAR_11, struct resource *VAR_12,
   unsigned int VAR_13)
{
 struct pcmcia_socket *VAR_14 = VAR_11->socket;
 pccard_mem_map *VAR_15;
 u_long VAR_16;
 int VAR_17;

 FUNC_2(&VAR_11->dev, "request_window %pR %d\n", VAR_12, VAR_13);

 if (!(VAR_14->state & VAR_5)) {
  FUNC_2(&VAR_11->dev, "No card present\n");
  return -VAR_2;
 }


 if (VAR_12->end == 0)
  VAR_12->end = VAR_14->map_size;
 VAR_16 = (VAR_14->features & VAR_6) ? VAR_12->end : VAR_14->map_size;
 if (VAR_12->end & (VAR_14->map_size-1)) {
  FUNC_2(&VAR_11->dev, "invalid map size\n");
  return -VAR_0;
 }
 if ((VAR_12->start && (VAR_14->features & VAR_7)) ||
     (VAR_12->start & (VAR_16-1))) {
  FUNC_2(&VAR_11->dev, "invalid base address\n");
  return -VAR_0;
 }
 if (VAR_12->start)
  VAR_16 = 0;


 FUNC_3(&VAR_14->ops_mutex);
 for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++)
  if (!(VAR_14->state & FUNC_1(VAR_17)))
   break;
 if (VAR_17 == VAR_4) {
  FUNC_2(&VAR_11->dev, "all windows are used already\n");
  FUNC_4(&VAR_14->ops_mutex);
  return -VAR_0;
 }

 VAR_15 = &VAR_14->win[VAR_17];

 if (!(VAR_14->features & VAR_7)) {
  VAR_15->res = FUNC_5(VAR_12->start, VAR_12->end, VAR_16,
      0, VAR_14);
  if (!VAR_15->res) {
   FUNC_2(&VAR_11->dev, "allocating mem region failed\n");
   FUNC_4(&VAR_14->ops_mutex);
   return -VAR_0;
  }
 }
 VAR_11->_win |= FUNC_0(VAR_17);


 VAR_15->map = VAR_17+1;
 VAR_15->flags = VAR_12->flags & VAR_8;
 VAR_15->speed = VAR_13;
 VAR_15->card_start = 0;

 if (VAR_14->ops->set_mem_map(VAR_14, VAR_15) != 0) {
  FUNC_2(&VAR_11->dev, "failed to set memory mapping\n");
  FUNC_4(&VAR_14->ops_mutex);
  return -VAR_1;
 }
 VAR_14->state |= FUNC_1(VAR_17);


 if (VAR_14->features & VAR_7)
  VAR_12->start = VAR_15->static_start;
 else
  VAR_12->start = VAR_15->res->start;


 VAR_12->end += VAR_12->start - 1;
 VAR_12->flags &= ~VAR_9;
 VAR_12->flags |= (VAR_15->map << 2) | VAR_3;
 VAR_12->parent = VAR_15->res;
 if (VAR_15->res)
  FUNC_6(&VAR_10, VAR_12);

 FUNC_2(&VAR_11->dev, "request_window results in %pR\n", VAR_12);

 FUNC_4(&VAR_14->ops_mutex);

 return 0;
}
