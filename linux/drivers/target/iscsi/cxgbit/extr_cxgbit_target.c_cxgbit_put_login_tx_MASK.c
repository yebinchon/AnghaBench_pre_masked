
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct iscsi_login {int* rsp; int* rsp_buf; int login_failed; scalar_t__ login_complete; } ;
struct iscsi_conn {int login_work; struct cxgbit_sock* context; } ;
struct TYPE_2__ {int flags; } ;
struct cxgbit_sock {TYPE_1__ com; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct cxgbit_sock*,int) ;
 scalar_t__ FUNC_1 (struct cxgbit_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct sk_buff*,int,int*,int) ;

int
FUNC_7(struct iscsi_conn *VAR_3, struct iscsi_login *VAR_4,
      u32 VAR_5)
{
 struct cxgbit_sock *VAR_6 = VAR_3->context;
 struct sk_buff *VAR_7;
 u32 VAR_8 = 0;
 u8 VAR_9 = ((-VAR_5) & 3);

 VAR_7 = FUNC_0(VAR_6, VAR_5 + VAR_9);
 if (!VAR_7)
  return -VAR_1;
 FUNC_6(VAR_7, 0, VAR_4->rsp, VAR_2);
 FUNC_6(VAR_7, VAR_2, VAR_4->rsp_buf, VAR_5);

 if (VAR_9)
  FUNC_6(VAR_7, VAR_2 + VAR_5,
          &VAR_8, VAR_9);

 if (VAR_4->login_complete) {
  if (FUNC_2(VAR_3)) {
   FUNC_3(VAR_7);
   return -1;
  }

  FUNC_5(VAR_0, &VAR_6->com.flags);
 }

 if (FUNC_1(VAR_6, VAR_7))
  return -1;

 if ((!VAR_4->login_complete) && (!VAR_4->login_failed))
  FUNC_4(&VAR_3->login_work, 0);

 return 0;
}
