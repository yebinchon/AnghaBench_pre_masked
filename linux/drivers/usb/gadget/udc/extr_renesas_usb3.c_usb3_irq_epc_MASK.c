
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct renesas_usb3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct renesas_usb3*,int) ;
 int FUNC_1 (struct renesas_usb3*,int) ;
 int FUNC_2 (struct renesas_usb3*,int) ;
 int FUNC_3 (struct renesas_usb3*,int ) ;
 int FUNC_4 (struct renesas_usb3*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct renesas_usb3 *VAR_6)
{
 u32 VAR_7 = FUNC_3(VAR_6, VAR_2);
 u32 VAR_8 = FUNC_3(VAR_6, VAR_3);
 u32 VAR_9 = FUNC_3(VAR_6, VAR_5);

 VAR_7 &= FUNC_3(VAR_6, VAR_0);
 if (VAR_7) {
  FUNC_4(VAR_6, VAR_7, VAR_2);
  FUNC_0(VAR_6, VAR_7);
 }

 VAR_8 &= FUNC_3(VAR_6, VAR_1);
 if (VAR_8)
  FUNC_1(VAR_6, VAR_8);

 VAR_9 &= FUNC_3(VAR_6, VAR_4);
 if (VAR_9) {
  FUNC_4(VAR_6, VAR_9, VAR_5);
  FUNC_2(VAR_6, VAR_9);
 }
}
