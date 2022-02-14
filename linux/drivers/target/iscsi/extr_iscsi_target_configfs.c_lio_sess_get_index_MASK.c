
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_session {struct iscsi_session* fabric_sess_ptr; } ;
struct iscsi_session {int session_index; } ;



__attribute__((used)) static u32 FUNC_0(struct se_session *VAR_0)
{
 struct iscsi_session *VAR_1 = VAR_0->fabric_sess_ptr;

 return VAR_1->session_index;
}
