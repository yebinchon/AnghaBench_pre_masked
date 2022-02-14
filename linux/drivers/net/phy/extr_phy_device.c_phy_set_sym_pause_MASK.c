
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int supported; int advertising; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct phy_device *VAR_1, bool VAR_2, bool VAR_3,
         bool VAR_4)
{
 FUNC_0(VAR_0, VAR_1->supported);

 if (VAR_2 && VAR_3 && VAR_4)
  FUNC_2(VAR_0,
     VAR_1->supported);

 FUNC_1(VAR_1->advertising, VAR_1->supported);
}
