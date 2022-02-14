
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct expander_device {int num_phys; struct ex_phy* ex_phy; } ;
struct ex_phy {scalar_t__ phy_state; scalar_t__ routing_attr; int * attached_sas_addr; int attached_dev_type; } ;
struct domain_device {scalar_t__ dev_type; int * sas_addr; struct expander_device ex_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct domain_device*,int) ;

__attribute__((used)) static int FUNC_4(struct domain_device *VAR_4)
{
 struct expander_device *VAR_5 = &VAR_4->ex_dev;
 int VAR_6;
 u8 *VAR_7 = ((void*)0);

 if (VAR_4->dev_type != VAR_2)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_phys; VAR_6++) {
  struct ex_phy *VAR_8 = &VAR_5->ex_phy[VAR_6];

  if (VAR_8->phy_state == VAR_1 ||
      VAR_8->phy_state == VAR_0)
   continue;

  if (FUNC_1(VAR_8->attached_dev_type) &&
      VAR_8->routing_attr == VAR_3) {

   if (!VAR_7)
    VAR_7 = &VAR_8->attached_sas_addr[0];
   else if (FUNC_0(VAR_7) !=
     FUNC_0(VAR_8->attached_sas_addr)) {

    FUNC_2("ex %016llx phy%02d diverges(%016llx) on subtractive boundary(%016llx). Disabled\n",
       FUNC_0(VAR_4->sas_addr), VAR_6,
       FUNC_0(VAR_8->attached_sas_addr),
       FUNC_0(VAR_7));
    FUNC_3(VAR_4, VAR_6);
   }
  }
 }
 return 0;
}
