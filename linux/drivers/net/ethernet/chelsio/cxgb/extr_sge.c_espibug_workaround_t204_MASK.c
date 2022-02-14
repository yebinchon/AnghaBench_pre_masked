
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct sk_buff {int* cb; int len; } ;
struct sge {scalar_t__ espibug_timeout; int espibug_timer; struct sk_buff** espibug_skb; struct adapter* adapter; } ;
struct cpl_tx_pkt {int dummy; } ;
struct TYPE_3__ {unsigned int nports; } ;
struct adapter {int open_device_map; TYPE_2__* port; TYPE_1__ params; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sge* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct sge* VAR_6 ;
 int FUNC_4 (struct sk_buff*,int,int ,int ) ;
 struct sk_buff* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct adapter*,int*,int ) ;
 int FUNC_7 (struct sk_buff*,struct adapter*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_7)
{
 struct sge *VAR_8 = FUNC_0(VAR_8, VAR_7, VAR_4);
 struct adapter *VAR_9 = VAR_8->adapter;
 unsigned int VAR_10 = VAR_9->params.nports;
 u32 VAR_11[VAR_1];

 if (VAR_9->open_device_map & VAR_2) {
  int VAR_12;

  if (FUNC_6(VAR_9, &(VAR_11[0]), 0) < 0)
   return;

  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
   struct sk_buff *VAR_13 = VAR_8->espibug_skb[VAR_12];

   if (!FUNC_3(VAR_9->port[VAR_12].dev) ||
       FUNC_2(VAR_9->port[VAR_12].dev) ||
       !VAR_11[VAR_12] || ((VAR_11[VAR_12] & 0xfff) != 0) || !VAR_13)
    continue;

   if (!VAR_13->cb[0]) {
    FUNC_4(VAR_13,
          sizeof(struct cpl_tx_pkt),
              VAR_3,
              VAR_0);
    FUNC_4(VAR_13,
              VAR_13->len - 10,
              VAR_3,
              VAR_0);
    VAR_13->cb[0] = 0xff;
   }




   VAR_13 = FUNC_5(VAR_13);
   FUNC_7(VAR_13, VAR_9, 0, VAR_9->port[VAR_12].dev);
  }
 }
 FUNC_1(&VAR_8->espibug_timer, VAR_5 + VAR_8->espibug_timeout);
}
