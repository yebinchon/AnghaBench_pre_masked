
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct lance_regs {int rap; int rdp; } ;
struct lance_private {int busmaster_regval; struct lance_regs* ll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct lance_private *VAR_4)
{
 volatile struct lance_regs *VAR_5 = VAR_4->ll;
 uint VAR_6;




 VAR_6 = 0;

 FUNC_0(&VAR_5->rap, VAR_1);
 FUNC_0(&VAR_5->rdp, (VAR_6 & 0xFFFF));
 FUNC_0(&VAR_5->rap, VAR_2);
 FUNC_0(&VAR_5->rdp, VAR_6 >> 16);
 FUNC_0(&VAR_5->rap, VAR_3);
 FUNC_0(&VAR_5->rdp, VAR_4->busmaster_regval);


 FUNC_0(&VAR_5->rap, VAR_0);
}
