
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_pcie {struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct armada8k_pcie {int phy_count; int ** phy; struct dw_pcie* pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct armada8k_pcie*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*) ;
 int * FUNC_5 (struct device*,struct device_node*,int) ;

__attribute__((used)) static int FUNC_6(struct armada8k_pcie *VAR_2)
{
 struct dw_pcie *VAR_3 = VAR_2->pci;
 struct device *VAR_4 = VAR_3->dev;
 struct device_node *VAR_5 = VAR_4->of_node;
 int VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_2->phy[VAR_7] = FUNC_5(VAR_4, VAR_5, VAR_7);
  if (FUNC_0(VAR_2->phy[VAR_7])) {
   if (FUNC_1(VAR_2->phy[VAR_7]) != -VAR_1)
    return FUNC_1(VAR_2->phy[VAR_7]);

   VAR_2->phy[VAR_7] = ((void*)0);
   continue;
  }

  VAR_2->phy_count++;
 }


 if (!VAR_2->phy_count)
  FUNC_4(VAR_4, "No available PHY\n");

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6)
  FUNC_3(VAR_4, "Failed to initialize PHY(s) (%d)\n", VAR_6);

 return VAR_6;
}
