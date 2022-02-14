
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct b43_phy {TYPE_2__* ops; int next_txpwr_check_time; } ;
struct b43_wldev {TYPE_3__* wl; TYPE_1__* dev; struct b43_phy phy; } ;
typedef enum b43_txpwr_result { ____Placeholder_b43_txpwr_result } b43_txpwr_result ;
struct TYPE_6__ {int txpower_adjust_work; int hw; } ;
struct TYPE_5__ {int (* recalc_txpower ) (struct b43_wldev*,int) ;int * adjust_txpower; } ;
struct TYPE_4__ {scalar_t__ board_vendor; scalar_t__ board_type; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int *) ;
 unsigned long VAR_7 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 scalar_t__ FUNC_4 (unsigned long,int ) ;

void FUNC_5(struct b43_wldev *VAR_8, unsigned int VAR_9)
{
 struct b43_phy *VAR_10 = &VAR_8->phy;
 unsigned long VAR_11 = VAR_7;
 enum b43_txpwr_result VAR_12;

 if (!(VAR_9 & VAR_0)) {

  if (FUNC_4(VAR_11, VAR_10->next_txpwr_check_time))
   return;
 }

 VAR_10->next_txpwr_check_time = FUNC_2(VAR_11 + (VAR_4 * 2));

 if ((VAR_8->dev->board_vendor == VAR_5) &&
     (VAR_8->dev->board_type == VAR_6))
  return;

 VAR_12 = VAR_10->ops->recalc_txpower(VAR_8, !!(VAR_9 & VAR_1));
 if (VAR_12 == VAR_2)
  return;
 FUNC_0(VAR_12 != VAR_3);
 FUNC_0(VAR_10->ops->adjust_txpower == ((void*)0));



 FUNC_1(VAR_8->wl->hw, &VAR_8->wl->txpower_adjust_work);
}
