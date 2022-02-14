
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ link_up; } ;
struct bnx2x {int cmng; TYPE_1__ link_vars; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*,int,int ) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*,int *,int ) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_2)
{




 if (!FUNC_2(VAR_2)) {
  FUNC_1(VAR_0,
     "Ignoring MF BW config in single function mode\n");
  return;
 }

 if (VAR_2->link_vars.link_up) {
  FUNC_3(VAR_2, 1, VAR_1);
  FUNC_4(VAR_2);
 }
 FUNC_5(VAR_2, &VAR_2->cmng, FUNC_0(VAR_2));
}
