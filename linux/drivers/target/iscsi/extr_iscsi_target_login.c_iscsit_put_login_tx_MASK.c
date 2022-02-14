
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_login {int rsp_buf; int rsp; } ;
struct iscsi_conn {int dummy; } ;


 scalar_t__ FUNC_0 (struct iscsi_conn*,int ,int ,int ) ;

int FUNC_1(struct iscsi_conn *VAR_0, struct iscsi_login *VAR_1,
   u32 VAR_2)
{
 if (FUNC_0(VAR_0, VAR_1->rsp, VAR_1->rsp_buf, VAR_2) < 0)
  return -1;

 return 0;
}
