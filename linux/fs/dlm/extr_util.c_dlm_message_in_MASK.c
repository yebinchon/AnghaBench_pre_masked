
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_message {void* m_result; void* m_asts; void* m_bastmode; void* m_rqmode; void* m_grmode; void* m_status; void* m_hash; void* m_lvbseq; void* m_flags; void* m_sbflags; void* m_exflags; void* m_parent_remid; void* m_parent_lkid; void* m_remid; void* m_lkid; void* m_pid; void* m_nodeid; void* m_type; int m_header; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (void*) ;

void FUNC_3(struct dlm_message *VAR_0)
{
 FUNC_1(&VAR_0->m_header);

 VAR_0->m_type = FUNC_2(VAR_0->m_type);
 VAR_0->m_nodeid = FUNC_2(VAR_0->m_nodeid);
 VAR_0->m_pid = FUNC_2(VAR_0->m_pid);
 VAR_0->m_lkid = FUNC_2(VAR_0->m_lkid);
 VAR_0->m_remid = FUNC_2(VAR_0->m_remid);
 VAR_0->m_parent_lkid = FUNC_2(VAR_0->m_parent_lkid);
 VAR_0->m_parent_remid = FUNC_2(VAR_0->m_parent_remid);
 VAR_0->m_exflags = FUNC_2(VAR_0->m_exflags);
 VAR_0->m_sbflags = FUNC_2(VAR_0->m_sbflags);
 VAR_0->m_flags = FUNC_2(VAR_0->m_flags);
 VAR_0->m_lvbseq = FUNC_2(VAR_0->m_lvbseq);
 VAR_0->m_hash = FUNC_2(VAR_0->m_hash);
 VAR_0->m_status = FUNC_2(VAR_0->m_status);
 VAR_0->m_grmode = FUNC_2(VAR_0->m_grmode);
 VAR_0->m_rqmode = FUNC_2(VAR_0->m_rqmode);
 VAR_0->m_bastmode = FUNC_2(VAR_0->m_bastmode);
 VAR_0->m_asts = FUNC_2(VAR_0->m_asts);
 VAR_0->m_result = FUNC_0(FUNC_2(VAR_0->m_result));
}
