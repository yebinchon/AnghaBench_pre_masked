
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct skb_work_list {int list; scalar_t__ vlan_id; struct sk_buff* skb; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct qedi_uio_dev {struct qedi_uio_ctrl* uctrl; } ;
struct qedi_uio_ctrl {int dummy; } ;
struct qedi_ctx {int ll2_recv_thread; int ll2_lock; int ll2_skb_list; int dbg_ctx; struct qedi_uio_dev* udev; int flags; } ;
struct ethhdr {scalar_t__ h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct sk_buff*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct skb_work_list* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,struct ethhdr*,int) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(void *VAR_10, struct sk_buff *VAR_11, u32 VAR_12, u32 VAR_13)
{
 struct qedi_ctx *VAR_14 = (struct qedi_ctx *)VAR_10;
 struct qedi_uio_dev *VAR_15;
 struct qedi_uio_ctrl *VAR_16;
 struct skb_work_list *VAR_17;
 struct ethhdr *VAR_18;

 if (!VAR_14) {
  FUNC_1(((void*)0), "qedi is NULL\n");
  return -1;
 }

 if (!FUNC_16(VAR_8, &VAR_14->flags)) {
  FUNC_2(&VAR_14->dbg_ctx, VAR_7,
     "UIO DEV is not opened\n");
  FUNC_6(VAR_11);
  return 0;
 }

 VAR_18 = (struct ethhdr *)VAR_11->data;

 if (VAR_18->h_proto == FUNC_5(VAR_1)) {
  FUNC_9((u8 *)VAR_18 + VAR_9, VAR_18, VAR_0 * 2);
  VAR_18 = (struct ethhdr *)FUNC_10(VAR_11, VAR_9);
  FUNC_11(VAR_11);
 }


 if (VAR_18->h_proto != FUNC_5(VAR_2) &&
     VAR_18->h_proto != FUNC_5(VAR_3) &&
     VAR_18->h_proto != FUNC_5(VAR_4)) {
  FUNC_2(&VAR_14->dbg_ctx, VAR_6,
     "Dropping frame ethertype [0x%x] len [0x%x].\n",
     VAR_18->h_proto, VAR_11->len);
  FUNC_6(VAR_11);
  return 0;
 }

 FUNC_2(&VAR_14->dbg_ctx, VAR_6,
    "Allowed frame ethertype [0x%x] len [0x%x].\n",
    VAR_18->h_proto, VAR_11->len);

 VAR_15 = VAR_14->udev;
 VAR_16 = VAR_15->uctrl;

 VAR_17 = FUNC_7(sizeof(*VAR_17), VAR_5);
 if (!VAR_17) {
  FUNC_3(&VAR_14->dbg_ctx,
     "Could not allocate work so dropping frame.\n");
  FUNC_6(VAR_11);
  return 0;
 }

 FUNC_0(&VAR_17->list);
 VAR_17->skb = VAR_11;

 if (FUNC_13(VAR_11))
  VAR_17->vlan_id = FUNC_12(VAR_11);

 if (VAR_17->vlan_id)
  FUNC_4(VAR_17->skb, FUNC_5(VAR_1), VAR_17->vlan_id);

 FUNC_14(&VAR_14->ll2_lock);
 FUNC_8(&VAR_17->list, &VAR_14->ll2_skb_list);
 FUNC_15(&VAR_14->ll2_lock);

 FUNC_17(VAR_14->ll2_recv_thread);

 return 0;
}
