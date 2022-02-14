
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int debug_mask; } ;
struct i40e_pf {int flags; scalar_t__ num_fdsb_msix; TYPE_2__* pdev; TYPE_1__ hw; int state; scalar_t__ fd_atr_cnt; scalar_t__ fd_add_err; int num_cloud_filters; } ;
typedef int netdev_features_t ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i40e_pf*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

bool FUNC_4(struct i40e_pf *VAR_7, netdev_features_t VAR_8)
{
 bool VAR_9 = 0;




 if (VAR_8 & VAR_4) {

  if (!(VAR_7->flags & VAR_2))
   VAR_9 = 1;



  if (VAR_7->num_fdsb_msix > 0 && !VAR_7->num_cloud_filters) {
   VAR_7->flags |= VAR_2;
   VAR_7->flags &= ~VAR_3;
  }
 } else {

  if (VAR_7->flags & VAR_2) {
   VAR_9 = 1;
   FUNC_2(VAR_7);
  }
  VAR_7->flags &= ~VAR_2;
  FUNC_0(VAR_6, VAR_7->state);
  VAR_7->flags |= VAR_3;


  VAR_7->fd_add_err = 0;
  VAR_7->fd_atr_cnt = 0;

  if (FUNC_3(VAR_5, VAR_7->state))
   if ((VAR_7->flags & VAR_1) &&
       (VAR_0 & VAR_7->hw.debug_mask))
    FUNC_1(&VAR_7->pdev->dev, "ATR re-enabled.\n");
 }
 return VAR_9;
}
