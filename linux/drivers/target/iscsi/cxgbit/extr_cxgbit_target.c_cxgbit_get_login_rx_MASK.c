
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_login {int dummy; } ;
struct iscsi_conn {struct cxgbit_sock* context; } ;
struct TYPE_2__ {int flags; } ;
struct cxgbit_sock {TYPE_1__ com; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cxgbit_sock*) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct iscsi_conn *VAR_1, struct iscsi_login *VAR_2)
{
 struct cxgbit_sock *VAR_3 = VAR_1->context;
 int VAR_4 = -1;

 while (!FUNC_2(VAR_0, &VAR_3->com.flags)) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4) {
   FUNC_0(VAR_0, &VAR_3->com.flags);
   break;
  }
 }

 return VAR_4;
}
