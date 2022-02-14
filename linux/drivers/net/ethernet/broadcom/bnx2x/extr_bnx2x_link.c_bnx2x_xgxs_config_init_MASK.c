
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct link_vars {int phy_flags; scalar_t__ line_speed; int ieee_fc; } ;
struct link_params {scalar_t__ loopback_mode; int feature_config_flags; struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct link_params*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_3 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_4 (struct bnx2x_phy*,struct link_params*,int) ;
 int FUNC_5 (struct bnx2x_phy*,struct link_params*,struct link_vars*,int) ;
 int FUNC_6 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_7 (struct bnx2x_phy*,struct link_params*,int ) ;
 int FUNC_8 (struct bnx2x_phy*,struct link_params*) ;

__attribute__((used)) static void FUNC_9(struct bnx2x_phy *VAR_6,
       struct link_params *VAR_7,
       struct link_vars *VAR_8)
{
 struct bnx2x *VAR_9 = VAR_7->bp;
 u8 VAR_10 = (FUNC_1(VAR_7) ||
     (VAR_7->loopback_mode == VAR_2));
 if (!(VAR_8->phy_flags & VAR_4)) {
  if (FUNC_1(VAR_7) &&
      (VAR_7->feature_config_flags &
       VAR_0))
   FUNC_8(VAR_6, VAR_7);


  if (VAR_8->line_speed != VAR_5 ||
      (FUNC_1(VAR_7) &&
       VAR_7->loopback_mode == VAR_1)) {
   FUNC_0(VAR_3, "not SGMII, no AN\n");


   FUNC_5(VAR_6, VAR_7, VAR_8, 0);


   FUNC_3(VAR_6, VAR_7, VAR_8);

  } else {
   FUNC_0(VAR_3, "not SGMII, AN\n");


   FUNC_6(VAR_6, VAR_7);


   FUNC_7(VAR_6, VAR_7,
         VAR_8->ieee_fc);


   FUNC_5(VAR_6, VAR_7, VAR_8, VAR_10);


   FUNC_4(VAR_6, VAR_7, VAR_10);
  }

 } else {
  FUNC_0(VAR_3, "SGMII\n");

  FUNC_2(VAR_6, VAR_7, VAR_8);
 }
}
