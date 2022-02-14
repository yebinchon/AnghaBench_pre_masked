
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs_unlinkdata {struct dentry* dentry; } ;
struct dentry {int d_parent; struct super_block* d_sb; } ;
struct TYPE_2__ {int rmdir_sem; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct nfs_unlinkdata*) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void *VAR_0)
{
 struct nfs_unlinkdata *VAR_1 = VAR_0;
 struct dentry *VAR_2 = VAR_1->dentry;
 struct super_block *VAR_3 = VAR_2->d_sb;

 FUNC_6(&FUNC_0(FUNC_1(VAR_2->d_parent))->rmdir_sem);
 FUNC_2(VAR_2);
 FUNC_4(VAR_1);
 FUNC_3(VAR_2);
 FUNC_5(VAR_3);
}
