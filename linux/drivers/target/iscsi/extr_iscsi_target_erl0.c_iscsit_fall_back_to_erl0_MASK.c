
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int session_fall_back_to_erl0; int sid; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(struct iscsi_session *VAR_0)
{
 FUNC_1("Falling back to ErrorRecoveryLevel=0 for SID:"
   " %u\n", VAR_0->sid);

 FUNC_0(&VAR_0->session_fall_back_to_erl0, 1);
}
