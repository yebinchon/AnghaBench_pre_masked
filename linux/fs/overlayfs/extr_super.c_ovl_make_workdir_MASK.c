
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct super_block {int dummy; } ;
struct path {int dummy; } ;
struct TYPE_7__ {int index; int metacopy; int nfs_export; } ;
struct ovl_fs {int tmpfile; int noxattr; TYPE_1__ config; scalar_t__ xino_bits; TYPE_2__* workdir; int workdir_trap; struct vfsmount* upper_mnt; } ;
struct dentry {int dummy; } ;
struct TYPE_8__ {int d_sb; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct vfsmount*) ;
 int FUNC_3 (struct vfsmount*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct path*) ;
 int FUNC_6 (TYPE_2__*,int ,char*,int,int ) ;
 struct dentry* FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (struct super_block*,TYPE_2__*,int *,char*) ;
 TYPE_2__* FUNC_9 (struct ovl_fs*,int ,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_4, struct ovl_fs *VAR_5,
       struct path *VAR_6)
{
 struct vfsmount *VAR_7 = VAR_5->upper_mnt;
 struct dentry *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_5->workdir = FUNC_9(VAR_5, VAR_1, 0);
 if (!VAR_5->workdir)
  goto out;

 VAR_10 = FUNC_8(VAR_4, VAR_5->workdir, &VAR_5->workdir_trap, "workdir");
 if (VAR_10)
  goto out;







 VAR_10 = FUNC_5(VAR_6);
 if (VAR_10 < 0)
  goto out;





 if (!VAR_10)
  FUNC_10("overlayfs: upper fs needs to support d_type.\n");


 VAR_8 = FUNC_7(VAR_5->workdir, VAR_3 | 0);
 VAR_5->tmpfile = !FUNC_0(VAR_8);
 if (VAR_5->tmpfile)
  FUNC_1(VAR_8);
 else
  FUNC_10("overlayfs: upper fs does not support tmpfile.\n");




 VAR_10 = FUNC_6(VAR_5->workdir, VAR_2, "0", 1, 0);
 if (VAR_10) {
  VAR_5->noxattr = 1;
  VAR_5->config.index = 0;
  VAR_5->config.metacopy = 0;
  FUNC_10("overlayfs: upper fs does not support xattr, falling back to index=off and metacopy=off.\n");
  VAR_10 = 0;
 } else {
  FUNC_11(VAR_5->workdir, VAR_2);
 }


 VAR_9 = FUNC_4(VAR_5->workdir->d_sb);
 if (VAR_5->config.index && !VAR_9) {
  VAR_5->config.index = 0;
  FUNC_10("overlayfs: upper fs does not support file handles, falling back to index=off.\n");
 }


 if (VAR_9 != VAR_0)
  VAR_5->xino_bits = 0;


 if (VAR_5->config.nfs_export && !VAR_5->config.index) {
  FUNC_10("overlayfs: NFS export requires \"index=on\", falling back to nfs_export=off.\n");
  VAR_5->config.nfs_export = 0;
 }
out:
 FUNC_2(VAR_7);
 return VAR_10;
}
