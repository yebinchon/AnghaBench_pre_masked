
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsit_transport {int name; int owner; } ;
struct iscsi_conn {struct iscsit_transport* conn_transport; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct iscsi_conn *VAR_1, struct iscsit_transport *VAR_2)
{
 int VAR_3;

 if (!VAR_2->owner) {
  VAR_1->conn_transport = VAR_2;
  return 0;
 }

 VAR_3 = FUNC_1(VAR_2->owner);
 if (!VAR_3) {
  FUNC_0("try_module_get() failed for %s\n", VAR_2->name);
  return -VAR_0;
 }

 VAR_1->conn_transport = VAR_2;
 return 0;
}
