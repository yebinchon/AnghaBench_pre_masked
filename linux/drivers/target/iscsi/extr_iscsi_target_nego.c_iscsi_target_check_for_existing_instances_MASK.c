
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_login {int checked_for_existing; int initial_exp_statsn; int cid; int tsih; } ;
struct iscsi_conn {int dummy; } ;


 int FUNC_0 (struct iscsi_conn*) ;
 int FUNC_1 (struct iscsi_conn*,int ,int ) ;

__attribute__((used)) static int FUNC_2(
 struct iscsi_conn *VAR_0,
 struct iscsi_login *VAR_1)
{
 if (VAR_1->checked_for_existing)
  return 0;

 VAR_1->checked_for_existing = 1;

 if (!VAR_1->tsih)
  return FUNC_0(VAR_0);
 else
  return FUNC_1(VAR_0, VAR_1->cid,
    VAR_1->initial_exp_statsn);
}
