
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct bnx2x_phy *VAR_6,
           struct link_params *VAR_7,
           u16 VAR_8)
{
 struct bnx2x *VAR_9 = VAR_7->bp;
 u16 VAR_10;


 FUNC_1(VAR_9, VAR_6,
     VAR_5,
     VAR_3, VAR_8);
 FUNC_0(VAR_9, VAR_6,
     VAR_4,
     VAR_0, &VAR_10);
 VAR_10 &= ~VAR_1;
 VAR_10 |= ((VAR_8<<3) & VAR_2);
 FUNC_1(VAR_9, VAR_6,
     VAR_4,
     VAR_0, VAR_10);
}
