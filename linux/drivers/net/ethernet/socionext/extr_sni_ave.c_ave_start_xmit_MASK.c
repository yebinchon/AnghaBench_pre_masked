
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; scalar_t__ ip_summed; int data; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int proc_idx; int done_idx; int ndesc; TYPE_3__* desc; } ;
struct TYPE_4__ {int dropped; } ;
struct ave_private {TYPE_2__ tx; TYPE_1__ stats_tx; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {struct sk_buff* skbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct net_device*,int ,int,int ) ;
 int FUNC_1 (struct net_device*,int ,int,int) ;
 int FUNC_2 (struct net_device*,TYPE_3__*,int ,int,int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 struct ave_private* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_14, struct net_device *VAR_15)
{
 struct ave_private *VAR_16 = FUNC_4(VAR_15);
 u32 VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22;
 dma_addr_t VAR_23;

 VAR_17 = VAR_16->tx.proc_idx;
 VAR_18 = VAR_16->tx.done_idx;
 VAR_19 = VAR_16->tx.ndesc;
 VAR_22 = ((VAR_18 + VAR_19 - 1) - VAR_17) % VAR_19;


 if (FUNC_8(VAR_22 < 1)) {
  FUNC_6(VAR_15);
  return VAR_12;
 }


 if (FUNC_7(VAR_14, VAR_11)) {
  VAR_16->stats_tx.dropped++;
  return VAR_13;
 }




 VAR_21 = FUNC_2(VAR_15, &VAR_16->tx.desc[VAR_17],
     VAR_14->data, VAR_14->len, VAR_10, &VAR_23);
 if (VAR_21) {
  FUNC_3(VAR_14);
  VAR_16->stats_tx.dropped++;
  return VAR_13;
 }

 VAR_16->tx.desc[VAR_17].skbs = VAR_14;

 FUNC_0(VAR_15, VAR_0, VAR_17, VAR_23);

 VAR_20 = VAR_6 | VAR_2 | VAR_4 |
  (VAR_14->len & VAR_7);


 if (!(VAR_17 % VAR_1) || FUNC_5(VAR_15))
  VAR_20 |= VAR_3;


 if (VAR_14->ip_summed == VAR_8 ||
     VAR_14->ip_summed == VAR_9)
  VAR_20 |= VAR_5;

 FUNC_1(VAR_15, VAR_0, VAR_17, VAR_20);

 VAR_16->tx.proc_idx = (VAR_17 + 1) % VAR_19;

 return VAR_13;
}
