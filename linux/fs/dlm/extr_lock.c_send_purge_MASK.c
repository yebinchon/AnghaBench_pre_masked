
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_mhandle {int dummy; } ;
struct dlm_message {int m_nodeid; int m_pid; } ;
struct dlm_ls {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_ls*,int,int,int ,struct dlm_message**,struct dlm_mhandle**) ;
 int FUNC_1 (struct dlm_mhandle*,struct dlm_message*) ;

__attribute__((used)) static int FUNC_2(struct dlm_ls *VAR_1, int VAR_2, int VAR_3)
{
 struct dlm_message *VAR_4;
 struct dlm_mhandle *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, sizeof(struct dlm_message), VAR_2,
    VAR_0, &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;
 VAR_4->m_nodeid = VAR_2;
 VAR_4->m_pid = VAR_3;

 return FUNC_1(VAR_5, VAR_4);
}
