
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub {int hdev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct usb_hub *VAR_2, unsigned VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_0(VAR_2->hdev)) {
  if (VAR_3 & VAR_1)
   VAR_4 = 1;
 } else {
  if (VAR_3 & VAR_0)
   VAR_4 = 1;
 }

 return VAR_4;
}
