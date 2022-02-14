
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct expander_device {int num_phys; struct ex_phy* ex_phy; } ;
struct ex_phy {scalar_t__ phy_state; int * attached_sas_addr; } ;
struct domain_device {struct expander_device ex_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct domain_device*,int) ;

__attribute__((used)) static void FUNC_2(struct domain_device *VAR_2, u8 *VAR_3)
{
 struct expander_device *VAR_4 = &VAR_2->ex_dev;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_phys; VAR_5++) {
  struct ex_phy *VAR_6 = &VAR_4->ex_phy[VAR_5];

  if (VAR_6->phy_state == VAR_1 ||
      VAR_6->phy_state == VAR_0)
   continue;

  if (FUNC_0(VAR_6->attached_sas_addr) == FUNC_0(VAR_3))
   FUNC_1(VAR_2, VAR_5);
 }
}
