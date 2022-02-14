
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int supported; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_3)
{
 if (FUNC_1(VAR_0,
         VAR_3->supported))
  return FUNC_0(VAR_2);
 else
  return FUNC_0(VAR_2) - VAR_1;
}
