
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_fh {int fh; scalar_t__ io_allowed; struct vpfe_device* vpfe_dev; } ;
struct vpfe_device {int lock; int usrs; int initialized; int v4l2_dev; TYPE_1__* cfg; } ;
struct video_device {int dummy; } ;
struct file {struct vpfe_fh* private_data; } ;
struct TYPE_2__ {int num_subdevs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vpfe_fh*) ;
 struct vpfe_fh* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ,int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct video_device*) ;
 struct video_device* FUNC_9 (struct file*) ;
 struct vpfe_device* FUNC_10 (struct file*) ;
 scalar_t__ FUNC_11 (struct vpfe_device*) ;

__attribute__((used)) static int FUNC_12(struct file *VAR_4)
{
 struct vpfe_device *VAR_5 = FUNC_10(VAR_4);
 struct video_device *VAR_6 = FUNC_9(VAR_4);
 struct vpfe_fh *VAR_7;

 FUNC_4(1, VAR_3, &VAR_5->v4l2_dev, "vpfe_open\n");

 if (!VAR_5->cfg->num_subdevs) {
  FUNC_5(&VAR_5->v4l2_dev, "No decoder registered\n");
  return -VAR_0;
 }


 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;


 VAR_4->private_data = VAR_7;
 VAR_7->vpfe_dev = VAR_5;
 FUNC_8(&VAR_7->fh, VAR_6);
 FUNC_2(&VAR_5->lock);

 if (!VAR_5->initialized) {
  if (FUNC_11(VAR_5)) {
   FUNC_3(&VAR_5->lock);
   FUNC_7(&VAR_7->fh);
   FUNC_0(VAR_7);
   return -VAR_0;
  }
 }

 VAR_5->usrs++;

 VAR_7->io_allowed = 0;
 FUNC_6(&VAR_7->fh);
 FUNC_3(&VAR_5->lock);
 return 0;
}
