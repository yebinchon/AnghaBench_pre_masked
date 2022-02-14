
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad_debugfs_entry {int name; int fops; int mode; } ;
struct bnad {int netdev; int * bnad_dentry_files; void* port_debugfs_root; int pcidev; } ;
typedef int name ;


 int FUNC_0 (struct bnad_debugfs_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 struct bnad_debugfs_entry* VAR_2 ;
 void* FUNC_3 (char*,int *) ;
 int FUNC_4 (int ,int ,void*,struct bnad*,int ) ;
 int FUNC_5 (int ,char*,...) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*,int,char*,char*) ;

void
FUNC_8(struct bnad *VAR_3)
{
 const struct bnad_debugfs_entry *VAR_4;
 char VAR_5[64];
 int VAR_6;


 if (!VAR_1) {
  VAR_1 = FUNC_3("bna", ((void*)0));
  FUNC_2(&VAR_0, 0);
  if (!VAR_1) {
   FUNC_5(VAR_3->netdev,
        "debugfs root dir creation failed\n");
   return;
  }
 }


 FUNC_7(VAR_5, sizeof(VAR_5), "pci_dev:%s", FUNC_6(VAR_3->pcidev));
 if (!VAR_3->port_debugfs_root) {
  VAR_3->port_debugfs_root =
   FUNC_3(VAR_5, VAR_1);
  if (!VAR_3->port_debugfs_root) {
   FUNC_5(VAR_3->netdev,
        "debugfs root dir creation failed\n");
   return;
  }

  FUNC_1(&VAR_0);

  for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
   VAR_4 = &VAR_2[VAR_6];
   VAR_3->bnad_dentry_files[VAR_6] =
     FUNC_4(VAR_4->name,
       VAR_4->mode,
       VAR_3->port_debugfs_root,
       VAR_3,
       VAR_4->fops);
   if (!VAR_3->bnad_dentry_files[VAR_6]) {
    FUNC_5(VAR_3->netdev,
         "create %s entry failed\n",
         VAR_4->name);
    return;
   }
  }
 }
}
