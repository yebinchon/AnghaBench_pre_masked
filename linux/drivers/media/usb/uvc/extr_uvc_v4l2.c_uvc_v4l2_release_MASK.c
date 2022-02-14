
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_streaming {TYPE_1__* dev; int queue; } ;
struct uvc_fh {int vfh; struct uvc_streaming* stream; } ;
struct file {struct uvc_fh* private_data; } ;
struct TYPE_2__ {scalar_t__ users; int intf; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct uvc_fh*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct uvc_fh*) ;
 scalar_t__ FUNC_5 (struct uvc_fh*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_1)
{
 struct uvc_fh *VAR_2 = VAR_1->private_data;
 struct uvc_streaming *VAR_3 = VAR_2->stream;

 FUNC_8(VAR_0, "uvc_v4l2_release\n");


 if (FUNC_5(VAR_2))
  FUNC_6(&VAR_3->queue);


 FUNC_4(VAR_2);
 FUNC_9(&VAR_2->vfh);
 FUNC_10(&VAR_2->vfh);
 FUNC_0(VAR_2);
 VAR_1->private_data = ((void*)0);

 FUNC_1(&VAR_3->dev->lock);
 if (--VAR_3->dev->users == 0)
  FUNC_7(VAR_3->dev);
 FUNC_2(&VAR_3->dev->lock);

 FUNC_3(VAR_3->dev->intf);
 return 0;
}
