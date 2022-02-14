
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int debug_mask; } ;
struct i40e_pf {unsigned long fd_flush_timestamp; int fdir_pf_filter_count; int fdir_pf_active_filters; size_t lan_vsi; TYPE_1__* pdev; TYPE_2__ hw; int state; int fd_tcp4_filter_cnt; int * vsi; scalar_t__ fd_add_err; int fd_flush_cnt; } ;
struct TYPE_5__ {int dev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 unsigned long VAR_9 ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct i40e_pf *VAR_10)
{
 unsigned long VAR_11;
 int VAR_12 = 50;
 bool VAR_13 = 0;
 int VAR_14;
 int VAR_15;

 if (!FUNC_7(VAR_9, VAR_10->fd_flush_timestamp +
     (VAR_3 * VAR_0)))
  return;




 VAR_11 = VAR_10->fd_flush_timestamp +
    (VAR_4 * VAR_0);
 VAR_14 = VAR_10->fdir_pf_filter_count - VAR_10->fdir_pf_active_filters;

 if (!(FUNC_7(VAR_9, VAR_11)) &&
     (VAR_14 < VAR_2)) {
  if (VAR_1 & VAR_10->hw.debug_mask)
   FUNC_1(&VAR_10->pdev->dev, "ATR disabled, not enough FD filter space.\n");
  VAR_13 = 1;
 }

 VAR_10->fd_flush_timestamp = VAR_9;
 FUNC_6(VAR_7, VAR_10->state);

 FUNC_9(&VAR_10->hw, VAR_5,
      VAR_6);
 FUNC_4(&VAR_10->hw);
 VAR_10->fd_flush_cnt++;
 VAR_10->fd_add_err = 0;
 do {

  FUNC_8(5000, 6000);
  VAR_15 = FUNC_5(&VAR_10->hw, VAR_5);
  if (!(VAR_15 & VAR_6))
   break;
 } while (VAR_12--);
 if (VAR_15 & VAR_6) {
  FUNC_2(&VAR_10->pdev->dev, "FD table did not flush, needs more time\n");
 } else {

  FUNC_3(VAR_10->vsi[VAR_10->lan_vsi]);
  if (!VAR_13 && !VAR_10->fd_tcp4_filter_cnt)
   FUNC_0(VAR_7, VAR_10->state);
  FUNC_0(VAR_8, VAR_10->state);
  if (VAR_1 & VAR_10->hw.debug_mask)
   FUNC_1(&VAR_10->pdev->dev, "FD Filter table flushed and FD-SB replayed.\n");
 }
}
