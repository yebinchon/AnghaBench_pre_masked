
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct si470x_device {int hdl; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct si470x_device*) ;
 struct si470x_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_0)
{
 struct si470x_device *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_0(&VAR_0->dev, "resuming now...\n");


 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == 0)
  FUNC_3(&VAR_1->hdl);

 return VAR_2;
}
