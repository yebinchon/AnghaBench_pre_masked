
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_par {int dummy; } ;


 int FUNC_0 (int,int,struct savagefb_par*) ;
 int FUNC_1 (int,int,struct savagefb_par*) ;

__attribute__((used)) static void FUNC_2(struct savagefb_par *VAR_0, int VAR_1)
{

 FUNC_0(0x3d4, (VAR_1 & 0x00ff00) | 0x0c, VAR_0);
 FUNC_0(0x3d4, ((VAR_1 & 0x00ff) << 8) | 0x0d, VAR_0);
 FUNC_1(0x3d4, 0x69, VAR_0);
 FUNC_1(0x3d5, (VAR_1 & 0x7f0000) >> 16, VAR_0);
}
