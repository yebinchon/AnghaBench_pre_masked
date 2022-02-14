
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ab8500_usb {int dev; int ab8500; } ;
typedef enum ab8505_usb_link_status { ____Placeholder_ab8505_usb_link_status } ab8505_usb_link_status ;
typedef enum ab8500_usb_link_status { ____Placeholder_ab8500_usb_link_status } ab8500_usb_link_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ab8500_usb*,int) ;
 int FUNC_1 (struct ab8500_usb*,int) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ab8500_usb *VAR_3)
{
 u8 VAR_4;
 int VAR_5 = 0;

 if (FUNC_3(VAR_3->ab8500)) {
  enum ab8500_usb_link_status VAR_6;

  VAR_5 = FUNC_2(VAR_3->dev,
    VAR_0, VAR_1, &VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_6 = (VAR_4 >> 3) & 0x0F;
  VAR_5 = FUNC_0(VAR_3, VAR_6);
 } else if (FUNC_4(VAR_3->ab8500)) {
  enum ab8505_usb_link_status VAR_7;

  VAR_5 = FUNC_2(VAR_3->dev,
    VAR_0, VAR_2, &VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_7 = (VAR_4 >> 3) & 0x1F;
  VAR_5 = FUNC_1(VAR_3, VAR_7);
 }

 return VAR_5;
}
