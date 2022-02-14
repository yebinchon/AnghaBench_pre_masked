
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwrm_port_phy_cfg_input {int enables; int force_pause; int auto_pause; } ;
struct TYPE_2__ {int autoneg; int req_flow_ctrl; } ;
struct bnxt {int hwrm_spec_code; TYPE_1__ link_info; } ;


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
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct bnxt *VAR_10, struct hwrm_port_phy_cfg_input *VAR_11)
{
 if (VAR_10->link_info.autoneg & VAR_0) {
  if (VAR_10->hwrm_spec_code >= 0x10201)
   VAR_11->auto_pause =
    VAR_3;
  if (VAR_10->link_info.req_flow_ctrl & VAR_1)
   VAR_11->auto_pause |= VAR_4;
  if (VAR_10->link_info.req_flow_ctrl & VAR_2)
   VAR_11->auto_pause |= VAR_5;
  VAR_11->enables |=
   FUNC_0(VAR_6);
 } else {
  if (VAR_10->link_info.req_flow_ctrl & VAR_1)
   VAR_11->force_pause |= VAR_8;
  if (VAR_10->link_info.req_flow_ctrl & VAR_2)
   VAR_11->force_pause |= VAR_9;
  VAR_11->enables |=
   FUNC_0(VAR_7);
  if (VAR_10->hwrm_spec_code >= 0x10201) {
   VAR_11->auto_pause = VAR_11->force_pause;
   VAR_11->enables |= FUNC_0(
    VAR_6);
  }
 }
}
