
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union qm_mr_entry {int verb; } ;
struct qm_portal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct qm_portal*,int) ;
 union qm_mr_entry* FUNC_3 (struct qm_portal*) ;
 int FUNC_4 (struct qm_portal*) ;
 int FUNC_5 (struct qm_portal*) ;

__attribute__((used)) static int FUNC_6(struct qm_portal *VAR_2)
{
 const union qm_mr_entry *VAR_3;
loop:
 FUNC_5(VAR_2);
 VAR_3 = FUNC_3(VAR_2);
 if (!VAR_3) {
  FUNC_0(1);
  FUNC_5(VAR_2);
  VAR_3 = FUNC_3(VAR_2);
  if (!VAR_3)
   return 0;
 }
 if ((VAR_3->verb & VAR_1) != VAR_0) {

  FUNC_1("Found verb 0x%x in MR\n", VAR_3->verb);
  return -1;
 }
 FUNC_4(VAR_2);
 FUNC_2(VAR_2, 1);
 goto loop;
}
