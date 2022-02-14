
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vga_regset {scalar_t__ regnum; scalar_t__ lowbit; scalar_t__ highbit; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(const struct vga_regset *VAR_1)
{
 u8 VAR_2 = 0;

 while (VAR_1->regnum != VAR_0) {
  VAR_2 += VAR_1->highbit - VAR_1->lowbit + 1;
  VAR_1 ++;
 }
 return 1 << VAR_2;
}
