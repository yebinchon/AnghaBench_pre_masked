
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_vars {int ieee_fc; int phy_flags; } ;
struct link_params {int dummy; } ;
struct bnx2x_phy {scalar_t__ req_line_speed; scalar_t__ speed_cap_mask; scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct bnx2x_phy*,struct link_params*,int *) ;
 int FUNC_1 (struct link_params*,struct bnx2x_phy*,int ) ;
 int FUNC_2 (struct link_params*,struct bnx2x_phy*) ;
 int FUNC_3 (struct link_params*,struct bnx2x_phy*) ;
 int FUNC_4 (struct link_params*,struct bnx2x_phy*) ;

__attribute__((used)) static int FUNC_5(struct bnx2x_phy *VAR_8,
     struct link_params *VAR_9,
     struct link_vars *VAR_10)
{
 int VAR_11;
 VAR_10->phy_flags |= VAR_1;
 if ((VAR_8->req_line_speed &&
      ((VAR_8->req_line_speed == VAR_7) ||
       (VAR_8->req_line_speed == VAR_6))) ||
     (!VAR_8->req_line_speed &&
      (VAR_8->speed_cap_mask >=
       VAR_3) &&
      (VAR_8->speed_cap_mask <
       VAR_4)) ||
     (VAR_8->type == VAR_2))
  VAR_10->phy_flags |= VAR_0;
 else
  VAR_10->phy_flags &= ~VAR_0;

 FUNC_0(VAR_8, VAR_9, &VAR_10->ieee_fc);
 FUNC_2(VAR_9, VAR_8);
 if (VAR_8->type == VAR_5)
  FUNC_3(VAR_9, VAR_8);

 VAR_11 = FUNC_1(VAR_9, VAR_8, 0);

 if (VAR_11)
  return VAR_11;

 FUNC_2(VAR_9, VAR_8);

 if (VAR_8->type == VAR_5) {
  FUNC_3(VAR_9, VAR_8);
  FUNC_4(VAR_9, VAR_8);
 }

 return VAR_11;
}
