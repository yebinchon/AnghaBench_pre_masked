
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sw_rx_data {int page_offset; int data; } ;
struct sk_buff {int dummy; } ;
struct qede_rx_queue {int rx_buf_seg_size; } ;


 struct sk_buff* FUNC_0 (void*,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static inline struct sk_buff *
FUNC_4(struct qede_rx_queue *VAR_0,
        struct sw_rx_data *VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct sk_buff *VAR_4;
 void *VAR_5;

 VAR_5 = FUNC_1(VAR_1->data) + VAR_1->page_offset;
 VAR_4 = FUNC_0(VAR_5, VAR_0->rx_buf_seg_size);

 FUNC_3(VAR_4, VAR_3);
 FUNC_2(VAR_4, VAR_2);

 return VAR_4;
}
