
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_login_req {int cid; } ;
struct iscsi_conn {int dummy; } ;


 int FUNC_0 (int *,struct iscsi_conn*,int ) ;

__attribute__((used)) static int FUNC_1(
 struct iscsi_conn *VAR_0,
 unsigned char *VAR_1)
{
 struct iscsi_login_req *VAR_2 = (struct iscsi_login_req *)VAR_1;

 return FUNC_0(((void*)0), VAR_0, VAR_2->cid);
}
