
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sw_rx_data {scalar_t__ page_offset; int data; } ;
struct sk_buff {int dummy; } ;
struct qede_rx_queue {scalar_t__ rx_buf_seg_size; } ;
struct qede_dev {int dummy; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qede_rx_queue*,int) ;
 struct sk_buff* FUNC_4 (struct qede_rx_queue*,struct sw_rx_data*,int ,int ) ;
 int FUNC_5 (struct qede_rx_queue*,struct sw_rx_data*) ;
 int FUNC_6 (struct qede_rx_queue*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_8(struct qede_dev *VAR_1,
        struct qede_rx_queue *VAR_2,
        struct sw_rx_data *VAR_3, u16 VAR_4, u16 VAR_5,
        bool VAR_6)
{
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_3->page_offset += VAR_2->rx_buf_seg_size;

 if (VAR_3->page_offset == VAR_0) {
  if (FUNC_7(FUNC_3(VAR_2, 1))) {
   FUNC_0(VAR_1,
      "Failed to allocate RX buffer for tpa start\n");
   VAR_3->page_offset -= VAR_2->rx_buf_seg_size;
   FUNC_2(VAR_3->data);
   FUNC_1(VAR_7);
   return ((void*)0);
  }
 } else {
  FUNC_2(VAR_3->data);
  FUNC_5(VAR_2, VAR_3);
 }


 FUNC_6(VAR_2);

 return VAR_7;
}
