
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_encoder_cmd {int cmd; scalar_t__ flags; } ;
struct hdpvr_device {int io_mutex; int v4l2_dev; int * owner; int status; } ;
struct file {int * private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (struct hdpvr_device*) ;
 int FUNC_1 (struct hdpvr_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *,char*,int) ;
 struct hdpvr_device* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_6, void *VAR_7,
          struct v4l2_encoder_cmd *VAR_8)
{
 struct hdpvr_device *VAR_9 = FUNC_5(VAR_6);
 int VAR_10 = 0;

 FUNC_2(&VAR_9->io_mutex);
 VAR_8->flags = 0;

 switch (VAR_8->cmd) {
 case 129:
  if (VAR_9->owner && VAR_6->private_data != VAR_9->owner) {
   VAR_10 = -VAR_0;
   break;
  }
  if (VAR_9->status == VAR_4)
   break;
  VAR_10 = FUNC_0(VAR_9);
  if (!VAR_10)
   VAR_9->owner = VAR_6->private_data;
  else
   VAR_9->status = VAR_3;
  break;
 case 128:
  if (VAR_9->owner && VAR_6->private_data != VAR_9->owner) {
   VAR_10 = -VAR_0;
   break;
  }
  if (VAR_9->status == VAR_3)
   break;
  VAR_10 = FUNC_1(VAR_9);
  if (!VAR_10)
   VAR_9->owner = ((void*)0);
  break;
 default:
  FUNC_4(VAR_2, VAR_5, &VAR_9->v4l2_dev,
    "Unsupported encoder cmd %d\n", VAR_8->cmd);
  VAR_10 = -VAR_1;
  break;
 }

 FUNC_3(&VAR_9->io_mutex);
 return VAR_10;
}
