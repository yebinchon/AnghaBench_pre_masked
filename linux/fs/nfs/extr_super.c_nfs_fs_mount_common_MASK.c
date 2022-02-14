
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int s_flags; int s_iflags; int s_root; int s_bdi; struct nfs_server* s_fs_info; } ;
struct nfs_subversion {int nfs_fs; } ;
struct nfs_server {int flags; struct super_block* super; int rpages; int s_dev; } ;
struct nfs_sb_mountdata {int mntflags; struct nfs_server* server; } ;
struct nfs_mount_info {int (* set_security ) (struct super_block*,struct super_block*,struct nfs_mount_info*) ;int mntfh; TYPE_2__* cloned; int parsed; int (* fill_super ) (struct super_block*,struct nfs_mount_info*) ;} ;
struct dentry {int s_flags; int s_iflags; int s_root; int s_bdi; struct nfs_server* s_fs_info; } ;
struct TYPE_4__ {TYPE_1__* sb; } ;
struct TYPE_3__ {int s_flags; } ;


 int VAR_0 ;
 struct super_block* FUNC_0 (struct super_block*) ;
 struct super_block* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*,void*) ;
 int FUNC_8 (struct nfs_server*) ;
 int FUNC_9 (struct super_block*,int ,TYPE_2__*) ;
 struct super_block* FUNC_10 (struct super_block*,int ,char const*) ;
 int FUNC_11 (int ,int ) ;
 int VAR_6 ;
 struct super_block* FUNC_12 (int ,int (*) (struct super_block*,void*),int ,int,struct nfs_sb_mountdata*) ;
 int FUNC_13 (struct super_block*,struct nfs_mount_info*) ;
 int FUNC_14 (struct super_block*,struct super_block*,struct nfs_mount_info*) ;
 int FUNC_15 (struct super_block*,char*,int ,int ) ;

struct dentry *FUNC_16(struct nfs_server *VAR_7,
       int VAR_8, const char *VAR_9,
       struct nfs_mount_info *VAR_10,
       struct nfs_subversion *VAR_11)
{
 struct super_block *VAR_12;
 struct dentry *VAR_13 = FUNC_1(-VAR_0);
 int (*VAR_14)(struct super_block *, void *) = FUNC_7;
 struct nfs_sb_mountdata VAR_15 = {
  .mntflags = VAR_8,
  .server = VAR_7,
 };
 int VAR_16;

 if (VAR_7->flags & VAR_2)
  VAR_14 = ((void*)0);


 if (VAR_7->flags & VAR_1)
  VAR_15.mntflags |= VAR_5;

 if (VAR_10->cloned != ((void*)0) && VAR_10->cloned->sb != ((void*)0))
  if (VAR_10->cloned->sb->s_flags & VAR_5)
   VAR_15.mntflags |= VAR_5;


 VAR_12 = FUNC_12(VAR_11->nfs_fs, VAR_14, VAR_6, VAR_8, &VAR_15);
 if (FUNC_2(VAR_12)) {
  VAR_13 = FUNC_0(VAR_12);
  goto out_err_nosb;
 }

 if (VAR_12->s_fs_info != VAR_7) {
  FUNC_8(VAR_7);
  VAR_7 = ((void*)0);
 } else {
  VAR_16 = FUNC_15(VAR_12, "%u:%u", FUNC_3(VAR_7->s_dev),
          FUNC_4(VAR_7->s_dev));
  if (VAR_16) {
   VAR_13 = FUNC_1(VAR_16);
   goto error_splat_super;
  }
  FUNC_11(VAR_12->s_bdi, VAR_7->rpages);
  VAR_7->super = VAR_12;
 }

 if (!VAR_12->s_root) {

  VAR_10->fill_super(VAR_12, VAR_10);
  FUNC_9(VAR_12, VAR_10->parsed, VAR_10->cloned);
  if (!(VAR_7->flags & VAR_2))
   VAR_12->s_iflags |= VAR_4;
 }

 VAR_13 = FUNC_10(VAR_12, VAR_10->mntfh, VAR_9);
 if (FUNC_2(VAR_13))
  goto error_splat_super;

 VAR_16 = VAR_10->set_security(VAR_12, VAR_13, VAR_10);
 if (VAR_16)
  goto error_splat_root;

 VAR_12->s_flags |= VAR_3;

out:
 return VAR_13;

out_err_nosb:
 FUNC_8(VAR_7);
 goto out;

error_splat_root:
 FUNC_6(VAR_13);
 VAR_13 = FUNC_1(VAR_16);
error_splat_super:
 FUNC_5(VAR_12);
 goto out;
}
