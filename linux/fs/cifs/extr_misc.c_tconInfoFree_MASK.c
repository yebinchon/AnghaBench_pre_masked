
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct cifs_tcon* fid; } ;
struct cifs_tcon {struct cifs_tcon* dfs_path; TYPE_1__ crfid; int password; struct cifs_tcon* nativeFileSystem; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct cifs_tcon*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

void
FUNC_4(struct cifs_tcon *VAR_2)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_0, "Null buffer passed to tconInfoFree\n");
  return;
 }
 FUNC_0(&VAR_1);
 FUNC_2(VAR_2->nativeFileSystem);
 FUNC_3(VAR_2->password);
 FUNC_2(VAR_2->crfid.fid);



 FUNC_2(VAR_2);
}
