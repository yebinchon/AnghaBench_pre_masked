
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sas_support; int sata_support; int sata_host_mode; int speed_support; int snw_3_support; int tx_lnk_parity; int tx_spt_phs_lnk_rate; int tx_lgcl_lnk_rate; int disable_phy; } ;
union reg_phy_cfg {scalar_t__ v; TYPE_1__ u; } ;
typedef int u8 ;
struct mvs_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mvs_info*,int) ;
 int FUNC_1 (struct mvs_info*,int,int ) ;
 int FUNC_2 (struct mvs_info*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mvs_info *VAR_1, int VAR_2, u8 VAR_3)
{
 union reg_phy_cfg VAR_4, VAR_5;
 FUNC_1(VAR_1, VAR_2, VAR_0);
 VAR_5.v = FUNC_0(VAR_1, VAR_2);
 VAR_4.v = 0;
 VAR_4.u.disable_phy = VAR_5.u.disable_phy;
 VAR_4.u.sas_support = 1;
 VAR_4.u.sata_support = 1;
 VAR_4.u.sata_host_mode = 1;

 switch (VAR_3) {
 case 0x0:

  VAR_4.u.speed_support = 1;
  VAR_4.u.snw_3_support = 0;
  VAR_4.u.tx_lnk_parity = 1;
  VAR_4.u.tx_spt_phs_lnk_rate = 0x30;
  break;
 case 0x1:


  VAR_4.u.speed_support = 3;
  VAR_4.u.tx_spt_phs_lnk_rate = 0x3c;
  VAR_4.u.tx_lgcl_lnk_rate = 0x08;
  break;
 case 0x2:
 default:

  VAR_4.u.speed_support = 7;
  VAR_4.u.snw_3_support = 1;
  VAR_4.u.tx_lnk_parity = 1;
  VAR_4.u.tx_spt_phs_lnk_rate = 0x3f;
  VAR_4.u.tx_lgcl_lnk_rate = 0x09;
  break;
 }
 FUNC_2(VAR_1, VAR_2, VAR_4.v);
}
