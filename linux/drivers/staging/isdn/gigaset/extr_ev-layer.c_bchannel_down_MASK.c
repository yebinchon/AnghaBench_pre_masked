
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bc_state {int chstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bc_state*) ;
 int FUNC_1 (struct bc_state*) ;
 int FUNC_2 (struct bc_state*) ;
 int FUNC_3 (struct bc_state*) ;

__attribute__((used)) static void FUNC_4(struct bc_state *VAR_3)
{
 if (VAR_3->chstate & VAR_0) {
  VAR_3->chstate &= ~VAR_0;
  FUNC_2(VAR_3);
 }

 if (VAR_3->chstate & (VAR_1 | VAR_2)) {
  VAR_3->chstate &= ~(VAR_1 | VAR_2);
  FUNC_3(VAR_3);
 }

 FUNC_1(VAR_3);

 FUNC_0(VAR_3);
}
