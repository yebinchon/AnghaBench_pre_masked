
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct peak_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct peak_usb_device*,int ) ;
 int FUNC_2 (struct peak_usb_device*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct peak_usb_device *VAR_3, u8 VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (!VAR_4) {
  VAR_5 = FUNC_2(VAR_3, VAR_1);
 } else {

  FUNC_4(VAR_2);
  FUNC_3(FUNC_0(VAR_0));
 }

 return VAR_5;
}
