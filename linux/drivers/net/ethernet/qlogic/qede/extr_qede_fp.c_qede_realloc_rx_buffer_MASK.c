
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_rx_data {scalar_t__ page_offset; int data; int mapping; } ;
struct qede_rx_queue {scalar_t__ rx_buf_seg_size; int data_direction; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qede_rx_queue*,int) ;
 int FUNC_3 (struct qede_rx_queue*,struct sw_rx_data*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(struct qede_rx_queue *VAR_2,
      struct sw_rx_data *VAR_3)
{

 VAR_3->page_offset += VAR_2->rx_buf_seg_size;

 if (VAR_3->page_offset == VAR_1) {
  if (FUNC_4(FUNC_2(VAR_2, 1))) {



   VAR_3->page_offset -= VAR_2->rx_buf_seg_size;

   return -VAR_0;
  }

  FUNC_0(VAR_2->dev, VAR_3->mapping,
          VAR_1, VAR_2->data_direction);
 } else {




  FUNC_1(VAR_3->data);
  FUNC_3(VAR_2, VAR_3);
 }

 return 0;
}
