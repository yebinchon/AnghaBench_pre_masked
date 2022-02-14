
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct bnx2x_phy *VAR_3,
      struct link_params *VAR_4)
{
 struct bnx2x *VAR_5 = VAR_4->bp;
 FUNC_0(VAR_2, "bnx2x_8726_link_reset port %d\n", VAR_4->port);

 FUNC_1(VAR_5, VAR_3,
    VAR_0,
    VAR_1, 0x0001);
}
