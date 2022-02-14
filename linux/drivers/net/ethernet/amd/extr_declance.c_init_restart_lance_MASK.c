
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_regs {int rap; int rdp; } ;
struct lance_private {struct lance_regs* ll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int) ;

__attribute__((used)) static int FUNC_3(struct lance_private *VAR_6)
{
 volatile struct lance_regs *VAR_7 = VAR_6->ll;
 int VAR_8;

 FUNC_2(&VAR_7->rap, VAR_5);
 FUNC_2(&VAR_7->rdp, VAR_3);


 for (VAR_8 = 0; (VAR_8 < 100) && !(VAR_7->rdp & VAR_1); VAR_8++) {
  FUNC_1(10);
 }
 if ((VAR_8 == 100) || (VAR_7->rdp & VAR_0)) {
  FUNC_0("LANCE unopened after %d ticks, csr0=%4.4x.\n",
         VAR_8, VAR_7->rdp);
  return -1;
 }
 if ((VAR_7->rdp & VAR_0)) {
  FUNC_0("LANCE unopened after %d ticks, csr0=%4.4x.\n",
         VAR_8, VAR_7->rdp);
  return -1;
 }
 FUNC_2(&VAR_7->rdp, VAR_1);
 FUNC_2(&VAR_7->rdp, VAR_4);
 FUNC_2(&VAR_7->rdp, VAR_2);

 return 0;
}
