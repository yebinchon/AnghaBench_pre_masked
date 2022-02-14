
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union qm_mr_entry {int verb; } ;
struct qm_portal {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qm_portal*) ;
 union qm_mr_entry* FUNC_1 (struct qm_portal*) ;
 int FUNC_2 (struct qm_portal*) ;
 int FUNC_3 (struct qm_portal*) ;

__attribute__((used)) static int FUNC_4(struct qm_portal *VAR_1, int VAR_2)
{
 const union qm_mr_entry *VAR_3;
 int VAR_4 = 0;

 FUNC_3(VAR_1);
 VAR_3 = FUNC_1(VAR_1);
 while (VAR_3) {
  if ((VAR_3->verb & VAR_0) == VAR_2)
   VAR_4 = 1;
  FUNC_2(VAR_1);
  FUNC_0(VAR_1);
  FUNC_3(VAR_1);
  VAR_3 = FUNC_1(VAR_1);
 }
 return VAR_4;
}
