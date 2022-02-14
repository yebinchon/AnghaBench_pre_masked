
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qrtr_ctrl_pkt {int dummy; } ;
struct qmi_ops {int dummy; } ;
struct qmi_msg_handler {int dummy; } ;
struct qmi_header {int dummy; } ;
struct qmi_handle {size_t recv_buf_size; int recv_buf; int wq; int sock; int sq; struct qmi_ops ops; struct qmi_msg_handler const* handlers; int work; int services; int lookup_results; int lookups; int txns; int sock_lock; int txn_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (size_t,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int VAR_3 ;
 int FUNC_11 (struct qmi_handle*,int *) ;

int FUNC_12(struct qmi_handle *VAR_4, size_t VAR_5,
      const struct qmi_ops *VAR_6,
      const struct qmi_msg_handler *VAR_7)
{
 int VAR_8;

 FUNC_9(&VAR_4->txn_lock);
 FUNC_9(&VAR_4->sock_lock);

 FUNC_6(&VAR_4->txns);

 FUNC_0(&VAR_4->lookups);
 FUNC_0(&VAR_4->lookup_results);
 FUNC_0(&VAR_4->services);

 FUNC_1(&VAR_4->work, VAR_3);

 VAR_4->handlers = VAR_7;
 if (VAR_6)
  VAR_4->ops = *VAR_6;


 VAR_5 += sizeof(struct qmi_header);

 if (VAR_5 < sizeof(struct qrtr_ctrl_pkt))
  VAR_5 = sizeof(struct qrtr_ctrl_pkt);

 VAR_4->recv_buf_size = VAR_5;
 VAR_4->recv_buf = FUNC_8(VAR_5, VAR_1);
 if (!VAR_4->recv_buf)
  return -VAR_0;

 VAR_4->wq = FUNC_4("qmi_msg_handler", VAR_2, 1);
 if (!VAR_4->wq) {
  VAR_8 = -VAR_0;
  goto err_free_recv_buf;
 }

 VAR_4->sock = FUNC_11(VAR_4, &VAR_4->sq);
 if (FUNC_2(VAR_4->sock)) {
  FUNC_10("failed to create QMI socket\n");
  VAR_8 = FUNC_3(VAR_4->sock);
  goto err_destroy_wq;
 }

 return 0;

err_destroy_wq:
 FUNC_5(VAR_4->wq);
err_free_recv_buf:
 FUNC_7(VAR_4->recv_buf);

 return VAR_8;
}
