
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si470x_device {int * usb_buf; int hardware_version; int software_version; TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct si470x_device*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct si470x_device *VAR_3)
{
 int VAR_4;

 VAR_3->usb_buf[0] = VAR_1;

 VAR_4 = FUNC_1(VAR_3, VAR_3->usb_buf, VAR_2);

 if (VAR_4 < 0)
  FUNC_0(&VAR_3->intf->dev, "si470x_get_scratch: si470x_get_report returned %d\n",
    VAR_4);
 else {
  VAR_3->software_version = VAR_3->usb_buf[1];
  VAR_3->hardware_version = VAR_3->usb_buf[2];
 }

 return (VAR_4 < 0) ? -VAR_0 : 0;
}
