
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct file {int dummy; } ;
struct em28xx_v4l2 {int users; int ref; int v4l2_dev; } ;
struct em28xx {int ref; int lock; TYPE_1__* intf; scalar_t__ alt; scalar_t__ disconnected; struct em28xx_v4l2* v4l2; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct em28xx*,int ) ;
 int FUNC_2 (char*,...) ;
 struct usb_device* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct usb_device*,int ,int ) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (struct file*) ;
 struct em28xx* FUNC_10 (struct file*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_5)
{
 struct em28xx *VAR_6 = FUNC_10(VAR_5);
 struct em28xx_v4l2 *VAR_7 = VAR_6->v4l2;
 struct usb_device *VAR_8 = FUNC_3(VAR_6->intf);
 int VAR_9;

 FUNC_2("users=%d\n", VAR_7->users);

 FUNC_9(VAR_5);
 FUNC_5(&VAR_6->lock);

 if (VAR_7->users == 1) {

  if (VAR_6->disconnected)
   goto exit;


  FUNC_8(&VAR_7->v4l2_dev, 0, VAR_4, VAR_3);


  FUNC_1(VAR_6, VAR_0);


  VAR_6->alt = 0;
  FUNC_2("setting alternate 0\n");
  VAR_9 = FUNC_7(VAR_8, 0, 0);
  if (VAR_9 < 0) {
   FUNC_0(&VAR_6->intf->dev,
    "cannot change alternate number to 0 (error=%i)\n",
    VAR_9);
  }
 }

exit:
 VAR_7->users--;
 FUNC_4(&VAR_7->ref, VAR_2);
 FUNC_6(&VAR_6->lock);
 FUNC_4(&VAR_6->ref, VAR_1);

 return 0;
}
