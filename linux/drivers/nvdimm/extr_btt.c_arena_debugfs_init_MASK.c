
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct arena_info {int * log_index; int flags; int info2off; int logoff; int mapoff; int dataoff; int infooff; int nextoff; int version_minor; int version_major; int nfree; int external_lbasize; int external_nlba; int internal_lbasize; int internal_nlba; int external_lba_start; int size; struct dentry* debugfs_dir; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (char*,struct dentry*) ;
 int FUNC_2 (char*,int ,struct dentry*,int *) ;
 int FUNC_3 (char*,int ,struct dentry*,int *) ;
 int FUNC_4 (char*,int ,struct dentry*,int *) ;
 int FUNC_5 (char*,int ,struct dentry*,int *) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_7(struct arena_info *VAR_1, struct dentry *VAR_2,
    int VAR_3)
{
 char VAR_4[32];
 struct dentry *VAR_5;


 if (!VAR_2)
  return;

 FUNC_6(VAR_4, 32, "arena%d", VAR_3);
 VAR_5 = FUNC_1(VAR_4, VAR_2);
 if (FUNC_0(VAR_5))
  return;
 VAR_1->debugfs_dir = VAR_5;

 FUNC_5("size", VAR_0, VAR_5, &VAR_1->size);
 FUNC_5("external_lba_start", VAR_0, VAR_5,
    &VAR_1->external_lba_start);
 FUNC_4("internal_nlba", VAR_0, VAR_5, &VAR_1->internal_nlba);
 FUNC_3("internal_lbasize", VAR_0, VAR_5,
    &VAR_1->internal_lbasize);
 FUNC_4("external_nlba", VAR_0, VAR_5, &VAR_1->external_nlba);
 FUNC_3("external_lbasize", VAR_0, VAR_5,
    &VAR_1->external_lbasize);
 FUNC_3("nfree", VAR_0, VAR_5, &VAR_1->nfree);
 FUNC_2("version_major", VAR_0, VAR_5, &VAR_1->version_major);
 FUNC_2("version_minor", VAR_0, VAR_5, &VAR_1->version_minor);
 FUNC_5("nextoff", VAR_0, VAR_5, &VAR_1->nextoff);
 FUNC_5("infooff", VAR_0, VAR_5, &VAR_1->infooff);
 FUNC_5("dataoff", VAR_0, VAR_5, &VAR_1->dataoff);
 FUNC_5("mapoff", VAR_0, VAR_5, &VAR_1->mapoff);
 FUNC_5("logoff", VAR_0, VAR_5, &VAR_1->logoff);
 FUNC_5("info2off", VAR_0, VAR_5, &VAR_1->info2off);
 FUNC_4("flags", VAR_0, VAR_5, &VAR_1->flags);
 FUNC_3("log_index_0", VAR_0, VAR_5, &VAR_1->log_index[0]);
 FUNC_3("log_index_1", VAR_0, VAR_5, &VAR_1->log_index[1]);
}
