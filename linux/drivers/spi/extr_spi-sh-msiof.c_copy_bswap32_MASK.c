
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (void*,int *) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(u32 *VAR_0, const u32 *VAR_1, unsigned int VAR_2)
{

 if ((unsigned long)VAR_1 & 3) {
  while (VAR_2--) {
   *VAR_0++ = FUNC_2(FUNC_0(VAR_1));
   VAR_1++;
  }
 } else if ((unsigned long)VAR_0 & 3) {
  while (VAR_2--) {
   FUNC_1(FUNC_2(*VAR_1++), VAR_0);
   VAR_0++;
  }
 } else {
  while (VAR_2--)
   *VAR_0++ = FUNC_2(*VAR_1++);
 }
}
