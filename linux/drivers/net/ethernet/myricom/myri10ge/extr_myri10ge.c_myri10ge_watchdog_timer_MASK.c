
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct timer_list {int dummy; } ;
struct TYPE_4__ {scalar_t__ fill_cnt; scalar_t__ cnt; scalar_t__ watchdog_needed; } ;
struct myri10ge_slice_state {TYPE_2__ rx_big; TYPE_2__ rx_small; TYPE_1__* fw_stats; } ;
struct myri10ge_priv {int num_slices; int watchdog_timer; int watchdog_work; int watchdog_pause; int pdev; scalar_t__ big_bytes; scalar_t__ small_bytes; struct myri10ge_slice_state* ss; } ;
struct TYPE_3__ {int dropped_pause; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct myri10ge_priv* FUNC_0 (struct myri10ge_priv*,struct timer_list*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct myri10ge_priv*,TYPE_2__*,scalar_t__,int) ;
 int FUNC_3 (struct myri10ge_slice_state*,int*,int*,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int *) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_8)
{
 struct myri10ge_priv *VAR_9;
 struct myri10ge_slice_state *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 u32 VAR_14;
 u16 VAR_15;

 VAR_9 = FUNC_0(VAR_9, VAR_8, VAR_7);

 VAR_14 = FUNC_4(VAR_9->ss[0].fw_stats->dropped_pause);
 VAR_13 = 0;
 for (VAR_11 = 0, VAR_12 = 0;
      VAR_11 < VAR_9->num_slices && VAR_12 == 0; ++VAR_11) {

  VAR_10 = &VAR_9->ss[VAR_11];
  if (VAR_10->rx_small.watchdog_needed) {
   FUNC_2(VAR_9, &VAR_10->rx_small,
      VAR_9->small_bytes + VAR_1,
      1);
   if (VAR_10->rx_small.fill_cnt - VAR_10->rx_small.cnt >=
       VAR_5)
    VAR_10->rx_small.watchdog_needed = 0;
  }
  if (VAR_10->rx_big.watchdog_needed) {
   FUNC_2(VAR_9, &VAR_10->rx_big,
      VAR_9->big_bytes, 1);
   if (VAR_10->rx_big.fill_cnt - VAR_10->rx_big.cnt >=
       VAR_5)
    VAR_10->rx_big.watchdog_needed = 0;
  }
  FUNC_3(VAR_10, &VAR_12, &VAR_13,
         VAR_14);
 }



 if (VAR_13 == 0) {
  FUNC_5(VAR_9->pdev, VAR_2, &VAR_15);
  if ((VAR_15 & VAR_3) == 0) {
   VAR_12 = 1;
  }
 }
 VAR_9->watchdog_pause = VAR_14;

 if (VAR_12) {
  FUNC_6(&VAR_9->watchdog_work);
 } else {

  FUNC_1(&VAR_9->watchdog_timer,
     VAR_4 + VAR_6 * VAR_0);
 }
}
