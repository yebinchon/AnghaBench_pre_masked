
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int sk_callback_lock; struct iscsi_conn* sk_user_data; } ;
struct TYPE_6__ {int segment; } ;
struct iscsi_tcp_conn {TYPE_2__ in; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; } ;
struct TYPE_5__ {struct iscsi_conn* data; } ;
struct TYPE_7__ {int count; TYPE_1__ arg; } ;
typedef TYPE_3__ read_descriptor_t ;


 int FUNC_0 (struct sock*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*,TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_1)
{
 struct iscsi_conn *VAR_2;
 struct iscsi_tcp_conn *VAR_3;
 read_descriptor_t VAR_4;

 FUNC_2(&VAR_1->sk_callback_lock);
 VAR_2 = VAR_1->sk_user_data;
 if (!VAR_2) {
  FUNC_3(&VAR_1->sk_callback_lock);
  return;
 }
 VAR_3 = VAR_2->dd_data;







 VAR_4.arg.data = VAR_2;
 VAR_4.count = 1;
 FUNC_4(VAR_1, &VAR_4, VAR_0);

 FUNC_0(VAR_1);



 FUNC_1(&VAR_3->in.segment);
 FUNC_3(&VAR_1->sk_callback_lock);
}
