
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_dphy {int regs; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sun6i_dphy* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_2)
{
 struct sun6i_dphy *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_3->regs, VAR_0,
      VAR_1, 0);

 return 0;
}
