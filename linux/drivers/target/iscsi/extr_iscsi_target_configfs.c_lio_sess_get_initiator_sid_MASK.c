
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_session {struct iscsi_session* fabric_sess_ptr; } ;
struct iscsi_session {int isid; } ;


 int FUNC_0 (unsigned char*,int ,char*,int ) ;

__attribute__((used)) static u32 FUNC_1(
 struct se_session *VAR_0,
 unsigned char *VAR_1,
 u32 VAR_2)
{
 struct iscsi_session *VAR_3 = VAR_0->fabric_sess_ptr;



 return FUNC_0(VAR_1, VAR_2, "%6phN", VAR_3->isid);
}
