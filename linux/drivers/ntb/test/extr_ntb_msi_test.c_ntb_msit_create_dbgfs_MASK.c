
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ntb_msit_ctx {TYPE_2__* isr_ctx; struct dentry* dbgfs_dir; TYPE_2__* peers; TYPE_1__* ntb; } ;
struct dentry {int dummy; } ;
typedef int buf ;
struct TYPE_4__ {int pidx; int init_comp; struct ntb_msit_ctx* nm; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;


 void* FUNC_0 (char*,struct dentry*) ;
 int FUNC_1 (char*,int,struct dentry*,struct ntb_msit_ctx*,int *) ;
 int FUNC_2 (char*,int,struct dentry*,TYPE_2__*,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 struct dentry* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_7 ;
 char* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_7(struct ntb_msit_ctx *VAR_8)
{
 struct pci_dev *VAR_9 = VAR_8->ntb->pdev;
 char VAR_10[32];
 int VAR_11;
 struct dentry *VAR_12;

 VAR_8->dbgfs_dir = FUNC_0(FUNC_5(VAR_9),
        VAR_1);
 FUNC_1("port", 0400, VAR_8->dbgfs_dir, VAR_8,
       &VAR_2);

 for (VAR_11 = 0; VAR_11 < FUNC_4(VAR_8->ntb); VAR_11++) {
  VAR_8->peers[VAR_11].pidx = VAR_11;
  VAR_8->peers[VAR_11].nm = VAR_8;
  FUNC_3(&VAR_8->peers[VAR_11].init_comp);

  FUNC_6(VAR_10, sizeof(VAR_10), "peer%d", VAR_11);
  VAR_12 = FUNC_0(VAR_10, VAR_8->dbgfs_dir);

  FUNC_2("trigger", 0200, VAR_12,
        &VAR_8->peers[VAR_11],
        &VAR_6);

  FUNC_2("port", 0400, VAR_12,
        &VAR_8->peers[VAR_11], &VAR_4);

  FUNC_2("count", 0400, VAR_12,
        &VAR_8->peers[VAR_11],
        &VAR_0);

  FUNC_2("ready", 0600, VAR_12,
        &VAR_8->peers[VAR_11],
        &VAR_5);
 }

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  FUNC_6(VAR_10, sizeof(VAR_10), "irq%d_occurrences", VAR_11);
  FUNC_2(VAR_10, 0400, VAR_8->dbgfs_dir,
        &VAR_8->isr_ctx[VAR_11],
        &VAR_3);
 }
}
