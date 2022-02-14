
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct expander_device {int num_phys; struct ex_phy* ex_phy; } ;
struct ex_phy {scalar_t__ phy_state; scalar_t__ routing_attr; int attached_sas_addr; int attached_dev_type; } ;
struct domain_device {struct expander_device ex_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct domain_device *VAR_4, u8 *VAR_5)
{
 struct expander_device *VAR_6 = &VAR_4->ex_dev;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6->num_phys; VAR_7++) {
  struct ex_phy *VAR_8 = &VAR_6->ex_phy[VAR_7];

  if (VAR_8->phy_state == VAR_1 ||
      VAR_8->phy_state == VAR_0)
   continue;

  if (FUNC_0(VAR_8->attached_dev_type) &&
      VAR_8->routing_attr == VAR_3) {

   FUNC_1(VAR_5, VAR_8->attached_sas_addr, VAR_2);

   return 1;
  }
 }
 return 0;
}
