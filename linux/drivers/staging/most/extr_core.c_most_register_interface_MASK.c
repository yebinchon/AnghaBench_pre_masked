
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int release; int groups; struct TYPE_9__* parent; int init_name; int * bus; } ;
struct most_interface {unsigned int num_channels; TYPE_4__ dev; struct most_channel* p; int description; TYPE_1__* channel_vector; int poison_channel; int configure; int enqueue; } ;
struct TYPE_7__ {scalar_t__ packets_per_xact; scalar_t__ subbuffer_size; scalar_t__ buffer_size; scalar_t__ num_buffers; scalar_t__ data_type; scalar_t__ direction; } ;
struct most_channel {int dev_id; unsigned int channel_id; int keep_mbo; int enqueue_halt; int is_poisoned; TYPE_4__ dev; struct most_channel** channel; int channel_list; int list; int nq_mutex; int start_mutex; int mbo_ref; int cleanup; int halt_fifo; int trash_fifo; int fifo; int fifo_lock; TYPE_2__ cfg; struct most_interface* iface; scalar_t__ is_starving; int name; } ;
struct TYPE_8__ {TYPE_4__ dev; int bus; } ;
struct TYPE_6__ {char* name_suffix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int FUNC_7 (struct most_channel*) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (int ,int ,char*,...) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ,int) ;

int FUNC_17(struct most_interface *VAR_11)
{
 unsigned int VAR_12;
 int VAR_13;
 struct most_channel *VAR_14;

 if (!VAR_11 || !VAR_11->enqueue || !VAR_11->configure ||
     !VAR_11->poison_channel || (VAR_11->num_channels > VAR_3)) {
  FUNC_12("Bad interface or channel overflow\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_4(&VAR_8, 0, 0, VAR_2);
 if (VAR_13 < 0) {
  FUNC_13("Failed to alloc mdev ID\n");
  return VAR_13;
 }

 VAR_11->p = FUNC_8(sizeof(*VAR_11->p), VAR_2);
 if (!VAR_11->p) {
  FUNC_5(&VAR_8, VAR_13);
  return -VAR_1;
 }

 FUNC_0(&VAR_11->p->channel_list);
 VAR_11->p->dev_id = VAR_13;
 FUNC_16(VAR_11->p->name, VAR_11->description, sizeof(VAR_11->p->name));
 VAR_11->dev.init_name = VAR_11->p->name;
 VAR_11->dev.bus = &VAR_7.bus;
 VAR_11->dev.parent = &VAR_7.dev;
 VAR_11->dev.groups = VAR_6;
 VAR_11->dev.release = VAR_10;
 if (FUNC_2(&VAR_11->dev)) {
  FUNC_12("registering iface->dev failed\n");
  FUNC_7(VAR_11->p);
  FUNC_5(&VAR_8, VAR_13);
  return -VAR_1;
 }

 for (VAR_12 = 0; VAR_12 < VAR_11->num_channels; VAR_12++) {
  const char *VAR_15 = VAR_11->channel_vector[VAR_12].name_suffix;

  VAR_14 = FUNC_8(sizeof(*VAR_14), VAR_2);
  if (!VAR_14)
   goto err_free_resources;
  if (!VAR_15)
   FUNC_14(VAR_14->name, VAR_4, "ch%d", VAR_12);
  else
   FUNC_14(VAR_14->name, VAR_4, "%s", VAR_15);
  VAR_14->dev.init_name = VAR_14->name;
  VAR_14->dev.parent = &VAR_11->dev;
  VAR_14->dev.groups = VAR_5;
  VAR_14->dev.release = VAR_9;
  VAR_11->p->channel[VAR_12] = VAR_14;
  VAR_14->is_starving = 0;
  VAR_14->iface = VAR_11;
  VAR_14->channel_id = VAR_12;
  VAR_14->keep_mbo = 0;
  VAR_14->enqueue_halt = 0;
  VAR_14->is_poisoned = 0;
  VAR_14->cfg.direction = 0;
  VAR_14->cfg.data_type = 0;
  VAR_14->cfg.num_buffers = 0;
  VAR_14->cfg.buffer_size = 0;
  VAR_14->cfg.subbuffer_size = 0;
  VAR_14->cfg.packets_per_xact = 0;
  FUNC_15(&VAR_14->fifo_lock);
  FUNC_0(&VAR_14->fifo);
  FUNC_0(&VAR_14->trash_fifo);
  FUNC_0(&VAR_14->halt_fifo);
  FUNC_6(&VAR_14->cleanup);
  FUNC_1(&VAR_14->mbo_ref, 0);
  FUNC_11(&VAR_14->start_mutex);
  FUNC_11(&VAR_14->nq_mutex);
  FUNC_9(&VAR_14->list, &VAR_11->p->channel_list);
  if (FUNC_2(&VAR_14->dev)) {
   FUNC_12("registering c->dev failed\n");
   goto err_free_most_channel;
  }
 }
 FUNC_13("registered new device mdev%d (%s)\n",
  VAR_13, VAR_11->description);
 FUNC_10(VAR_11->description);
 return 0;

err_free_most_channel:
 FUNC_7(VAR_14);

err_free_resources:
 while (VAR_12 > 0) {
  VAR_14 = VAR_11->p->channel[--VAR_12];
  FUNC_3(&VAR_14->dev);
  FUNC_7(VAR_14);
 }
 FUNC_7(VAR_11->p);
 FUNC_3(&VAR_11->dev);
 FUNC_5(&VAR_8, VAR_13);
 return -VAR_1;
}
