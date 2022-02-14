
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link_vars {int link_status; } ;
struct link_params {int dummy; } ;
struct bnx2x_phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bnx2x_phy*,struct link_params*) ;

__attribute__((used)) static void FUNC_1(struct bnx2x_phy *VAR_3,
      struct link_params *VAR_4,
      struct link_vars *VAR_5,
      u32 VAR_6)
{
 if (VAR_6 & VAR_2)
  VAR_5->link_status |=
   VAR_0;

 if (FUNC_0(VAR_3, VAR_4))
  VAR_5->link_status |=
   VAR_1;
}
