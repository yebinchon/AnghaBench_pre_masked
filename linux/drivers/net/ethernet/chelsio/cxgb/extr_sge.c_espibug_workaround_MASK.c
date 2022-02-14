
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct sk_buff {int* cb; int len; } ;
struct sge {scalar_t__ espibug_timeout; int espibug_timer; struct sk_buff** espibug_skb; struct adapter* adapter; } ;
struct cpl_tx_pkt {int dummy; } ;
struct adapter {TYPE_1__* port; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sge* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 struct sge* VAR_4 ;
 int FUNC_3 (struct sk_buff*,int,int ,int ) ;
 struct sk_buff* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct adapter*,int,int ) ;
 int FUNC_6 (struct sk_buff*,struct adapter*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_5)
{
 struct sge *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_2);
 struct adapter *VAR_7 = VAR_6->adapter;

 if (FUNC_2(VAR_7->port[0].dev)) {
         struct sk_buff *VAR_8 = VAR_6->espibug_skb[0];
         u32 VAR_9 = FUNC_5(VAR_7, 0x930, 0);

         if ((VAR_9 & 0xfff0fff) == 0xfff && VAR_8) {
                 if (!VAR_8->cb[0]) {
                         FUNC_3(VAR_8,
           sizeof(struct cpl_tx_pkt),
              VAR_1,
              VAR_0);
                         FUNC_3(VAR_8,
              VAR_8->len - 10,
              VAR_1,
              VAR_0);
                         VAR_8->cb[0] = 0xff;
                 }




                 VAR_8 = FUNC_4(VAR_8);
                 FUNC_6(VAR_8, VAR_7, 0, VAR_7->port[0].dev);
         }
 }
 FUNC_1(&VAR_6->espibug_timer, VAR_3 + VAR_6->espibug_timeout);
}
