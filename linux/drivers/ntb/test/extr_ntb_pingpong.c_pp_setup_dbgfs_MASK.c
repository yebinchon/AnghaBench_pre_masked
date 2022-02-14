
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_ctx {TYPE_1__* ntb; int count; int dbgfs_dir; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int dev; struct pci_dev* pdev; } ;


 void* FUNC_0 (char*,int,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct pci_dev*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct pp_ctx *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->ntb->pdev;
 void *VAR_3;

 VAR_1->dbgfs_dir = FUNC_1(FUNC_3(VAR_2), VAR_0);

 VAR_3 = FUNC_0("count", 0600, VAR_1->dbgfs_dir, &VAR_1->count);
 if (!VAR_3)
  FUNC_2(&VAR_1->ntb->dev, "DebugFS unsupported\n");
}
