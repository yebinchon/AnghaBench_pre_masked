
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_nodeid; } ;
struct dlm_message {int m_lkid; TYPE_1__ m_header; } ;
struct dlm_lkb {int lkb_remid; int lkb_nodeid; } ;
struct dlm_ls {struct dlm_lkb ls_stub_lkb; } ;



__attribute__((used)) static void FUNC_0(struct dlm_ls *VAR_0, struct dlm_message *VAR_1)
{
 struct dlm_lkb *VAR_2 = &VAR_0->ls_stub_lkb;
 VAR_2->lkb_nodeid = VAR_1->m_header.h_nodeid;
 VAR_2->lkb_remid = VAR_1->m_lkid;
}
