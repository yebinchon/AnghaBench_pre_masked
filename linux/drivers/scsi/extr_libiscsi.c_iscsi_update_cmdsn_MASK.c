
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int dummy; } ;
struct iscsi_nopin {int max_cmdsn; int exp_cmdsn; } ;


 int FUNC_0 (struct iscsi_session*,int ,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct iscsi_session *VAR_0, struct iscsi_nopin *VAR_1)
{
 FUNC_0(VAR_0, FUNC_1(VAR_1->exp_cmdsn),
        FUNC_1(VAR_1->max_cmdsn));
}
