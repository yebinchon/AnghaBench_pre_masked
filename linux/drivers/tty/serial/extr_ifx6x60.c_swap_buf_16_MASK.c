
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int *,void*) ;

__attribute__((used)) static inline void FUNC_2(unsigned char *VAR_0, int VAR_1, void *VAR_2)
{
 int VAR_3;

 u16 *VAR_4 = (u16 *)VAR_0;
 VAR_1 = ((VAR_1 + 1) >> 1);
 if ((void *)&VAR_4[VAR_1] > VAR_2) {
  FUNC_1("swap_buf_16: swap exceeds boundary (%p > %p)!",
         &VAR_4[VAR_1], VAR_2);
  return;
 }
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  *VAR_4 = FUNC_0(*VAR_4);
  VAR_4++;
 }
}
