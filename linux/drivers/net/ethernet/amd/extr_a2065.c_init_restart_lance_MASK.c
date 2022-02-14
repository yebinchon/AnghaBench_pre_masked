
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_regs {int rdp; int rap; } ;
struct lance_private {struct lance_regs* ll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct lance_private *VAR_7)
{
 volatile struct lance_regs *VAR_8 = VAR_7->ll;
 int VAR_9;

 VAR_8->rap = VAR_6;
 VAR_8->rdp = VAR_4;


 for (VAR_9 = 0; (VAR_9 < 100) && !(VAR_8->rdp & (VAR_1 | VAR_2)); VAR_9++)
  FUNC_0();
 if ((VAR_9 == 100) || (VAR_8->rdp & VAR_1)) {
  FUNC_1("unopened after %d ticks, csr0=%04x\n", VAR_9, VAR_8->rdp);
  return -VAR_0;
 }


 VAR_8->rdp = VAR_2;
 VAR_8->rdp = VAR_3 | VAR_5;

 return 0;
}
