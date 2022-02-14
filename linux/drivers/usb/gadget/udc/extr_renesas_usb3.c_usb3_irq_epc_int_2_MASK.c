
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct renesas_usb3 {int num_usb3_eps; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct renesas_usb3*) ;
 int FUNC_2 (struct renesas_usb3*,int) ;

__attribute__((used)) static void FUNC_3(struct renesas_usb3 *VAR_0, u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_usb3_eps; VAR_2++) {
  if (VAR_1 & FUNC_0(VAR_2)) {
   if (!VAR_2)
    FUNC_1(VAR_0);
   else
    FUNC_2(VAR_0, VAR_2);
  }
 }
}
