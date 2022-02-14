
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8001_mpi3_phy_pg_trx_config {int LaneLosCfg; int LanePgaCfg1; int LanePisoCfg1; int LanePisoCfg2; int LanePisoCfg3; int LanePisoCfg4; int LanePisoCfg5; int LanePisoCfg6; int LaneBctCtrl; } ;
struct pm8001_hba_info {int dummy; } ;



__attribute__((used)) static
void FUNC_0(struct pm8001_hba_info *VAR_0,
  struct pm8001_mpi3_phy_pg_trx_config *VAR_1)
{
 VAR_1->LaneLosCfg = 0x00000132;
 VAR_1->LanePgaCfg1 = 0x00203949;
 VAR_1->LanePisoCfg1 = 0x000000FF;
 VAR_1->LanePisoCfg2 = 0xFF000001;
 VAR_1->LanePisoCfg3 = 0xE7011300;
 VAR_1->LanePisoCfg4 = 0x63349140;
 VAR_1->LanePisoCfg5 = 0xF8102036;
 VAR_1->LanePisoCfg6 = 0xF80D9300;
 VAR_1->LaneBctCtrl = 0x00FB33F8;
}
