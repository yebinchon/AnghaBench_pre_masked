
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nxp_nci_i2c_phy {scalar_t__ hard_fault; int gpiod_en; int gpiod_fw; } ;
typedef enum nxp_nci_mode { ____Placeholder_nxp_nci_mode } nxp_nci_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2,
        enum nxp_nci_mode VAR_3)
{
 struct nxp_nci_i2c_phy *VAR_4 = (struct nxp_nci_i2c_phy *) VAR_2;

 FUNC_0(VAR_4->gpiod_fw, (VAR_3 == VAR_1) ? 1 : 0);
 FUNC_0(VAR_4->gpiod_en, (VAR_3 != VAR_0) ? 1 : 0);
 FUNC_1(10000, 15000);

 if (VAR_3 == VAR_0)
  VAR_4->hard_fault = 0;

 return 0;
}
