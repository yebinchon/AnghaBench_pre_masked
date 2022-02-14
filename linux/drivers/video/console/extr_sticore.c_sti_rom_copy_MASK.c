
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0, unsigned long VAR_1, void *VAR_2)
{
 unsigned long VAR_3 = (unsigned long) VAR_2;


 while (VAR_1 >= 4) {
  VAR_1 -= 4;
  *(u32 *)VAR_2 = FUNC_1(VAR_0);
  VAR_0 += 4;
  VAR_2 += 4;
 }
 while (VAR_1) {
  VAR_1--;
  *(u8 *)VAR_2 = FUNC_0(VAR_0);
  VAR_0++;
  VAR_2++;
 }

 FUNC_2(VAR_3, (unsigned long)VAR_2);
}
