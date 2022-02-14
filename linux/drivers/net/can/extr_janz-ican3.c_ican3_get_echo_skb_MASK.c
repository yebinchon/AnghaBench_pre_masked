
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct sk_buff {scalar_t__ pkt_type; int dev; int ip_summed; int protocol; scalar_t__ data; } ;
struct ican3_dev {int ndev; int echoq; } ;
struct can_frame {unsigned int can_dlc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int *) ;

__attribute__((used)) static unsigned int FUNC_5(struct ican3_dev *VAR_4)
{
 struct sk_buff *VAR_5 = FUNC_4(&VAR_4->echoq);
 struct can_frame *VAR_6;
 u8 VAR_7;


 if (!VAR_5) {
  FUNC_2(VAR_4->ndev, "BUG: echo skb not occupied\n");
  return 0;
 }

 VAR_6 = (struct can_frame *)VAR_5->data;
 VAR_7 = VAR_6->can_dlc;


 if (VAR_5->pkt_type != VAR_3) {
  FUNC_1(VAR_5);
  return VAR_7;
 }

 VAR_5->protocol = FUNC_0(VAR_1);
 VAR_5->pkt_type = VAR_2;
 VAR_5->ip_summed = VAR_0;
 VAR_5->dev = VAR_4->ndev;
 FUNC_3(VAR_5);
 return VAR_7;
}
