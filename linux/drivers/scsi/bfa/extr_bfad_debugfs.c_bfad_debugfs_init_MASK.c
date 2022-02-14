
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {char* pci_name; int * bfad_dentry_files; } ;
struct bfad_port_s {void* port_debugfs_root; struct bfad_s* bfad; } ;
struct bfad_debugfs_entry {int fops; int mode; int name; } ;
typedef int name ;


 int FUNC_0 (struct bfad_debugfs_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 struct bfad_debugfs_entry* VAR_3 ;
 void* FUNC_3 (char*,int *) ;
 int FUNC_4 (int ,int ,void*,struct bfad_port_s*,int ) ;
 int FUNC_5 (char*,int,char*,char*) ;

inline void
FUNC_6(struct bfad_port_s *VAR_4)
{
 struct bfad_s *VAR_5 = VAR_4->bfad;
 const struct bfad_debugfs_entry *VAR_6;
 char VAR_7[64];
 int VAR_8;

 if (!VAR_0)
  return;


 if (!VAR_2) {
  VAR_2 = FUNC_3("bfa", ((void*)0));
  FUNC_2(&VAR_1, 0);
 }


 FUNC_5(VAR_7, sizeof(VAR_7), "pci_dev:%s", VAR_5->pci_name);
 if (!VAR_4->port_debugfs_root) {
  VAR_4->port_debugfs_root =
   FUNC_3(VAR_7, VAR_2);

  FUNC_1(&VAR_1);

  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
   VAR_6 = &VAR_3[VAR_8];
   VAR_5->bfad_dentry_files[VAR_8] =
     FUNC_4(VAR_6->name,
       VAR_6->mode,
       VAR_4->port_debugfs_root,
       VAR_4,
       VAR_6->fops);
  }
 }

 return;
}
