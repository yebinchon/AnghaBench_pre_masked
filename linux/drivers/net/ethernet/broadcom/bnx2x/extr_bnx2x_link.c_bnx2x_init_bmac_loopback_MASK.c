
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_vars {int link_up; int phy_flags; int mac_type; int flow_ctrl; int duplex; int line_speed; } ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnx2x*,scalar_t__,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct link_params*,struct link_vars*,int,int) ;
 int FUNC_2 (struct link_params*) ;

__attribute__((used)) static void FUNC_3(struct link_params *VAR_6,
         struct link_vars *VAR_7)
{
 struct bnx2x *VAR_8 = VAR_6->bp;
 VAR_7->link_up = 1;
 VAR_7->line_speed = VAR_5;
 VAR_7->duplex = VAR_1;
 VAR_7->flow_ctrl = VAR_0;
 VAR_7->mac_type = VAR_2;

 VAR_7->phy_flags = VAR_4;

 FUNC_2(VAR_6);


 FUNC_1(VAR_6, VAR_7, 1, 1);

 FUNC_0(VAR_8, VAR_3 + VAR_6->port * 4, 0);
}
