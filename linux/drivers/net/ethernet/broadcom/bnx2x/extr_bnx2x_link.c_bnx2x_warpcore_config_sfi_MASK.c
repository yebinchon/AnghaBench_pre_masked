
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_params {scalar_t__* req_line_speed; struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ media_type; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_3 (struct bnx2x_phy*,struct link_params*,int ) ;
 int FUNC_4 (struct bnx2x_phy*,struct link_params*,int ) ;
 int FUNC_5 (struct bnx2x_phy*,struct link_params*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct bnx2x_phy *VAR_4,
          struct link_params *VAR_5)
{
 u16 VAR_6 = FUNC_2(VAR_4, VAR_5);
 struct bnx2x *VAR_7 = VAR_5->bp;
 FUNC_3(VAR_4, VAR_5, VAR_6);
 if ((VAR_5->req_line_speed[FUNC_1(VAR_1)] ==
      VAR_3) &&
     (VAR_4->media_type != VAR_0)) {
  FUNC_0(VAR_2, "Setting 10G SFI\n");
  FUNC_4(VAR_4, VAR_5, 0);
 } else {
  FUNC_0(VAR_2, "Setting 1G Fiber\n");
  FUNC_5(VAR_4, VAR_5, 1, 0);
 }
}
