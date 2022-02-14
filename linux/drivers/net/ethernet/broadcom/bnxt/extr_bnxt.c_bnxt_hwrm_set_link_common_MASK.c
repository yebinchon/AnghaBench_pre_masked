
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hwrm_port_phy_cfg_input {int flags; void* force_link_speed; int enables; void* auto_link_speed_mask; int auto_mode; } ;
struct TYPE_2__ {int autoneg; int advertising; int req_link_speed; } ;
struct bnxt {TYPE_1__ link_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct bnxt *VAR_7,
          struct hwrm_port_phy_cfg_input *VAR_8)
{
 u8 VAR_9 = VAR_7->link_info.autoneg;
 u16 VAR_10 = VAR_7->link_info.req_link_speed;
 u16 VAR_11 = VAR_7->link_info.advertising;

 if (VAR_9 & VAR_0) {
  VAR_8->auto_mode |=
   VAR_1;

  VAR_8->enables |= FUNC_1(
   VAR_2);
  VAR_8->auto_link_speed_mask = FUNC_0(VAR_11);

  VAR_8->enables |= FUNC_1(VAR_3);
  VAR_8->flags |=
   FUNC_1(VAR_6);
 } else {
  VAR_8->force_link_speed = FUNC_0(VAR_10);
  VAR_8->flags |= FUNC_1(VAR_4);
 }


 VAR_8->flags |= FUNC_1(VAR_5);
}
