
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct timespec64 {int tv_sec; int tv_nsec; } ;
struct skb_frame_desc {int flags; int desc_len; int desc; } ;
struct sk_buff {int len; int data; } ;
struct rt2x00dump_hdr {void* timestamp_usec; void* timestamp_sec; int entry_index; int queue_index; void* type; void* chip_rev; void* chip_rf; void* chip_rt; void* data_length; void* desc_length; void* header_length; void* version; } ;
struct rt2x00debug_intf {int frame_dump_skbqueue; int frame_dump_flags; int frame_dump_waitqueue; } ;
struct TYPE_3__ {int rt; int rf; int rev; } ;
struct rt2x00_dev {TYPE_1__ chip; struct rt2x00debug_intf* debugfs_intf; } ;
struct queue_entry {int entry_idx; TYPE_2__* queue; struct sk_buff* skb; } ;
typedef enum rt2x00_dump_type { ____Placeholder_rt2x00_dump_type } rt2x00_dump_type ;
struct TYPE_4__ {int qid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 struct skb_frame_desc* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct timespec64*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct rt2x00_dev*,char*) ;
 struct rt2x00dump_hdr* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,struct sk_buff*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(struct rt2x00_dev *VAR_5,
       enum rt2x00_dump_type VAR_6, struct queue_entry *VAR_7)
{
 struct rt2x00debug_intf *VAR_8 = VAR_5->debugfs_intf;
 struct sk_buff *VAR_9 = VAR_7->skb;
 struct skb_frame_desc *VAR_10 = FUNC_3(VAR_9);
 struct sk_buff *VAR_11;
 struct rt2x00dump_hdr *VAR_12;
 struct timespec64 VAR_13;
 u32 VAR_14;

 if (FUNC_5(!FUNC_12(VAR_1, &VAR_8->frame_dump_flags)))
  return;

 FUNC_4(&VAR_13);

 if (FUNC_9(&VAR_8->frame_dump_skbqueue) > 20) {
  FUNC_6(VAR_5, "txrx dump queue length exceeded\n");
  return;
 }

 VAR_14 = VAR_9->len;
 if (VAR_10->flags & VAR_4)
  VAR_14 -= VAR_10->desc_len;

 VAR_11 = FUNC_0(sizeof(*VAR_12) + VAR_10->desc_len + VAR_14,
       VAR_2);
 if (!VAR_11) {
  FUNC_6(VAR_5, "Failed to copy skb for dump\n");
  return;
 }

 VAR_12 = FUNC_7(VAR_11, sizeof(*VAR_12));
 VAR_12->version = FUNC_2(VAR_0);
 VAR_12->header_length = FUNC_2(sizeof(*VAR_12));
 VAR_12->desc_length = FUNC_2(VAR_10->desc_len);
 VAR_12->data_length = FUNC_2(VAR_14);
 VAR_12->chip_rt = FUNC_1(VAR_5->chip.rt);
 VAR_12->chip_rf = FUNC_1(VAR_5->chip.rf);
 VAR_12->chip_rev = FUNC_1(VAR_5->chip.rev);
 VAR_12->type = FUNC_1(VAR_6);
 VAR_12->queue_index = VAR_7->queue->qid;
 VAR_12->entry_index = VAR_7->entry_idx;
 VAR_12->timestamp_sec = FUNC_2(VAR_13.tv_sec);
 VAR_12->timestamp_usec = FUNC_2(VAR_13.tv_nsec /
            VAR_3);

 if (!(VAR_10->flags & VAR_4))
  FUNC_8(VAR_11, VAR_10->desc, VAR_10->desc_len);
 FUNC_8(VAR_11, VAR_9->data, VAR_9->len);

 FUNC_11(&VAR_8->frame_dump_skbqueue, VAR_11);
 FUNC_13(&VAR_8->frame_dump_waitqueue);




 if (!FUNC_12(VAR_1, &VAR_8->frame_dump_flags))
  FUNC_10(&VAR_8->frame_dump_skbqueue);
}
