
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {scalar_t__ len; } ;
struct netdev_queue {int dummy; } ;
struct alx_tx_queue {size_t read_idx; size_t count; TYPE_1__* bufs; int c_reg; int netdev; } ;
struct alx_priv {int dev; int hw; } ;
struct TYPE_2__ {struct sk_buff* skb; } ;


 int VAR_0 ;
 int FUNC_0 (struct alx_tx_queue*,size_t) ;
 struct netdev_queue* FUNC_1 (struct alx_tx_queue*) ;
 size_t FUNC_2 (int *,int ) ;
 int FUNC_3 (struct alx_tx_queue*) ;
 struct alx_priv* FUNC_4 (int ) ;
 int FUNC_5 (struct netdev_queue*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct netdev_queue*) ;
 int FUNC_8 (struct netdev_queue*) ;

__attribute__((used)) static bool FUNC_9(struct alx_tx_queue *VAR_1)
{
 struct alx_priv *VAR_2;
 struct netdev_queue *VAR_3;
 u16 VAR_4, VAR_5;
 unsigned int VAR_6 = 0, VAR_7 = 0;
 int VAR_8 = VAR_0;

 VAR_2 = FUNC_4(VAR_1->netdev);
 VAR_3 = FUNC_1(VAR_1);

 VAR_5 = VAR_1->read_idx;
 VAR_4 = FUNC_2(&VAR_2->hw, VAR_1->c_reg);

 if (VAR_5 != VAR_4) {
  while (VAR_5 != VAR_4 && VAR_8 > 0) {
   struct sk_buff *VAR_9;

   VAR_9 = VAR_1->bufs[VAR_5].skb;
   if (VAR_9) {
    VAR_6 += VAR_9->len;
    VAR_7++;
    VAR_8--;
   }

   FUNC_0(VAR_1, VAR_5);

   if (++VAR_5 == VAR_1->count)
    VAR_5 = 0;
  }
  VAR_1->read_idx = VAR_5;

  FUNC_5(VAR_3, VAR_7, VAR_6);
 }

 if (FUNC_7(VAR_3) && FUNC_6(VAR_2->dev) &&
     FUNC_3(VAR_1) > VAR_1->count / 4)
  FUNC_8(VAR_3);

 return VAR_5 == VAR_4;
}
