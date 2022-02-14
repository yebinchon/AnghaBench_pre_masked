
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_csiphy {int mutex; int phy_regs; int cfg_regs; scalar_t__ used_data_lanes; int max_data_lanes; int * csi2; struct iss_device* iss; } ;
struct iss_device {int csi2b; int csi2a; struct iss_csiphy csiphy2; struct iss_csiphy csiphy1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct iss_device *VAR_6)
{
 struct iss_csiphy *VAR_7 = &VAR_6->csiphy1;
 struct iss_csiphy *VAR_8 = &VAR_6->csiphy2;

 VAR_7->iss = VAR_6;
 VAR_7->csi2 = &VAR_6->csi2a;
 VAR_7->max_data_lanes = VAR_0;
 VAR_7->used_data_lanes = 0;
 VAR_7->cfg_regs = VAR_4;
 VAR_7->phy_regs = VAR_2;
 FUNC_0(&VAR_7->mutex);

 VAR_8->iss = VAR_6;
 VAR_8->csi2 = &VAR_6->csi2b;
 VAR_8->max_data_lanes = VAR_1;
 VAR_8->used_data_lanes = 0;
 VAR_8->cfg_regs = VAR_5;
 VAR_8->phy_regs = VAR_3;
 FUNC_0(&VAR_8->mutex);

 return 0;
}
