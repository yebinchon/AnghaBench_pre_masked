
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int ip_summed; int data; } ;
struct qedi_uio_dev {int tx_pkt; scalar_t__ uctrl; } ;
struct qedi_uio_ctrl {int host_tx_pkt_len; int hw_tx_cons; } ;
struct qedi_ctx {int dbg_ctx; struct qedi_uio_dev* udev; struct qed_dev* cdev; } ;
struct qed_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ll2; } ;
struct TYPE_3__ {int (* start_xmit ) (struct qed_dev*,struct sk_buff*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int ,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct qed_dev*,struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_8(struct qedi_ctx *VAR_5, u16 VAR_6)
{
 struct qed_dev *VAR_7 = VAR_5->cdev;
 struct qedi_uio_dev *VAR_8;
 struct qedi_uio_ctrl *VAR_9;
 struct sk_buff *VAR_10;
 u32 VAR_11;
 int VAR_12 = 0;

 VAR_8 = VAR_5->udev;
 if (!VAR_8) {
  FUNC_0(&VAR_5->dbg_ctx, "udev is NULL.\n");
  return -VAR_1;
 }

 VAR_9 = (struct qedi_uio_ctrl *)VAR_8->uctrl;
 if (!VAR_9) {
  FUNC_0(&VAR_5->dbg_ctx, "uctlr is NULL.\n");
  return -VAR_1;
 }

 VAR_11 = VAR_9->host_tx_pkt_len;
 if (!VAR_11) {
  FUNC_0(&VAR_5->dbg_ctx, "Invalid len %u\n", VAR_11);
  return -VAR_1;
 }

 VAR_10 = FUNC_2(VAR_11, VAR_3);
 if (!VAR_10) {
  FUNC_0(&VAR_5->dbg_ctx, "alloc_skb failed\n");
  return -VAR_1;
 }

 FUNC_6(VAR_10, VAR_11);
 FUNC_5(VAR_10->data, VAR_8->tx_pkt, VAR_11);
 VAR_10->ip_summed = VAR_0;

 if (VAR_6)
  FUNC_1(VAR_10, FUNC_3(VAR_2), VAR_6);

 VAR_12 = VAR_4->ll2->start_xmit(VAR_7, VAR_10, 0);
 if (VAR_12) {
  FUNC_0(&VAR_5->dbg_ctx, "ll2 start_xmit returned %d\n",
    VAR_12);
  FUNC_4(VAR_10);
 }

 VAR_9->host_tx_pkt_len = 0;
 VAR_9->hw_tx_cons++;

 return VAR_12;
}
