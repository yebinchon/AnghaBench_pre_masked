
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int prtad; } ;
struct TYPE_6__ {int nw_mng_if_sel; TYPE_2__ mdio; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_1(struct ixgbe_hw *VAR_5)
{



 VAR_5->phy.nw_mng_if_sel = FUNC_0(VAR_5, VAR_0);




 if (VAR_5->mac.type == VAR_4 &&
     VAR_5->phy.nw_mng_if_sel & VAR_1) {
  VAR_5->phy.mdio.prtad = (VAR_5->phy.nw_mng_if_sel &
          VAR_2) >>
         VAR_3;
 }
}
