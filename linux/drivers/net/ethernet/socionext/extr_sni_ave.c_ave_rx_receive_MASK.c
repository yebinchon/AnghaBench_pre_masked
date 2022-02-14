
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int ip_summed; int protocol; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int proc_idx; int done_idx; int ndesc; TYPE_3__* desc; } ;
struct TYPE_4__ {unsigned int packets; unsigned int bytes; int syncp; int errors; } ;
struct ave_private {TYPE_2__ rx; TYPE_1__ stats_rx; } ;
struct TYPE_6__ {struct sk_buff* skbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,int ,int) ;
 int FUNC_1 (struct net_device*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 struct ave_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_8, int VAR_9)
{
 struct ave_private *VAR_10 = FUNC_4(VAR_8);
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;
 u32 VAR_13, VAR_14;
 struct sk_buff *VAR_15;
 unsigned int VAR_16;
 int VAR_17, VAR_18;
 u32 VAR_19, VAR_20;

 VAR_13 = VAR_10->rx.proc_idx;
 VAR_14 = VAR_10->rx.done_idx;
 VAR_19 = VAR_10->rx.ndesc;
 VAR_17 = ((VAR_13 + VAR_19 - 1) - VAR_14) % VAR_19;

 for (VAR_18 = 0; VAR_18 < VAR_9; VAR_18++) {

  if (--VAR_17 < 0)
   break;

  VAR_20 = FUNC_0(VAR_8, VAR_0, VAR_13);


  if (!(VAR_20 & VAR_4))
   break;

  if (!(VAR_20 & VAR_3)) {
   VAR_10->stats_rx.errors++;
   VAR_13 = (VAR_13 + 1) % VAR_19;
   continue;
  }

  VAR_16 = VAR_20 & VAR_5;


  VAR_15 = VAR_10->rx.desc[VAR_13].skbs;
  VAR_10->rx.desc[VAR_13].skbs = ((void*)0);

  FUNC_1(VAR_8, &VAR_10->rx.desc[VAR_13], VAR_7);

  VAR_15->dev = VAR_8;
  FUNC_6(VAR_15, VAR_16);
  VAR_15->protocol = FUNC_3(VAR_15, VAR_8);

  if ((VAR_20 & VAR_2) && (!(VAR_20 & VAR_1)))
   VAR_15->ip_summed = VAR_6;

  VAR_11++;
  VAR_12 += VAR_16;

  FUNC_5(VAR_15);

  VAR_13 = (VAR_13 + 1) % VAR_19;
 }

 VAR_10->rx.proc_idx = VAR_13;


 FUNC_7(&VAR_10->stats_rx.syncp);
 VAR_10->stats_rx.packets += VAR_11;
 VAR_10->stats_rx.bytes += VAR_12;
 FUNC_8(&VAR_10->stats_rx.syncp);


 while (VAR_13 != VAR_14) {
  if (FUNC_2(VAR_8, VAR_14))
   break;
  VAR_14 = (VAR_14 + 1) % VAR_19;
 }

 VAR_10->rx.done_idx = VAR_14;

 return VAR_18;
}
