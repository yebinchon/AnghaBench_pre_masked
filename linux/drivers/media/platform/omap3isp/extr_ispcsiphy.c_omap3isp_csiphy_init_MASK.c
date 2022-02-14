
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_csiphy {int phy_regs; int cfg_regs; int num_data_lanes; int * csi2; int mutex; struct isp_device* isp; } ;
struct isp_device {scalar_t__ revision; int isp_csi2c; int isp_csi2a; struct isp_csiphy isp_csiphy2; struct isp_csiphy isp_csiphy1; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct isp_device *VAR_7)
{
 struct isp_csiphy *VAR_8 = &VAR_7->isp_csiphy1;
 struct isp_csiphy *VAR_9 = &VAR_7->isp_csiphy2;

 VAR_9->isp = VAR_7;
 VAR_9->csi2 = &VAR_7->isp_csi2a;
 VAR_9->num_data_lanes = VAR_1;
 VAR_9->cfg_regs = VAR_3;
 VAR_9->phy_regs = VAR_6;
 FUNC_0(&VAR_9->mutex);

 VAR_8->isp = VAR_7;
 FUNC_0(&VAR_8->mutex);

 if (VAR_7->revision == VAR_2) {
  VAR_8->csi2 = &VAR_7->isp_csi2c;
  VAR_8->num_data_lanes = VAR_0;
  VAR_8->cfg_regs = VAR_4;
  VAR_8->phy_regs = VAR_5;
 }

 return 0;
}
