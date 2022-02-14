
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_5__ {unsigned int packets; unsigned int bytes; int syncp; int collisions; int errors; } ;
struct TYPE_4__ {int proc_idx; int done_idx; int ndesc; TYPE_3__* desc; } ;
struct ave_private {TYPE_2__ stats_tx; TYPE_1__ tx; } ;
struct TYPE_6__ {int * skbs; } ;


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
 int FUNC_2 (int *) ;
 struct ave_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_8)
{
 struct ave_private *VAR_9 = FUNC_3(VAR_8);
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14 = 0;
 unsigned int VAR_15 = 0;
 unsigned int VAR_16 = 0;

 VAR_10 = VAR_9->tx.proc_idx;
 VAR_11 = VAR_9->tx.done_idx;
 VAR_12 = VAR_9->tx.ndesc;


 while (VAR_10 != VAR_11) {
  VAR_13 = FUNC_0(VAR_8, VAR_0, VAR_11);


  if (VAR_13 & VAR_5)
   break;


  if (VAR_13 & VAR_3) {
   VAR_16 += VAR_13 & VAR_6;

   if (VAR_13 & VAR_2)
    VAR_15++;
  } else {

   if (VAR_13 & VAR_2) {
    VAR_9->stats_tx.errors++;
    if (VAR_13 & (VAR_4 | VAR_1))
     VAR_9->stats_tx.collisions++;
   }
  }


  if (VAR_9->tx.desc[VAR_11].skbs) {
   FUNC_1(VAR_8, &VAR_9->tx.desc[VAR_11],
          VAR_7);
   FUNC_2(VAR_9->tx.desc[VAR_11].skbs);
   VAR_9->tx.desc[VAR_11].skbs = ((void*)0);
   VAR_14++;
  }
  VAR_11 = (VAR_11 + 1) % VAR_12;
 }

 VAR_9->tx.done_idx = VAR_11;


 FUNC_6(&VAR_9->stats_tx.syncp);
 VAR_9->stats_tx.packets += VAR_15;
 VAR_9->stats_tx.bytes += VAR_16;
 FUNC_7(&VAR_9->stats_tx.syncp);


 if (FUNC_8(FUNC_4(VAR_8)) && VAR_14)
  FUNC_5(VAR_8);

 return VAR_14;
}
