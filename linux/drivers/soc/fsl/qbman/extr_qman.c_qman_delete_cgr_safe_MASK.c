
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_cgr {size_t cgrid; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__* VAR_0 ;
 int FUNC_2 (struct qman_cgr*) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int ,struct qman_cgr*,int) ;
 scalar_t__ FUNC_4 () ;

void FUNC_5(struct qman_cgr *VAR_2)
{
 FUNC_0();
 if (VAR_0[VAR_2->cgrid] != FUNC_4()) {
  FUNC_3(VAR_0[VAR_2->cgrid],
      VAR_1, VAR_2, 1);
  FUNC_1();
  return;
 }

 FUNC_2(VAR_2);
 FUNC_1();
}
