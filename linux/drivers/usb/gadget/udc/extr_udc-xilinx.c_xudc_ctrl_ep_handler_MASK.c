
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xusb_udc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xusb_udc*) ;
 int FUNC_1 (struct xusb_udc*) ;
 int FUNC_2 (struct xusb_udc*) ;

__attribute__((used)) static void FUNC_3(struct xusb_udc *VAR_3, u32 VAR_4)
{

 if (VAR_4 & VAR_2) {
  FUNC_2(VAR_3);
 } else {
  if (VAR_4 & VAR_1)
   FUNC_1(VAR_3);
  else if (VAR_4 & VAR_0)
   FUNC_0(VAR_3);
 }
}
