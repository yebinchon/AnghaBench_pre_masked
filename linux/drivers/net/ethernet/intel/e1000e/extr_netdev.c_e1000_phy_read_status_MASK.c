
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct e1000_phy_regs {int bmcr; int bmsr; int advertise; int lpa; int expansion; int ctrl1000; int stat1000; int estatus; } ;
struct TYPE_6__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_3__ phy; } ;
struct e1000_adapter {struct e1000_hw hw; TYPE_2__* pdev; struct e1000_phy_regs phy_regs; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_0 (struct e1000_hw*,int ,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct e1000_adapter *VAR_29)
{
 struct e1000_hw *VAR_30 = &VAR_29->hw;
 struct e1000_phy_regs *VAR_31 = &VAR_29->phy_regs;

 if (!FUNC_3((&VAR_29->pdev->dev)->parent) &&
     (FUNC_2(VAR_27) & VAR_15) &&
     (VAR_29->hw.phy.media_type == VAR_28)) {
  int VAR_32;

  VAR_32 = FUNC_0(VAR_30, VAR_20, &VAR_31->bmcr);
  VAR_32 |= FUNC_0(VAR_30, VAR_21, &VAR_31->bmsr);
  VAR_32 |= FUNC_0(VAR_30, VAR_19, &VAR_31->advertise);
  VAR_32 |= FUNC_0(VAR_30, VAR_25, &VAR_31->lpa);
  VAR_32 |= FUNC_0(VAR_30, VAR_24, &VAR_31->expansion);
  VAR_32 |= FUNC_0(VAR_30, VAR_22, &VAR_31->ctrl1000);
  VAR_32 |= FUNC_0(VAR_30, VAR_26, &VAR_31->stat1000);
  VAR_32 |= FUNC_0(VAR_30, VAR_23, &VAR_31->estatus);
  if (VAR_32)
   FUNC_1("Error reading PHY register\n");
 } else {



  VAR_31->bmcr = (VAR_7 | VAR_5 | VAR_6);
  VAR_31->bmsr = (VAR_8 | VAR_9 | VAR_10 |
        VAR_11 | VAR_14 | VAR_12 |
        VAR_13);
  VAR_31->advertise = (VAR_3 | VAR_4 |
      VAR_1 | VAR_2);
  VAR_31->lpa = 0;
  VAR_31->expansion = VAR_18;
  VAR_31->ctrl1000 = VAR_0;
  VAR_31->stat1000 = 0;
  VAR_31->estatus = (VAR_16 | VAR_17);
 }
}
