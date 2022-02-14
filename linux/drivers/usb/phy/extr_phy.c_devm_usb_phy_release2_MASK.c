
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_devm {int phy; scalar_t__ nb; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct phy_devm *VAR_2 = VAR_1;

 if (VAR_2->nb)
  FUNC_1(VAR_2->phy, VAR_2->nb);
 FUNC_0(VAR_2->phy);
}
