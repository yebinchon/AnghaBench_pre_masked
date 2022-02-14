
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vpfe_subdev_info {int grp_id; } ;
struct vpfe_fh {int fh; scalar_t__ io_allowed; } ;
struct vpfe_device {int lock; int pdev; scalar_t__ initialized; int usrs; int buffer_queue; int numbuffers; scalar_t__ io_usrs; int v4l2_dev; struct vpfe_subdev_info* current_subdev; scalar_t__ started; } ;
struct file {struct vpfe_fh* private_data; } ;
struct TYPE_4__ {int (* close ) (int ) ;} ;
struct TYPE_6__ {int owner; TYPE_1__ hw_ops; } ;
struct TYPE_5__ {int numbuffers; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vpfe_fh*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int *,char*) ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 struct vpfe_device* FUNC_10 (struct file*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct vpfe_device*) ;
 int FUNC_15 (struct vpfe_device*) ;

__attribute__((used)) static int FUNC_16(struct file *VAR_6)
{
 struct vpfe_device *VAR_7 = FUNC_10(VAR_6);
 struct vpfe_fh *VAR_8 = VAR_6->private_data;
 struct vpfe_subdev_info *VAR_9;
 int VAR_10;

 FUNC_5(1, VAR_3, &VAR_7->v4l2_dev, "vpfe_release\n");


 FUNC_2(&VAR_7->lock);

 if (VAR_8->io_allowed) {
  if (VAR_7->started) {
   VAR_9 = VAR_7->current_subdev;
   VAR_10 = FUNC_6(&VAR_7->v4l2_dev,
        VAR_9->grp_id,
        VAR_5, VAR_4, 0);
   if (VAR_10 && (VAR_10 != -VAR_0))
    FUNC_7(&VAR_7->v4l2_dev,
    "stream off failed in subdev\n");
   FUNC_15(VAR_7);
   FUNC_14(VAR_7);
   FUNC_13(&VAR_7->buffer_queue);
  }
  VAR_7->io_usrs = 0;
  VAR_7->numbuffers = VAR_2.numbuffers;
  FUNC_12(&VAR_7->buffer_queue);
  FUNC_11(&VAR_7->buffer_queue);
 }


 VAR_7->usrs--;
 FUNC_8(&VAR_8->fh);
 FUNC_9(&VAR_8->fh);

 if (!VAR_7->usrs) {
  VAR_7->initialized = 0;
  if (VAR_1->hw_ops.close)
   VAR_1->hw_ops.close(VAR_7->pdev);
  FUNC_1(VAR_1->owner);
 }
 FUNC_3(&VAR_7->lock);
 VAR_6->private_data = ((void*)0);

 FUNC_0(VAR_8);
 return 0;
}
