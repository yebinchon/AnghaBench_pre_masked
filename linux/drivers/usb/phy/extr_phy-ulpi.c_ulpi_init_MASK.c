
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_phy {int dummy; } ;
struct TYPE_3__ {scalar_t__ id; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (struct usb_phy*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (struct usb_phy*) ;
 int FUNC_5 (struct usb_phy*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct usb_phy *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 u32 VAR_7 = 0;

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_6 = FUNC_5(VAR_2, VAR_0 - VAR_3);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_7 = (VAR_7 << 8) | VAR_6;
 }
 VAR_4 = VAR_7 & 0xffff;
 VAR_5 = VAR_7 >> 16;

 FUNC_2("ULPI transceiver vendor/product ID 0x%04x/0x%04x\n", VAR_4, VAR_5);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  if (VAR_1[VAR_3].id == FUNC_1(VAR_4, VAR_5)) {
   FUNC_2("Found %s ULPI transceiver.\n",
    VAR_1[VAR_3].name);
   break;
  }
 }

 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6)
  return VAR_6;

 return FUNC_4(VAR_2);
}
