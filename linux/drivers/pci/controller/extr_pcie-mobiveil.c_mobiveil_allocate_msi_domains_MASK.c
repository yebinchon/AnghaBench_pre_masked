
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mobiveil_msi {int dev_domain; int msi_domain; int num_of_vectors; int lock; } ;
struct mobiveil_pcie {struct mobiveil_msi msi; TYPE_1__* pdev; } ;
struct fwnode_handle {int dummy; } ;
struct device {int of_node; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *,int ,int *,struct mobiveil_pcie*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 struct fwnode_handle* FUNC_4 (int ) ;
 int FUNC_5 (struct fwnode_handle*,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct mobiveil_pcie *VAR_3)
{
 struct device *VAR_4 = &VAR_3->pdev->dev;
 struct fwnode_handle *VAR_5 = FUNC_4(VAR_4->of_node);
 struct mobiveil_msi *VAR_6 = &VAR_3->msi;

 FUNC_3(&VAR_3->msi.lock);
 VAR_6->dev_domain = FUNC_1(((void*)0), VAR_6->num_of_vectors,
      &VAR_2, VAR_3);
 if (!VAR_6->dev_domain) {
  FUNC_0(VAR_4, "failed to create IRQ domain\n");
  return -VAR_0;
 }

 VAR_6->msi_domain = FUNC_5(VAR_5,
          &VAR_1,
          VAR_6->dev_domain);
 if (!VAR_6->msi_domain) {
  FUNC_0(VAR_4, "failed to create MSI domain\n");
  FUNC_2(VAR_6->dev_domain);
  return -VAR_0;
 }

 return 0;
}
