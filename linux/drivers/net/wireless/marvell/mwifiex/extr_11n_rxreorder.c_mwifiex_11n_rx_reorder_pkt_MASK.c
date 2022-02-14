
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {int timer_is_set; } ;
struct mwifiex_rx_reorder_tbl {int start_win; int win_size; int flags; int init_win; TYPE_1__ timer_context; void** rx_reorder_ptr; int amsdu; } ;
struct mwifiex_private {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mwifiex_private*,void*) ;
 int FUNC_1 (struct mwifiex_private*,struct mwifiex_rx_reorder_tbl*,int) ;
 struct mwifiex_rx_reorder_tbl* FUNC_2 (struct mwifiex_private*,int,scalar_t__*) ;
 int FUNC_3 (struct mwifiex_rx_reorder_tbl*) ;
 int FUNC_4 (struct mwifiex_private*,struct mwifiex_rx_reorder_tbl*) ;
 int FUNC_5 (int ,int ,char*,...) ;

int FUNC_6(struct mwifiex_private *VAR_7,
    u16 VAR_8, u16 VAR_9,
    u8 *VAR_10, u8 VAR_11, void *VAR_12)
{
 struct mwifiex_rx_reorder_tbl *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 u16 VAR_18;
 bool VAR_19 = 0;
 int VAR_20 = 0;

 VAR_13 = FUNC_2(VAR_7, VAR_9, VAR_10);
 if (!VAR_13) {
  if (VAR_11 != VAR_3)
   FUNC_0(VAR_7, VAR_12);
  return VAR_20;
 }

 if ((VAR_11 == VAR_2) && !VAR_13->amsdu) {
  FUNC_0(VAR_7, VAR_12);
  return VAR_20;
 }

 VAR_15 = VAR_13->start_win;
 VAR_14 = VAR_15;
 VAR_17 = VAR_13->win_size;
 VAR_16 = ((VAR_15 + VAR_17) - 1) & (VAR_1 - 1);
 if (VAR_13->flags & VAR_5) {
  VAR_19 = 1;
  VAR_13->flags &= ~VAR_5;
 }

 if (VAR_13->flags & VAR_4) {
  FUNC_5(VAR_7->adapter, VAR_0,
       "RXREOR_FORCE_NO_DROP when HS is activated\n");
  VAR_13->flags &= ~VAR_4;
 } else if (VAR_19 && VAR_8 < VAR_15 &&
     VAR_8 >= VAR_13->init_win) {
  FUNC_5(VAR_7->adapter, VAR_0,
       "Sender TID sequence number reset %d->%d for SSN %d\n",
       VAR_15, VAR_8, VAR_13->init_win);
  VAR_13->start_win = VAR_15 = VAR_8;
  VAR_16 = ((VAR_15 + VAR_17) - 1) & (VAR_1 - 1);
 } else {




  if ((VAR_15 + VAR_6) > (VAR_1 - 1)) {
   if (VAR_8 >= ((VAR_15 + VAR_6) &
     (VAR_1 - 1)) &&
       VAR_8 < VAR_15) {
    VAR_20 = -1;
    goto done;
   }
  } else if ((VAR_8 < VAR_15) ||
      (VAR_8 >= (VAR_15 + VAR_6))) {
   VAR_20 = -1;
   goto done;
  }
 }





 if (VAR_11 == VAR_3)
  VAR_8 = ((VAR_8 + VAR_17) - 1) & (VAR_1 - 1);

 if (((VAR_16 < VAR_15) &&
      (VAR_8 < VAR_15) && (VAR_8 > VAR_16)) ||
     ((VAR_16 > VAR_15) && ((VAR_8 > VAR_16) ||
           (VAR_8 < VAR_15)))) {
  VAR_16 = VAR_8;
  if (((VAR_16 - VAR_17) + 1) >= 0)
   VAR_15 = (VAR_16 - VAR_17) + 1;
  else
   VAR_15 = (VAR_1 - (VAR_17 - VAR_16)) + 1;
  FUNC_1(VAR_7, VAR_13, VAR_15);
 }

 if (VAR_11 != VAR_3) {
  if (VAR_8 >= VAR_15)
   VAR_18 = VAR_8 - VAR_15;
  else
   VAR_18 = (VAR_8+VAR_1) - VAR_15;

  if (VAR_13->rx_reorder_ptr[VAR_18]) {
   VAR_20 = -1;
   goto done;
  }

  VAR_13->rx_reorder_ptr[VAR_18] = VAR_12;
 }





 FUNC_4(VAR_7, VAR_13);

done:
 if (!VAR_13->timer_context.timer_is_set ||
     VAR_14 != VAR_13->start_win)
  FUNC_3(VAR_13);
 return VAR_20;
}
