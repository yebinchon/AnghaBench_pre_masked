
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int vlan_tci; } ;
struct igc_nfc_filter {int action; TYPE_1__ filter; } ;
struct igc_hw {int dummy; } ;
struct igc_adapter {TYPE_2__* pdev; struct igc_hw hw; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct igc_adapter *VAR_5,
         struct igc_nfc_filter *VAR_6)
{
 struct igc_hw *VAR_7 = &VAR_5->hw;
 u8 VAR_8;
 u16 VAR_9;
 u32 VAR_10;

 VAR_10 = FUNC_4(VAR_1);
 VAR_8 = (FUNC_3(VAR_6->filter.vlan_tci) & VAR_3)
    >> VAR_4;
 VAR_9 = (VAR_10 >> (VAR_8 * 4)) & VAR_2;


 if (VAR_10 & FUNC_0(VAR_8) &&
     VAR_9 != VAR_6->action) {
  FUNC_2(&VAR_5->pdev->dev, "ethtool rxnfc set vlan prio filter failed.\n");
  return -VAR_0;
 }

 VAR_10 |= FUNC_0(VAR_8);
 VAR_10 |= FUNC_1(VAR_8, VAR_6->action);

 FUNC_5(VAR_1, VAR_10);

 return 0;
}
