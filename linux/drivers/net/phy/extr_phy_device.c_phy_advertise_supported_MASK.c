
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int advertising; int supported; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct phy_device *VAR_1)
{
 FUNC_0(VAR_0);

 FUNC_1(VAR_0, VAR_1->supported);
 FUNC_2(VAR_0, VAR_1->advertising);
 FUNC_1(VAR_1->advertising, VAR_0);
}
