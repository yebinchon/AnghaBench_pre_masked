
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_desc {int OWN; } ;
struct sk_buff {scalar_t__ cb; } ;
struct rtl8192_tx_ring {int queue; struct tx_desc* desc; } ;
struct r8192_priv {TYPE_1__* ops; TYPE_2__* rtllib; struct rtl8192_tx_ring* tx_ring; } ;
struct net_device {int dummy; } ;
struct cb_desc {size_t queue_index; int data_rate; int RATRIndex; int bTxDisableRateFallBack; int bTxUseDriverAssingedRate; } ;
struct TYPE_4__ {int tx_headroom; struct net_device* dev; } ;
struct TYPE_3__ {int (* tx_fill_descriptor ) (struct net_device*,struct tx_desc*,struct cb_desc*,struct sk_buff*) ;} ;


 size_t VAR_0 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct net_device*,struct tx_desc*,struct cb_desc*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct r8192_priv *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->rtllib->dev;
 struct sk_buff *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
 struct cb_desc *VAR_5 = ((void*)0);
 struct rtl8192_tx_ring *VAR_6 = ((void*)0);
 struct tx_desc *VAR_7 = ((void*)0);

 VAR_6 = &VAR_1->tx_ring[VAR_0];
 VAR_3 = FUNC_0(&VAR_6->queue);
 FUNC_2(VAR_3);

 VAR_4 = FUNC_3(VAR_1->rtllib);
 if (!VAR_4)
  return;

 VAR_5 = (struct cb_desc *)(VAR_4->cb + 8);
 VAR_5->queue_index = VAR_0;
 VAR_5->data_rate = 2;
 VAR_5->RATRIndex = 7;
 VAR_5->bTxDisableRateFallBack = 1;
 VAR_5->bTxUseDriverAssingedRate = 1;
 FUNC_4(VAR_4, VAR_1->rtllib->tx_headroom);

 VAR_7 = &VAR_6->desc[0];
 VAR_1->ops->tx_fill_descriptor(VAR_2, VAR_7, VAR_5, VAR_4);
 FUNC_1(&VAR_6->queue, VAR_4);
 VAR_7->OWN = 1;
}
