
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct link_params {int lane_config; struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ type; int addr; int flags; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x_phy*,struct link_params*) ;

__attribute__((used)) static void FUNC_4(struct link_params *VAR_6,
         struct bnx2x_phy *VAR_7)
{
 u32 VAR_8;
 u16 VAR_9, VAR_10;
 struct bnx2x *VAR_11 = VAR_6->bp;
 VAR_8 = ((VAR_6->lane_config &
       VAR_3) >>
       VAR_4);

 VAR_9 = (VAR_7->type == VAR_5) ?
  (VAR_7->addr + VAR_8) : 0;

 if (FUNC_2(VAR_11)) {
  VAR_10 = FUNC_3(VAR_7, VAR_6);






  if (VAR_7->flags & VAR_0)
   VAR_10 = (VAR_10 >> 1) | 0x200;
 } else if (FUNC_0(VAR_11))
  VAR_10 = 0x3800 + VAR_9 - 1;
 else
  VAR_10 = 0x3800 + VAR_9;

 FUNC_1(VAR_11, VAR_7, VAR_2,
     VAR_1, VAR_10);

}
