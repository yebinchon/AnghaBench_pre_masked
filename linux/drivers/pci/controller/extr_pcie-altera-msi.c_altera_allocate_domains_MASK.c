
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fwnode_handle {int dummy; } ;
struct altera_msi {int inner_domain; TYPE_1__* pdev; int msi_domain; int num_of_vectors; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int *,int ,int *,struct altera_msi*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 struct fwnode_handle* FUNC_3 (int ) ;
 int FUNC_4 (struct fwnode_handle*,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct altera_msi *VAR_3)
{
 struct fwnode_handle *VAR_4 = FUNC_3(VAR_3->pdev->dev.of_node);

 VAR_3->inner_domain = FUNC_1(((void*)0), VAR_3->num_of_vectors,
          &VAR_2, VAR_3);
 if (!VAR_3->inner_domain) {
  FUNC_0(&VAR_3->pdev->dev, "failed to create IRQ domain\n");
  return -VAR_0;
 }

 VAR_3->msi_domain = FUNC_4(VAR_4,
    &VAR_1, VAR_3->inner_domain);
 if (!VAR_3->msi_domain) {
  FUNC_0(&VAR_3->pdev->dev, "failed to create MSI domain\n");
  FUNC_2(VAR_3->inner_domain);
  return -VAR_0;
 }

 return 0;
}
