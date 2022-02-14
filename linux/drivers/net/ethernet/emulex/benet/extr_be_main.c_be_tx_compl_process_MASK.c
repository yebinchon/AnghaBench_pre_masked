
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct be_queue_info {size_t tail; } ;
struct be_tx_obj {struct be_queue_info q; struct sk_buff** sent_skb_list; } ;
struct be_eth_wrb {int dummy; } ;
struct be_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct be_queue_info*) ;
 struct be_eth_wrb* FUNC_2 (struct be_queue_info*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,struct be_eth_wrb*,int) ;

__attribute__((used)) static u16 FUNC_5(struct be_adapter *VAR_0,
          struct be_tx_obj *VAR_1, u16 VAR_2)
{
 struct sk_buff **VAR_3 = VAR_1->sent_skb_list;
 struct be_queue_info *VAR_4 = &VAR_1->q;
 struct sk_buff *VAR_5 = ((void*)0);
 bool VAR_6 = 0;
 struct be_eth_wrb *VAR_7;
 u16 VAR_8 = 0;
 u32 VAR_9;

 do {
  if (VAR_3[VAR_4->tail]) {

   if (VAR_5)
    FUNC_0(VAR_5);
   VAR_5 = VAR_3[VAR_4->tail];
   VAR_3[VAR_4->tail] = ((void*)0);
   FUNC_1(VAR_4);
   VAR_8++;
   VAR_6 = 1;
  }
  VAR_7 = FUNC_2(VAR_4);
  VAR_9 = VAR_4->tail;
  FUNC_4(&VAR_0->pdev->dev, VAR_7,
         (VAR_6 && FUNC_3(VAR_5)));
  VAR_6 = 0;
  FUNC_1(VAR_4);
  VAR_8++;
 } while (VAR_9 != VAR_2);
 FUNC_0(VAR_5);

 return VAR_8;
}
