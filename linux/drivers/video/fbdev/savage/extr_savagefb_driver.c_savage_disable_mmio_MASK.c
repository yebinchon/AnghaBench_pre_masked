
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_par {scalar_t__ chip; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 unsigned char FUNC_1 (int,struct savagefb_par*) ;
 int FUNC_2 (int,unsigned char,struct savagefb_par*) ;

__attribute__((used)) static void FUNC_3(struct savagefb_par *VAR_1)
{
 unsigned char VAR_2;

 FUNC_0("savage_disable_mmio\n");

 if (VAR_1->chip >= VAR_0) {
  FUNC_2(0x3d4, 0x40, VAR_1);
  VAR_2 = FUNC_1(0x3d5, VAR_1);
  FUNC_2(0x3d5, VAR_2 | 1, VAR_1);
 }
}
