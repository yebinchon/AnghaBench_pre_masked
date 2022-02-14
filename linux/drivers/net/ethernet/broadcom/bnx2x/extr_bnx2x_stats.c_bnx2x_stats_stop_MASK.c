
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pmf; } ;
struct bnx2x {TYPE_1__ port; } ;


 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_0)
{
 bool VAR_1 = 0;

 FUNC_4(VAR_0);

 if (VAR_0->port.pmf)
  VAR_1 = (FUNC_1(VAR_0) == 0);

 VAR_1 |= (FUNC_5(VAR_0) == 0);

 if (VAR_1) {
  FUNC_2(VAR_0);

  if (VAR_0->port.pmf)
   FUNC_3(VAR_0);

  FUNC_0(VAR_0);
  FUNC_4(VAR_0);
 }
}
