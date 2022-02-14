
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int s_uuid; } ;
struct path {int dentry; TYPE_1__* mnt; } ;
struct TYPE_7__ {int index; int nfs_export; } ;
struct ovl_fs {unsigned int numlowerfs; TYPE_4__* lower_fs; TYPE_3__ config; TYPE_2__* upper_mnt; } ;
typedef int dev_t ;
struct TYPE_8__ {int pseudo_dev; struct super_block* sb; } ;
struct TYPE_6__ {struct super_block* mnt_sb; } ;
struct TYPE_5__ {struct super_block* mnt_sb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ovl_fs*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ovl_fs *VAR_0, const struct path *VAR_1)
{
 struct super_block *VAR_2 = VAR_1->mnt->mnt_sb;
 unsigned int VAR_3;
 dev_t VAR_4;
 int VAR_5;


 if (VAR_0->upper_mnt && VAR_0->upper_mnt->mnt_sb == VAR_2)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->numlowerfs; VAR_3++) {
  if (VAR_0->lower_fs[VAR_3].sb == VAR_2)
   return VAR_3 + 1;
 }

 if (!FUNC_1(VAR_0, &VAR_2->s_uuid)) {
  VAR_0->config.index = 0;
  VAR_0->config.nfs_export = 0;
  FUNC_3("overlayfs: %s uuid detected in lower fs '%pd2', falling back to index=off,nfs_export=off.\n",
   FUNC_4(&VAR_2->s_uuid) ? "null" : "conflicting",
   VAR_1->dentry);
 }

 VAR_5 = FUNC_0(&VAR_4);
 if (VAR_5) {
  FUNC_2("overlayfs: failed to get anonymous bdev for lowerpath\n");
  return VAR_5;
 }

 VAR_0->lower_fs[VAR_0->numlowerfs].sb = VAR_2;
 VAR_0->lower_fs[VAR_0->numlowerfs].pseudo_dev = VAR_4;
 VAR_0->numlowerfs++;

 return VAR_0->numlowerfs;
}
