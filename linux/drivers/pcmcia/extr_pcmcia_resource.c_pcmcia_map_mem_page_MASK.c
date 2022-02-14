
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int flags; } ;
struct pcmcia_socket {int ops_mutex; TYPE_2__* win; TYPE_1__* ops; } ;
struct pcmcia_device {int dev; struct pcmcia_socket* socket; } ;
struct TYPE_4__ {unsigned int card_start; } ;
struct TYPE_3__ {int (* set_mem_map ) (struct pcmcia_socket*,TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcmcia_socket*,TYPE_2__*) ;

int FUNC_4(struct pcmcia_device *VAR_4, struct resource *VAR_5,
   unsigned int VAR_6)
{
 struct pcmcia_socket *VAR_7 = VAR_4->socket;
 unsigned int VAR_8;
 int VAR_9;

 VAR_8 = ((VAR_5->flags & VAR_1 & VAR_3) >> 2) - 1;
 if (VAR_8 >= VAR_2)
  return -VAR_0;

 FUNC_1(&VAR_7->ops_mutex);
 VAR_7->win[VAR_8].card_start = VAR_6;
 VAR_9 = VAR_7->ops->set_mem_map(VAR_7, &VAR_7->win[VAR_8]);
 if (VAR_9)
  FUNC_0(&VAR_4->dev, "failed to set_mem_map\n");
 FUNC_2(&VAR_7->ops_mutex);
 return VAR_9;
}
