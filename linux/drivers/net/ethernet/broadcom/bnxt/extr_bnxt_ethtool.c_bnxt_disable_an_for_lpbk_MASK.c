
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hwrm_port_phy_cfg_input {void* force_link_speed; int flags; } ;
struct bnxt_link_info {int link_speed; int autoneg; } ;
struct bnxt {struct bnxt_link_info link_info; int dev; } ;


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
 int FUNC_0 (struct bnxt*,int*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bnxt*,struct hwrm_port_phy_cfg_input*,int,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_12,
        struct hwrm_port_phy_cfg_input *VAR_13)
{
 struct bnxt_link_info *VAR_14 = &VAR_12->link_info;
 u16 VAR_15;
 u16 VAR_16;
 int VAR_17;

 if (!VAR_14->autoneg)
  return 0;

 VAR_17 = FUNC_0(VAR_12, &VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_16 = VAR_8;
 if (FUNC_4(VAR_12->dev))
  VAR_16 = VAR_12->link_info.link_speed;
 else if (VAR_15 & VAR_0)
  VAR_16 = VAR_7;
 else if (VAR_15 & VAR_1)
  VAR_16 = VAR_9;
 else if (VAR_15 & VAR_2)
  VAR_16 = VAR_10;
 else if (VAR_15 & VAR_3)
  VAR_16 = VAR_11;

 VAR_13->force_link_speed = FUNC_1(VAR_16);
 VAR_13->flags |= FUNC_2(VAR_5 |
      VAR_6);
 VAR_17 = FUNC_3(VAR_12, VAR_13, sizeof(*VAR_13), VAR_4);
 VAR_13->flags = 0;
 VAR_13->force_link_speed = FUNC_1(0);
 return VAR_17;
}
