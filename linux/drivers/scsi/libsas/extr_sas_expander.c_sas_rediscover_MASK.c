
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expander_device {int num_phys; struct ex_phy* ex_phy; } ;
struct ex_phy {int attached_sas_addr; } ;
struct domain_device {int sas_addr; struct expander_device ex_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,int const) ;
 int FUNC_2 (struct domain_device*,int const) ;
 int FUNC_3 (struct domain_device*,int const,int,int) ;

__attribute__((used)) static int FUNC_4(struct domain_device *VAR_0, const int VAR_1)
{
 struct expander_device *VAR_2 = &VAR_0->ex_dev;
 struct ex_phy *VAR_3 = &VAR_2->ex_phy[VAR_1];
 int VAR_4 = 0;
 int VAR_5;
 bool VAR_6 = 1;

 FUNC_1("ex %016llx phy%02d originated BROADCAST(CHANGE)\n",
   FUNC_0(VAR_0->sas_addr), VAR_1);

 if (FUNC_0(VAR_3->attached_sas_addr) != 0) {
  for (VAR_5 = 0; VAR_5 < VAR_2->num_phys; VAR_5++) {
   struct ex_phy *VAR_7 = &VAR_2->ex_phy[VAR_5];

   if (VAR_5 == VAR_1)
    continue;
   if (FUNC_0(VAR_7->attached_sas_addr) ==
       FUNC_0(VAR_3->attached_sas_addr)) {
    VAR_6 = 0;
    break;
   }
  }
  VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_6, VAR_5);
 } else
  VAR_4 = FUNC_2(VAR_0, VAR_1);
 return VAR_4;
}
