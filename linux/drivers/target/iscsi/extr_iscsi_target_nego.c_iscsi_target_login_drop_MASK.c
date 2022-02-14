
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_np {int dummy; } ;
struct iscsi_login {int zero_tsih; struct iscsi_np* np; } ;
struct iscsi_conn {int dummy; } ;


 int FUNC_0 (struct iscsi_conn*) ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_np*,int,int) ;
 int FUNC_2 (struct iscsi_conn*) ;

__attribute__((used)) static void FUNC_3(struct iscsi_conn *VAR_0, struct iscsi_login *VAR_1)
{
 struct iscsi_np *VAR_2 = VAR_1->np;
 bool VAR_3 = VAR_1->zero_tsih;

 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
 FUNC_1(VAR_0, VAR_2, VAR_3, 1);
}
