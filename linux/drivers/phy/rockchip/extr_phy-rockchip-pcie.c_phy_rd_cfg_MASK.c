
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_pcie_phy {TYPE_1__* phy_data; int reg_base; } ;
struct TYPE_2__ {int pcie_status; int pcie_conf; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static inline u32 FUNC_3(struct rockchip_pcie_phy *VAR_2,
        u32 VAR_3)
{
 u32 VAR_4;

 FUNC_2(VAR_2->reg_base, VAR_2->phy_data->pcie_conf,
       FUNC_0(VAR_3,
       VAR_1,
       VAR_0));
 FUNC_1(VAR_2->reg_base,
      VAR_2->phy_data->pcie_status,
      &VAR_4);
 return VAR_4;
}
