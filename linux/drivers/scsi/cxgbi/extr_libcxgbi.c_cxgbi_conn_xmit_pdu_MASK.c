
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {unsigned int data_len; int len; int data; } ;
struct iscsi_tcp_conn {struct cxgbi_conn* dd_data; } ;
struct iscsi_task {TYPE_3__* conn; struct iscsi_task* itt; int sc; int hdr; } ;
struct cxgbi_task_tag_info {int flags; } ;
struct cxgbi_task_data {struct sk_buff* skb; struct cxgbi_task_tag_info ttinfo; } ;
struct cxgbi_sock {TYPE_2__* cdev; } ;
struct cxgbi_ppm {int dummy; } ;
struct cxgbi_conn {TYPE_1__* cep; } ;
struct TYPE_7__ {int txdata_octets; scalar_t__ datadgst_en; scalar_t__ hdrdgst_en; struct iscsi_tcp_conn* dd_data; } ;
struct TYPE_6__ {scalar_t__ (* csk_ddp_set_map ) (struct cxgbi_ppm*,struct cxgbi_sock*,struct cxgbi_task_tag_info*) ;struct cxgbi_ppm* (* cdev2ppm ) (TYPE_2__*) ;} ;
struct TYPE_5__ {struct cxgbi_sock* csk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct cxgbi_sock*,struct sk_buff*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ,TYPE_3__*,char*,int) ;
 struct cxgbi_task_data* FUNC_4 (struct iscsi_task*) ;
 int FUNC_5 (int,char*,struct iscsi_task*,...) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*,struct iscsi_task*) ;
 struct cxgbi_ppm* FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (struct cxgbi_ppm*,struct cxgbi_sock*,struct cxgbi_task_tag_info*) ;

int FUNC_10(struct iscsi_task *VAR_10)
{
 struct iscsi_tcp_conn *VAR_11 = VAR_10->conn->dd_data;
 struct cxgbi_conn *VAR_12 = VAR_11->dd_data;
 struct cxgbi_task_data *VAR_13 = FUNC_4(VAR_10);
 struct cxgbi_task_tag_info *VAR_14 = &VAR_13->ttinfo;
 struct sk_buff *VAR_15 = VAR_13->skb;
 struct cxgbi_sock *VAR_16 = ((void*)0);
 unsigned int VAR_17;
 int VAR_18;

 if (!VAR_15) {
  FUNC_5(1 << VAR_0 | 1 << VAR_1,
   "task 0x%p\n", VAR_10);
  return 0;
 }

 if (VAR_12 && VAR_12->cep)
  VAR_16 = VAR_12->cep->csk;
 if (!VAR_16) {
  FUNC_5(1 << VAR_0 | 1 << VAR_1,
     "task 0x%p, csk gone.\n", VAR_10);
  return -VAR_5;
 }

 VAR_13->skb = ((void*)0);
 VAR_17 = VAR_15->data_len;


 if (VAR_14->flags & VAR_2) {
  struct cxgbi_ppm *VAR_19 = VAR_16->cdev->cdev2ppm(VAR_16->cdev);

  VAR_14->flags &= ~VAR_2;
  if (VAR_16->cdev->csk_ddp_set_map(VAR_19, VAR_16, VAR_14) < 0)
   FUNC_7("task 0x%p, ppod writing using ofldq failed.\n",
          VAR_10);

 }

 if (!VAR_10->sc)
  FUNC_6(VAR_15->data, VAR_10->hdr, VAR_9);

 VAR_18 = FUNC_1(VAR_12->cep->csk, VAR_15);
 if (VAR_18 > 0) {
  int VAR_20 = VAR_18;

  FUNC_5(1 << VAR_1,
   "task 0x%p,0x%p, skb 0x%p, len %u/%u, rv %d.\n",
   VAR_10, VAR_10->sc, VAR_15, VAR_15->len, VAR_15->data_len, VAR_18);

  if (VAR_10->conn->hdrdgst_en)
   VAR_20 += VAR_6;

  if (VAR_17 && VAR_10->conn->datadgst_en)
   VAR_20 += VAR_6;

  VAR_10->conn->txdata_octets += VAR_20;
  return 0;
 }

 if (VAR_18 == -VAR_3 || VAR_18 == -VAR_4) {
  FUNC_5(1 << VAR_1,
   "task 0x%p, skb 0x%p, len %u/%u, %d EAGAIN.\n",
   VAR_10, VAR_15, VAR_15->len, VAR_15->data_len, VAR_18);

  VAR_13->skb = VAR_15;
  return VAR_18;
 }

 FUNC_5(1 << VAR_0 | 1 << VAR_1,
  "itt 0x%x, skb 0x%p, len %u/%u, xmit err %d.\n",
  VAR_10->itt, VAR_15, VAR_15->len, VAR_15->data_len, VAR_18);

 FUNC_0(VAR_15);

 FUNC_3(VAR_8, VAR_10->conn, "xmit err %d.\n", VAR_18);
 FUNC_2(VAR_10->conn, VAR_7);
 return VAR_18;
}
