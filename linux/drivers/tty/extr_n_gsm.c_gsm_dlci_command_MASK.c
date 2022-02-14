
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gsm_dlci {int gsm; } ;


 int FUNC_0 (int ,unsigned int,int const*,int) ;
 int FUNC_1 (int ,unsigned int,int const*,int) ;
 int FUNC_2 (unsigned int*,int ) ;

__attribute__((used)) static void FUNC_3(struct gsm_dlci *VAR_0, const u8 *VAR_1, int VAR_2)
{

 unsigned int VAR_3 = 0;
 while (VAR_2-- > 0) {
  if (FUNC_2(&VAR_3, *VAR_1++) == 1) {
   int VAR_4 = *VAR_1++;
   VAR_2--;

   VAR_4 >>= 1;

   if (VAR_4 > VAR_2)
    return;
   if (VAR_3 & 1)
    FUNC_0(VAR_0->gsm, VAR_3,
        VAR_1, VAR_4);
   else
    FUNC_1(VAR_0->gsm, VAR_3,
        VAR_1, VAR_4);
   return;
  }
 }
}
