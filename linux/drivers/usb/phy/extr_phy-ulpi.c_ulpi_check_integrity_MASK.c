
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct usb_phy*,int ) ;
 int FUNC_3 (struct usb_phy*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_phy *VAR_2)
{
 int VAR_3, VAR_4;
 unsigned int VAR_5 = 0x55;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  VAR_3 = FUNC_3(VAR_2, VAR_5, VAR_1);
  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_2(VAR_2, VAR_1);
  if (VAR_3 < 0)
   return VAR_3;

  if (VAR_3 != VAR_5) {
   FUNC_0("ULPI integrity check: failed!");
   return -VAR_0;
  }
  VAR_5 = VAR_5 << 1;
 }

 FUNC_1("ULPI integrity check: passed.\n");

 return 0;
}
