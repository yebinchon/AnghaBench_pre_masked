
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_par {int dummy; } ;


 int FUNC_0 (int,struct savagefb_par*) ;
 int FUNC_1 (int,int,struct savagefb_par*) ;

__attribute__((used)) static inline void FUNC_2(struct savagefb_par *VAR_0)
{
 FUNC_1(0x3d4, 0x17, VAR_0);
 if (FUNC_0(0x3d5, VAR_0) & 0x80) {
  while ((FUNC_0(0x3da, VAR_0) & 0x08) == 0x08);
  while ((FUNC_0(0x3da, VAR_0) & 0x08) == 0x00);
 }
}
