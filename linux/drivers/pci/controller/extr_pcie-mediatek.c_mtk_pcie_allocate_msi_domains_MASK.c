
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_pcie_port {int inner_domain; TYPE_1__* pcie; int msi_domain; int lock; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {TYPE_2__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (struct fwnode_handle*,int ,int *,struct mtk_pcie_port*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 struct fwnode_handle* FUNC_4 (int ) ;
 int FUNC_5 (struct fwnode_handle*,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct mtk_pcie_port *VAR_4)
{
 struct fwnode_handle *VAR_5 = FUNC_4(VAR_4->pcie->dev->of_node);

 FUNC_3(&VAR_4->lock);

 VAR_4->inner_domain = FUNC_1(VAR_5, VAR_1,
            &VAR_2, VAR_4);
 if (!VAR_4->inner_domain) {
  FUNC_0(VAR_4->pcie->dev, "failed to create IRQ domain\n");
  return -VAR_0;
 }

 VAR_4->msi_domain = FUNC_5(VAR_5, &VAR_3,
           VAR_4->inner_domain);
 if (!VAR_4->msi_domain) {
  FUNC_0(VAR_4->pcie->dev, "failed to create MSI domain\n");
  FUNC_2(VAR_4->inner_domain);
  return -VAR_0;
 }

 return 0;
}
