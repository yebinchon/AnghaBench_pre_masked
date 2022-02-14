
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct socket {TYPE_1__* ops; struct sock* sk; } ;
struct sock {int sk_sndtimeo; int sk_allocation; int sk_reuse; } ;
struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_sw_tcp_conn {struct socket* sock; int sendpage; } ;
struct iscsi_session {int frwd_lock; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct TYPE_2__ {int sendpage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iscsi_cls_session*,struct iscsi_cls_conn*,int) ;
 int FUNC_1 (int ,struct iscsi_conn*,char*,int) ;
 int FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_tcp_conn*) ;
 int FUNC_4 (struct sock*) ;
 struct socket* FUNC_5 (int,int*) ;
 int FUNC_6 (struct socket*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct iscsi_cls_session *VAR_5,
         struct iscsi_cls_conn *VAR_6, uint64_t VAR_7,
         int VAR_8)
{
 struct iscsi_session *VAR_9 = VAR_5->dd_data;
 struct iscsi_conn *VAR_10 = VAR_6->dd_data;
 struct iscsi_tcp_conn *VAR_11 = VAR_10->dd_data;
 struct iscsi_sw_tcp_conn *VAR_12 = VAR_11->dd_data;
 struct sock *VAR_13;
 struct socket *VAR_14;
 int VAR_15;


 VAR_14 = FUNC_5((int)VAR_7, &VAR_15);
 if (!VAR_14) {
  FUNC_1(VAR_3, VAR_10,
      "sockfd_lookup failed %d\n", VAR_15);
  return -VAR_0;
 }

 VAR_15 = FUNC_0(VAR_5, VAR_6, VAR_8);
 if (VAR_15)
  goto free_socket;

 FUNC_7(&VAR_9->frwd_lock);

 VAR_12->sock = VAR_14;
 FUNC_8(&VAR_9->frwd_lock);


 VAR_13 = VAR_14->sk;
 VAR_13->sk_reuse = VAR_4;
 VAR_13->sk_sndtimeo = 15 * VAR_2;
 VAR_13->sk_allocation = VAR_1;
 FUNC_4(VAR_13);

 FUNC_2(VAR_10);
 VAR_12->sendpage = VAR_12->sock->ops->sendpage;



 FUNC_3(VAR_11);
 return 0;

free_socket:
 FUNC_6(VAR_14);
 return VAR_15;
}
