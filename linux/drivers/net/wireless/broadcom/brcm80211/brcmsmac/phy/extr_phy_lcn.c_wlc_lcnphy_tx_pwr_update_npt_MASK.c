
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcms_phy_lcnphy {int lcnphy_tssi_tx_cnt; int lcnphy_tssi_npt; int lcnphy_tssi_idx; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_1__ u; } ;


 int FUNC_0 (struct brcms_phy*) ;
 int FUNC_1 (struct brcms_phy*) ;
 int FUNC_2 (struct brcms_phy*) ;

void FUNC_3(struct brcms_phy *VAR_0)
{
 u16 VAR_1, VAR_2, VAR_3;
 struct brcms_phy_lcnphy *VAR_4 = VAR_0->u.pi_lcnphy;

 VAR_2 = FUNC_2(VAR_0);
 VAR_1 = VAR_2 - VAR_4->lcnphy_tssi_tx_cnt;
 VAR_3 = FUNC_1(VAR_0);

 if (VAR_1 > (1 << VAR_3)) {

  VAR_4->lcnphy_tssi_tx_cnt = VAR_2;

  VAR_4->lcnphy_tssi_idx = FUNC_0(VAR_0);
  VAR_4->lcnphy_tssi_npt = VAR_3;

 }
}
