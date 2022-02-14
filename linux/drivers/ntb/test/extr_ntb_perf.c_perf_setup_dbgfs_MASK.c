
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_ctx {int dbgfs_dir; TYPE_1__* ntb; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int dev; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int,int ,struct perf_ctx*,int *) ;
 int FUNC_3 (char*,int,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct pci_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(struct perf_ctx *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_7->ntb->pdev;

 VAR_7->dbgfs_dir = FUNC_1(FUNC_5(VAR_8), VAR_4);
 if (!VAR_7->dbgfs_dir) {
  FUNC_4(&VAR_7->ntb->dev, "DebugFS unsupported\n");
  return;
 }

 FUNC_2("info", 0600, VAR_7->dbgfs_dir, VAR_7,
       &VAR_1);

 FUNC_2("run", 0600, VAR_7->dbgfs_dir, VAR_7,
       &VAR_2);

 FUNC_2("threads_count", 0600, VAR_7->dbgfs_dir, VAR_7,
       &VAR_3);


 FUNC_3("chunk_order", 0500, VAR_7->dbgfs_dir, &VAR_0);

 FUNC_3("total_order", 0500, VAR_7->dbgfs_dir, &VAR_5);

 FUNC_0("use_dma", 0500, VAR_7->dbgfs_dir, &VAR_6);
}
