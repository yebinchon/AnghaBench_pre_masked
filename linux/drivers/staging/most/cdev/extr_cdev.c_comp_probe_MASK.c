
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct most_interface {int dummy; } ;
struct most_channel_config {int num_buffers; } ;
struct TYPE_10__ {int owner; } ;
struct comp_channel {int channel_id; TYPE_3__ cdev; int list; int fifo; TYPE_1__* dev; int devno; int io_mutex; int wq; int unlink; scalar_t__ access_ref; struct most_channel_config* cfg; struct most_interface* iface; } ;
struct TYPE_9__ {int minor_id; int class; int major; } ;
struct TYPE_8__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 TYPE_1__* FUNC_7 (int ,int *,int ,int *,char*,char*) ;
 struct comp_channel* FUNC_8 (struct most_interface*,int) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct comp_channel*) ;
 int FUNC_15 (int *,int ) ;
 struct comp_channel* FUNC_16 (int,int ) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_24(struct most_interface *VAR_10, int VAR_11,
        struct most_channel_config *VAR_12, char *VAR_13, char *VAR_14)
{
 struct comp_channel *VAR_15;
 unsigned long VAR_16;
 int VAR_17;
 int VAR_18;

 if ((!VAR_10) || (!VAR_12) || (!VAR_13)) {
  FUNC_20("Probing component with bad arguments");
  return -VAR_1;
 }
 VAR_15 = FUNC_8(VAR_10, VAR_11);
 if (VAR_15)
  return -VAR_0;

 VAR_18 = FUNC_9(&VAR_9.minor_id, 0, 0, VAR_3);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_15 = FUNC_16(sizeof(*VAR_15), VAR_3);
 if (!VAR_15) {
  VAR_17 = -VAR_2;
  goto err_remove_ida;
 }

 VAR_15->devno = FUNC_2(VAR_9.major, VAR_18);
 FUNC_6(&VAR_15->cdev, &VAR_7);
 VAR_15->cdev.owner = VAR_5;
 VAR_17 = FUNC_4(&VAR_15->cdev, VAR_15->devno, 1);
 if (VAR_17 < 0)
  goto err_free_c;
 VAR_15->iface = VAR_10;
 VAR_15->cfg = VAR_12;
 VAR_15->channel_id = VAR_11;
 VAR_15->access_ref = 0;
 FUNC_21(&VAR_15->unlink);
 FUNC_0(VAR_15->fifo);
 VAR_17 = FUNC_12(&VAR_15->fifo, VAR_12->num_buffers, VAR_3);
 if (VAR_17)
  goto err_del_cdev_and_free_channel;
 FUNC_11(&VAR_15->wq);
 FUNC_19(&VAR_15->io_mutex);
 FUNC_22(&VAR_6, VAR_16);
 FUNC_17(&VAR_15->list, &VAR_8);
 FUNC_23(&VAR_6, VAR_16);
 VAR_15->dev = FUNC_7(VAR_9.class, ((void*)0), VAR_15->devno, ((void*)0), "%s", VAR_13);

 if (FUNC_1(VAR_15->dev)) {
  VAR_17 = FUNC_3(VAR_15->dev);
  FUNC_20("failed to create new device node %s\n", VAR_13);
  goto err_free_kfifo_and_del_list;
 }
 FUNC_15(&VAR_15->dev->kobj, VAR_4);
 return 0;

err_free_kfifo_and_del_list:
 FUNC_13(&VAR_15->fifo);
 FUNC_18(&VAR_15->list);
err_del_cdev_and_free_channel:
 FUNC_5(&VAR_15->cdev);
err_free_c:
 FUNC_14(VAR_15);
err_remove_ida:
 FUNC_10(&VAR_9.minor_id, VAR_18);
 return VAR_17;
}
