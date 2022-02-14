
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sw_rx_data {int data; int page_offset; } ;
struct sk_buff {int dummy; } ;
struct qede_rx_queue {int dummy; } ;
struct qede_dev {scalar_t__ rx_copybreak; int ndev; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (struct qede_rx_queue*,struct sw_rx_data*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct qede_rx_queue*,struct sw_rx_data*) ;
 int FUNC_6 (struct qede_rx_queue*,struct sw_rx_data*) ;
 int FUNC_7 (struct qede_rx_queue*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static struct sk_buff *
FUNC_11(struct qede_dev *VAR_1,
    struct qede_rx_queue *VAR_2,
    struct sw_rx_data *VAR_3, u16 VAR_4, u16 VAR_5)
{
 struct sk_buff *VAR_6 = ((void*)0);





 if ((VAR_4 + VAR_5 <= VAR_1->rx_copybreak)) {
  unsigned int VAR_7 = VAR_3->page_offset + VAR_5;

  VAR_6 = FUNC_1(VAR_1->ndev, VAR_0);
  if (FUNC_10(!VAR_6))
   return ((void*)0);

  FUNC_9(VAR_6, VAR_5);
  FUNC_8(VAR_6, FUNC_2(VAR_3->data) + VAR_7, VAR_4);
  FUNC_6(VAR_2, VAR_3);
  goto out;
 }

 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);

 if (FUNC_10(FUNC_5(VAR_2, VAR_3))) {




  FUNC_3(VAR_3->data);
  FUNC_0(VAR_6);
  return ((void*)0);
 }
out:

 FUNC_7(VAR_2);

 return VAR_6;
}
