
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_emmc_phy {int drive_impedance; scalar_t__ reg_offset; int reg_base; } ;
struct phy {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct rockchip_emmc_phy* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (struct phy*,int ) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_10)
{
 struct rockchip_emmc_phy *VAR_11 = FUNC_1(VAR_10);


 FUNC_2(VAR_11->reg_base,
       VAR_11->reg_offset + VAR_1,
       FUNC_0(VAR_11->drive_impedance,
       VAR_2,
       VAR_3));


 FUNC_2(VAR_11->reg_base,
       VAR_11->reg_offset + VAR_0,
       FUNC_0(VAR_4,
       VAR_5,
       VAR_6));


 FUNC_2(VAR_11->reg_base,
       VAR_11->reg_offset + VAR_0,
       FUNC_0(4,
       VAR_7,
       VAR_8));


 return FUNC_3(VAR_10, VAR_9);
}
