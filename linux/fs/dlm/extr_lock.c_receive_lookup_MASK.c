
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_nodeid; } ;
struct dlm_message {int m_extra; TYPE_1__ m_header; } ;
struct dlm_ls {int dummy; } ;


 int FUNC_0 (struct dlm_ls*,int,int ,int,int ,int*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dlm_message*) ;
 int FUNC_3 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_4 (struct dlm_ls*,struct dlm_message*,int,int) ;

__attribute__((used)) static void FUNC_5(struct dlm_ls *VAR_0, struct dlm_message *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_5 = VAR_1->m_header.h_nodeid;
 VAR_6 = FUNC_1();

 VAR_2 = FUNC_2(VAR_1);

 VAR_3 = FUNC_0(VAR_0, VAR_5, VAR_1->m_extra, VAR_2, 0,
      &VAR_4, ((void*)0));


 if (!VAR_3 && VAR_4 == VAR_6) {
  FUNC_3(VAR_0, VAR_1);
  return;
 }
 FUNC_4(VAR_0, VAR_1, VAR_4, VAR_3);
}
