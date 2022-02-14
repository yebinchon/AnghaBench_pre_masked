
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int ) ;
 int FUNC_1 (struct link_params*,struct bnx2x_phy*,int) ;
 int FUNC_2 (struct link_params*,struct bnx2x_phy*,int ) ;

__attribute__((used)) static void FUNC_3(struct bnx2x_phy *VAR_2,
      struct link_params *VAR_3)
{
 struct bnx2x *VAR_4 = VAR_3->bp;


 FUNC_1(VAR_3, VAR_2, 1);


 FUNC_2(VAR_3, VAR_2, 0);

 FUNC_0(VAR_4, VAR_2, VAR_0, VAR_1, 0);

}
