
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union qm_mr_entry {scalar_t__ verb; } ;
typedef scalar_t__ u8 ;
struct qman_portal {int dummy; } ;
struct qman_fq {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct qman_portal *VAR_5, struct qman_fq *VAR_6,
     const union qm_mr_entry *VAR_7)
{
 u8 VAR_8 = (VAR_7->verb & VAR_2);

 if ((VAR_8 != VAR_0) && (VAR_8 != VAR_1)) {
  FUNC_1("unexpected FQS message");
  FUNC_0(1);
  return;
 }
 FUNC_2("Retirement message received\n");
 VAR_3 = 1;
 FUNC_3(&VAR_4);
}
