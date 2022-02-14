
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sk_buff {int protocol; } ;
struct TYPE_9__ {int packet_length; } ;
struct TYPE_8__ {int placement_offset; } ;
struct qed_ll2_comp_rx_data {int opaque_data_1; int opaque_data_0; scalar_t__ vlan; TYPE_3__ length; TYPE_2__ u; int parse_flags; scalar_t__ rx_buf_addr; struct qed_ll2_buffer* cookie; } ;
struct qed_ll2_buffer {int phys_addr; int * data; } ;
struct qed_hwfn {struct qed_dev* cdev; } ;
struct qed_dev {int dp_module; TYPE_5__* ll2; TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_12__ {int h_proto; } ;
struct TYPE_11__ {int handle; int cb_cookie; TYPE_4__* cbs; int rx_size; } ;
struct TYPE_10__ {int (* rx_cb ) (int ,struct sk_buff*,int ,int ) ;} ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_dev*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct sk_buff*,int ,scalar_t__) ;
 struct sk_buff* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 TYPE_6__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int ,int,int,int *,int ,int) ;
 int FUNC_9 (struct qed_dev*,int **,int *) ;
 int FUNC_10 (struct qed_dev*,struct qed_ll2_buffer*) ;
 int FUNC_11 (struct qed_hwfn*,int ,int ,int ,struct qed_ll2_buffer*,int) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int ,struct sk_buff*,int ,int ) ;

__attribute__((used)) static void FUNC_17(void *VAR_11,
     struct qed_ll2_comp_rx_data *VAR_12)
{
 struct qed_hwfn *VAR_13 = VAR_11;
 struct qed_ll2_buffer *VAR_14 = VAR_12->cookie;
 struct qed_dev *VAR_15 = VAR_13->cdev;
 dma_addr_t VAR_16;
 struct sk_buff *VAR_17;
 bool VAR_18 = 0;
 int VAR_19 = -VAR_2;
 u8 *VAR_20;

 FUNC_1(VAR_13,
     (VAR_7 | VAR_10 | VAR_6),
     "Got an LL2 Rx completion: [Buffer at phys 0x%llx, offset 0x%02x] Length 0x%04x Parse_flags 0x%04x vlan 0x%04x Opaque data [0x%08x:0x%08x]\n",
     (u64)VAR_12->rx_buf_addr,
     VAR_12->u.placement_offset,
     VAR_12->length.packet_length,
     VAR_12->parse_flags,
     VAR_12->vlan, VAR_12->opaque_data_0, VAR_12->opaque_data_1);

 if ((VAR_15->dp_module & VAR_6) && VAR_14->data) {
  FUNC_8(VAR_5, "",
          VAR_1, 16, 1,
          VAR_14->data, VAR_12->length.packet_length, 0);
 }


 if (VAR_12->length.packet_length < VAR_3)
  VAR_18 = 1;


 if (!VAR_18)
  VAR_19 = FUNC_9(VAR_13->cdev, &VAR_20,
       &VAR_16);


 if (VAR_19)
  goto out_post;
 FUNC_4(&VAR_15->pdev->dev, VAR_14->phys_addr,
    VAR_15->ll2->rx_size, VAR_0);

 VAR_17 = FUNC_3(VAR_14->data, 0);
 if (!VAR_17) {
  FUNC_0(VAR_15, "Failed to build SKB\n");
  FUNC_7(VAR_14->data);
  goto out_post1;
 }

 VAR_12->u.placement_offset += VAR_8;
 FUNC_14(VAR_17, VAR_12->u.placement_offset);
 FUNC_13(VAR_17, VAR_12->length.packet_length);
 FUNC_12(VAR_17);




 FUNC_15(VAR_17);
 VAR_17->protocol = FUNC_5(VAR_17)->h_proto;


 if (VAR_15->ll2->cbs && VAR_15->ll2->cbs->rx_cb) {
  if (VAR_12->vlan)
   FUNC_2(VAR_17, FUNC_6(VAR_4),
            VAR_12->vlan);
  VAR_15->ll2->cbs->rx_cb(VAR_15->ll2->cb_cookie, VAR_17,
          VAR_12->opaque_data_0,
          VAR_12->opaque_data_1);
 } else {
  FUNC_1(VAR_13, (VAR_7 | VAR_6 |
        VAR_9 | VAR_10),
      "Dropping the packet\n");
  FUNC_7(VAR_14->data);
 }

out_post1:

 VAR_14->data = VAR_20;
 VAR_14->phys_addr = VAR_16;

out_post:
 VAR_19 = FUNC_11(VAR_13, VAR_15->ll2->handle,
        VAR_14->phys_addr, 0, VAR_14, 1);
 if (VAR_19)
  FUNC_10(VAR_15, VAR_14);
}
