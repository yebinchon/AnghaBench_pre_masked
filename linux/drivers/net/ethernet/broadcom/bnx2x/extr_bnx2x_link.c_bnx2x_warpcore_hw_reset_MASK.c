
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2x*,int ,int) ;
 int FUNC_1 (struct link_params*,int ) ;

__attribute__((used)) static void FUNC_2(struct bnx2x_phy *VAR_4,
        struct link_params *VAR_5)
{
 struct bnx2x *VAR_6 = VAR_5->bp;
 FUNC_1(VAR_5, 0);

 FUNC_0(VAR_6, VAR_3, 0x0c0e);


 FUNC_0(VAR_6, VAR_0, 1);
 FUNC_0(VAR_6, VAR_1, 0);
 FUNC_0(VAR_6, VAR_2, 0);
}
