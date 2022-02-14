
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct urb {int dummy; } ;
struct peak_usb_device {TYPE_1__* adapter; } ;
struct TYPE_2__ {int (* dev_restart_async ) (struct peak_usb_device*,struct urb*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (struct peak_usb_device*) ;
 int FUNC_3 (struct peak_usb_device*,struct urb*,int *) ;
 struct urb* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct urb*) ;

__attribute__((used)) static int FUNC_6(struct peak_usb_device *VAR_3)
{
 struct urb *VAR_4;
 int VAR_5;
 u8 *VAR_6;





 if (!VAR_3->adapter->dev_restart_async) {
  FUNC_2(VAR_3);
  return 0;
 }


 VAR_4 = FUNC_4(0, VAR_1);
 if (!VAR_4)
  return -VAR_0;


 VAR_6 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_6) {
  FUNC_5(VAR_4);
  return -VAR_0;
 }


 VAR_5 = VAR_3->adapter->dev_restart_async(VAR_3, VAR_4, VAR_6);
 if (!VAR_5)
  return 0;

 FUNC_0(VAR_6);
 FUNC_5(VAR_4);

 return VAR_5;
}
