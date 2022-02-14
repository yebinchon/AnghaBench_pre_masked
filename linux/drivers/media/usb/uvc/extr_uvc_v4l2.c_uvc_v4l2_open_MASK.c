
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_streaming {int chain; int vdev; TYPE_1__* dev; } ;
struct uvc_fh {int state; struct uvc_streaming* stream; int chain; int vfh; } ;
struct file {struct uvc_fh* private_data; } ;
struct TYPE_2__ {scalar_t__ users; int lock; int intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uvc_fh*) ;
 struct uvc_fh* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 struct uvc_streaming* FUNC_10 (struct file*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_4)
{
 struct uvc_streaming *VAR_5;
 struct uvc_fh *VAR_6;
 int VAR_7 = 0;

 FUNC_7(VAR_3, "uvc_v4l2_open\n");
 VAR_5 = FUNC_10(VAR_4);

 VAR_7 = FUNC_4(VAR_5->dev->intf);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_5(VAR_5->dev->intf);
  return -VAR_0;
 }

 FUNC_2(&VAR_5->dev->lock);
 if (VAR_5->dev->users == 0) {
  VAR_7 = FUNC_6(VAR_5->dev, VAR_1);
  if (VAR_7 < 0) {
   FUNC_3(&VAR_5->dev->lock);
   FUNC_5(VAR_5->dev->intf);
   FUNC_0(VAR_6);
   return VAR_7;
  }
 }

 VAR_5->dev->users++;
 FUNC_3(&VAR_5->dev->lock);

 FUNC_9(&VAR_6->vfh, &VAR_5->vdev);
 FUNC_8(&VAR_6->vfh);
 VAR_6->chain = VAR_5->chain;
 VAR_6->stream = VAR_5;
 VAR_6->state = VAR_2;
 VAR_4->private_data = VAR_6;

 return 0;
}
