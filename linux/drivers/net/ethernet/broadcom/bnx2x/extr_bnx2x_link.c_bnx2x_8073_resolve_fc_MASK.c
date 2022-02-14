
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_vars {scalar_t__ flow_ctrl; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ req_line_speed; scalar_t__ req_flow_ctrl; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 scalar_t__ FUNC_2 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_3 (struct bnx2x_phy*,struct link_params*,struct link_vars*,int) ;

__attribute__((used)) static void FUNC_4(struct bnx2x_phy *VAR_8,
      struct link_params *VAR_9,
      struct link_vars *VAR_10)
{
 struct bnx2x *VAR_11 = VAR_9->bp;
 if (VAR_8->req_line_speed == VAR_6 ||
     VAR_8->req_line_speed == VAR_7) {
  VAR_10->flow_ctrl = VAR_8->req_flow_ctrl;
  return;
 }

 if (FUNC_2(VAR_8, VAR_9, VAR_10) &&
     (VAR_10->flow_ctrl == VAR_0)) {
  u16 VAR_12;
  u16 VAR_13;
  u16 VAR_14;
  FUNC_1(VAR_11, VAR_8,
    VAR_1,
    VAR_2, &VAR_13);

  FUNC_1(VAR_11, VAR_8,
    VAR_1,
    VAR_3, &VAR_14);
  VAR_12 = (VAR_13 &
    VAR_4) >> 5;
  VAR_12 |= (VAR_14 &
     VAR_4) >> 7;

  FUNC_3(VAR_8, VAR_9, VAR_10, VAR_12);
  FUNC_0(VAR_5, "Ext PHY CL37 pause result 0x%x\n",
      VAR_12);
 }
}
