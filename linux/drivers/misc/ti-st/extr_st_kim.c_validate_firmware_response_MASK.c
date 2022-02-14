
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; int len; } ;
struct kim_data_s {int kim_rcvd; scalar_t__ rx_count; struct sk_buff* rx_skb; int rx_state; int resp_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int*,int ) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct kim_data_s *VAR_1)
{
 struct sk_buff *VAR_2 = VAR_1->rx_skb;
 if (!VAR_2)
  return;





 if (VAR_2->data[2] == 0x01 && VAR_2->data[3] == 0x01 &&
   VAR_2->data[4] == 0x10 && VAR_2->data[5] == 0x00) {

  FUNC_2(VAR_1->resp_buffer,
    VAR_1->rx_skb->data,
    VAR_1->rx_skb->len);
  VAR_1->rx_state = VAR_0;
  VAR_1->rx_skb = ((void*)0);
  VAR_1->rx_count = 0;
 } else if (FUNC_4(VAR_2->data[5] != 0)) {
  FUNC_3("no proper response during fw download");
  FUNC_3("data6 %x", VAR_2->data[5]);
  FUNC_1(VAR_2);
  return;
 }

 FUNC_0(&VAR_1->kim_rcvd);
 FUNC_1(VAR_2);
}
