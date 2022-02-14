
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_param {int value; } ;
struct iscsi_conn {int param_list; } ;
struct cxgbit_sock {int submode; struct iscsi_conn* conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct cxgbit_sock*) ;
 struct iscsi_param* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct cxgbit_sock *VAR_5)
{
 struct iscsi_conn *VAR_6 = VAR_5->conn;
 struct iscsi_param *VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_6->param_list);
 if (!VAR_7) {
  FUNC_2("param not found key %s\n", VAR_4);
  return -1;
 }

 if (!FUNC_3(VAR_7->value, VAR_0))
  VAR_5->submode |= VAR_2;

 VAR_7 = FUNC_1(VAR_3, VAR_6->param_list);
 if (!VAR_7) {
  VAR_5->submode = 0;
  FUNC_2("param not found key %s\n", VAR_3);
  return -1;
 }

 if (!FUNC_3(VAR_7->value, VAR_0))
  VAR_5->submode |= VAR_1;

 if (FUNC_0(VAR_5)) {
  VAR_5->submode = 0;
  return -1;
 }

 return 0;
}
