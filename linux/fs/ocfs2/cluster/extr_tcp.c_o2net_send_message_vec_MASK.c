
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct o2net_status_wait {int ns_status; int ns_sys_status; int ns_wq; int ns_id; int ns_node_item; } ;
struct o2net_sock_container {int sc_send_lock; int sc_sock; } ;
struct o2net_send_tracking {int dummy; } ;
struct o2net_node {int nn_sc_wq; } ;
struct o2net_msg {int iov_len; int msg_num; struct o2net_msg* iov_base; } ;
struct kvec {int iov_len; int msg_num; struct kvec* iov_base; } ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 size_t VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 size_t FUNC_2 (struct iovec*,size_t) ;
 int FUNC_3 (struct o2net_msg*) ;
 struct o2net_msg* FUNC_4 (int,int ) ;
 struct o2net_msg* FUNC_5 (size_t,int,int ) ;
 int FUNC_6 (struct o2net_msg*,struct o2net_msg*,size_t) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct o2net_msg*,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct o2net_node*,struct o2net_status_wait*,int ,int ,int ) ;
 int FUNC_12 (struct o2net_send_tracking*) ;
 int FUNC_13 (struct o2net_send_tracking*) ;
 int FUNC_14 (struct o2net_msg*,size_t,int ,int ) ;
 int FUNC_15 (struct o2net_send_tracking*,int ,int ,int ,scalar_t__) ;
 struct o2net_node* FUNC_16 (scalar_t__) ;
 int FUNC_17 (struct o2net_node*,struct o2net_status_wait*) ;
 int FUNC_18 (struct o2net_node*,struct o2net_status_wait*) ;
 int FUNC_19 (int ,struct o2net_msg*,size_t,int) ;
 int FUNC_20 (struct o2net_send_tracking*,int ) ;
 int FUNC_21 (struct o2net_send_tracking*) ;
 int FUNC_22 (struct o2net_send_tracking*,struct o2net_sock_container*) ;
 int FUNC_23 (struct o2net_send_tracking*) ;
 int FUNC_24 (struct o2net_send_tracking*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct o2net_node*,struct o2net_sock_container**,int*) ;
 int FUNC_27 (struct o2net_send_tracking*,struct o2net_sock_container*) ;
 int * VAR_7 ;
 scalar_t__ FUNC_28 () ;
 int FUNC_29 (struct o2net_sock_container*) ;
 int FUNC_30 (int ,int ) ;

int FUNC_31(u32 VAR_8, u32 VAR_9, struct kvec *VAR_10,
      size_t VAR_11, u8 VAR_12, int *VAR_13)
{
 int VAR_14 = 0;
 struct o2net_msg *VAR_15 = ((void*)0);
 size_t VAR_16, VAR_17 = 0;
 struct kvec *VAR_18 = ((void*)0);
 struct o2net_sock_container *VAR_19 = ((void*)0);
 struct o2net_node *VAR_20 = FUNC_16(VAR_12);
 struct o2net_status_wait VAR_21 = {
  .ns_node_item = FUNC_0(VAR_21.ns_node_item),
 };
 struct o2net_send_tracking VAR_22;

 FUNC_15(&VAR_22, VAR_8, VAR_9, VAR_6, VAR_12);

 if (VAR_7 == ((void*)0)) {
  FUNC_7(0, "attempt to tx without o2netd running\n");
  VAR_14 = -VAR_3;
  goto out;
 }

 if (VAR_11 == 0) {
  FUNC_7(0, "bad kvec array length\n");
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_17 = FUNC_2((struct iovec *)VAR_10, VAR_11);
 if (VAR_17 > VAR_5) {
  FUNC_7(0, "total payload len %zu too large\n", VAR_17);
  VAR_14 = -VAR_0;
  goto out;
 }

 if (VAR_12 == FUNC_28()) {
  VAR_14 = -VAR_1;
  goto out;
 }

 FUNC_12(&VAR_22);

 FUNC_23(&VAR_22);

 FUNC_30(VAR_20->nn_sc_wq, FUNC_26(VAR_20, &VAR_19, &VAR_14));
 if (VAR_14)
  goto out;

 FUNC_22(&VAR_22, VAR_19);

 VAR_16 = VAR_11 + 1;
 VAR_18 = FUNC_5(VAR_16, sizeof(struct kvec), VAR_4);
 if (VAR_18 == ((void*)0)) {
  FUNC_7(0, "failed to %zu element kvec!\n", VAR_16);
  VAR_14 = -VAR_2;
  goto out;
 }

 VAR_15 = FUNC_4(sizeof(struct o2net_msg), VAR_4);
 if (!VAR_15) {
  FUNC_7(0, "failed to allocate a o2net_msg!\n");
  VAR_14 = -VAR_2;
  goto out;
 }

 FUNC_14(VAR_15, VAR_17, VAR_8, VAR_9);

 VAR_18[0].iov_len = sizeof(struct o2net_msg);
 VAR_18[0].iov_base = VAR_15;
 FUNC_6(&VAR_18[1], VAR_10, VAR_11 * sizeof(struct kvec));

 VAR_14 = FUNC_18(VAR_20, &VAR_21);
 if (VAR_14)
  goto out;

 VAR_15->msg_num = FUNC_1(VAR_21.ns_id);
 FUNC_20(&VAR_22, VAR_21.ns_id);

 FUNC_21(&VAR_22);



 FUNC_9(&VAR_19->sc_send_lock);
 VAR_14 = FUNC_19(VAR_19->sc_sock, VAR_18, VAR_16,
     sizeof(struct o2net_msg) + VAR_17);
 FUNC_10(&VAR_19->sc_send_lock);
 FUNC_8(VAR_15, "sending returned %d\n", VAR_14);
 if (VAR_14 < 0) {
  FUNC_7(0, "error returned from o2net_send_tcp_msg=%d\n", VAR_14);
  goto out;
 }


 FUNC_24(&VAR_22);
 FUNC_30(VAR_21.ns_wq, FUNC_17(VAR_20, &VAR_21));

 FUNC_27(&VAR_22, VAR_19);




 VAR_14 = FUNC_25(VAR_21.ns_sys_status);
 if (VAR_13 && !VAR_14)
  *VAR_13 = VAR_21.ns_status;

 FUNC_7(0, "woken, returning system status %d, user status %d\n",
      VAR_14, VAR_21.ns_status);
out:
 FUNC_13(&VAR_22);
 if (VAR_19)
  FUNC_29(VAR_19);
 FUNC_3(VAR_18);
 FUNC_3(VAR_15);
 FUNC_11(VAR_20, &VAR_21, 0, 0, 0);
 return VAR_14;
}
