
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct tridentfb_par*,int ) ;
 int FUNC_2 (struct tridentfb_par*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct tridentfb_par *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;

 while (FUNC_1(VAR_1, VAR_0) & 0x80) {
  VAR_2++;
  if (VAR_2 == 10000000) {

   VAR_2 = 9990000;
   VAR_3++;
   if (VAR_3 == 8) {

    FUNC_2(VAR_1, 0x00, VAR_0);
    return;
   }
  }
  FUNC_0();
 }
}
