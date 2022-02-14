
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct sw_rx_data {int data; scalar_t__ page_offset; } ;
struct sk_buff {int len; int truesize; int data_len; } ;
struct qede_rx_queue {size_t sw_rx_cons; scalar_t__ rx_buf_seg_size; scalar_t__ rx_headroom; struct qede_agg_info* tpa_info; struct sw_rx_data* sw_rx_ring; } ;
struct qede_dev {int dummy; } ;
struct qede_agg_info {scalar_t__ state; int frag_id; struct sk_buff* skb; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qede_rx_queue*,struct sw_rx_data*) ;
 int FUNC_2 (struct qede_rx_queue*,int) ;
 int FUNC_3 (struct qede_rx_queue*) ;
 int FUNC_4 (struct sk_buff*,int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct qede_dev *VAR_4,
         struct qede_rx_queue *VAR_5,
         u8 VAR_6, u16 VAR_7)
{
 struct sw_rx_data *VAR_8 = &VAR_5->sw_rx_ring[VAR_5->sw_rx_cons &
        VAR_1];
 struct qede_agg_info *VAR_9 = &VAR_5->tpa_info[VAR_6];
 struct sk_buff *VAR_10 = VAR_9->skb;

 if (FUNC_5(VAR_9->state != VAR_3))
  goto out;


 FUNC_4(VAR_10, VAR_9->frag_id++,
      VAR_8->data,
      VAR_8->page_offset + VAR_5->rx_headroom,
      VAR_7);

 if (FUNC_5(FUNC_1(VAR_5, VAR_8))) {



  FUNC_0(VAR_8->data);
  goto out;
 }

 FUNC_3(VAR_5);

 VAR_10->data_len += VAR_7;
 VAR_10->truesize += VAR_5->rx_buf_seg_size;
 VAR_10->len += VAR_7;

 return 0;

out:
 VAR_9->state = VAR_2;
 FUNC_2(VAR_5, 1);

 return -VAR_0;
}
