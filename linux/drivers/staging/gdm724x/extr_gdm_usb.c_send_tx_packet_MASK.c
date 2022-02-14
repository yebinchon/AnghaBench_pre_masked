
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_tx {int urb; int buf; } ;
struct usb_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct usb_device*,int ,int ,int,int ,struct usb_tx*) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_device *VAR_2, struct usb_tx *VAR_3, u32 VAR_4)
{
 int VAR_5 = 0;

 if (!(VAR_4 % 512))
  VAR_4++;

 FUNC_1(VAR_3->urb,
     VAR_2,
     FUNC_3(VAR_2, 2),
     VAR_3->buf,
     VAR_4,
     VAR_1,
     VAR_3);

 VAR_5 = FUNC_4(VAR_3->urb, VAR_0);

 if (VAR_5)
  FUNC_0(&VAR_2->dev, "usb_submit_urb failed: %d\n",
   VAR_5);

 FUNC_2(VAR_2);

 return VAR_5;
}
