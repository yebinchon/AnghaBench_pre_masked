
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int prtad; } ;
struct TYPE_6__ {scalar_t__ type; int nw_mng_if_sel; TYPE_2__ mdio; scalar_t__ phy_semaphore_mask; } ;
struct TYPE_4__ {scalar_t__ lan_id; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_1__ bus; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int) ;

s32 FUNC_1(struct ixgbe_hw *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10 = VAR_0;

 if (!VAR_8->phy.phy_semaphore_mask) {
  if (VAR_8->bus.lan_id)
   VAR_8->phy.phy_semaphore_mask = VAR_2;
  else
   VAR_8->phy.phy_semaphore_mask = VAR_1;
 }

 if (VAR_8->phy.type != VAR_7)
  return 0;

 if (VAR_8->phy.nw_mng_if_sel) {
  VAR_9 = (VAR_8->phy.nw_mng_if_sel &
       VAR_4) >>
      VAR_5;
  if (FUNC_0(VAR_8, VAR_9))
   return 0;
  else
   return VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if (FUNC_0(VAR_8, VAR_9)) {
   VAR_10 = 0;
   break;
  }
 }





 if (VAR_10)
  VAR_8->phy.mdio.prtad = VAR_6;

 return VAR_10;
}
