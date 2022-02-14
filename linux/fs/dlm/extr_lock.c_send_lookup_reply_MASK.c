
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_rsb {int dummy; } ;
struct dlm_mhandle {int dummy; } ;
struct TYPE_2__ {int h_nodeid; } ;
struct dlm_message {int m_result; int m_nodeid; int m_lkid; TYPE_1__ m_header; } ;
struct dlm_ls {struct dlm_rsb ls_stub_rsb; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_rsb*,int *,int,int ,struct dlm_message**,struct dlm_mhandle**) ;
 int FUNC_1 (struct dlm_mhandle*,struct dlm_message*) ;

__attribute__((used)) static int FUNC_2(struct dlm_ls *VAR_1, struct dlm_message *VAR_2,
        int VAR_3, int VAR_4)
{
 struct dlm_rsb *VAR_5 = &VAR_1->ls_stub_rsb;
 struct dlm_message *VAR_6;
 struct dlm_mhandle *VAR_7;
 int VAR_8, VAR_9 = VAR_2->m_header.h_nodeid;

 VAR_8 = FUNC_0(VAR_5, ((void*)0), VAR_9, VAR_0, &VAR_6, &VAR_7);
 if (VAR_8)
  goto out;

 VAR_6->m_lkid = VAR_2->m_lkid;
 VAR_6->m_result = VAR_4;
 VAR_6->m_nodeid = VAR_3;

 VAR_8 = FUNC_1(VAR_7, VAR_6);
 out:
 return VAR_8;
}
