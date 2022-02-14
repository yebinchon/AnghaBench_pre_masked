
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_message {int m_type; } ;
struct dlm_ls {int ls_generation; } ;


 int FUNC_0 (struct dlm_ls*,struct dlm_message*,int ) ;
 int FUNC_1 (struct dlm_ls*,int,struct dlm_message*) ;
 scalar_t__ FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (struct dlm_ls*) ;
 int FUNC_4 (struct dlm_ls*,char*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct dlm_ls *VAR_0, struct dlm_message *VAR_1,
    int VAR_2)
{
 if (FUNC_2(VAR_0)) {



  if (!VAR_0->ls_generation) {
   FUNC_4(VAR_0, "receive %d from %d ignore old gen",
      VAR_1->m_type, VAR_2);
   return;
  }

  FUNC_1(VAR_0, VAR_2, VAR_1);
 } else {
  FUNC_3(VAR_0);
  FUNC_0(VAR_0, VAR_1, 0);
 }
}
