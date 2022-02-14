
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ phy_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct phy_device*) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_1)
{
 return VAR_1->phy_id == VAR_0 &&
        !FUNC_0(VAR_1);
}
