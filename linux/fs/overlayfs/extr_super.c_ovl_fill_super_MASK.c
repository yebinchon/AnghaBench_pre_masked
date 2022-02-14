
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {struct dentry* s_root; int s_flags; struct ovl_fs* s_fs_info; int s_xattr; int s_magic; int * s_export_op; int s_time_gran; int s_stack_depth; int * s_op; int s_maxbytes; } ;
struct path {scalar_t__ dentry; int mnt; } ;
struct TYPE_6__ {int index; int nfs_export; scalar_t__ xino; scalar_t__ metacopy; int workdir; scalar_t__ upperdir; int lowerdir; } ;
struct ovl_fs {TYPE_3__ config; TYPE_2__* upper_mnt; int indexdir; int * workdir; scalar_t__ xino_bits; struct cred* creator_cred; } ;
struct ovl_entry {int dummy; } ;
struct dentry {struct ovl_entry* d_fsdata; } ;
struct cred {int cap_effective; } ;
struct TYPE_5__ {TYPE_1__* mnt_sb; } ;
struct TYPE_4__ {int s_time_gran; int s_stack_depth; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ovl_entry*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct ovl_entry*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dentry*) ;
 struct dentry* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ovl_entry*) ;
 struct ovl_fs* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct super_block*,struct ovl_fs*) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (int ,struct dentry*) ;
 int FUNC_12 (struct dentry*) ;
 int FUNC_13 (struct ovl_entry*) ;
 int VAR_14 ;
 int FUNC_14 (struct ovl_fs*) ;
 int FUNC_15 (struct ovl_fs*) ;
 int FUNC_16 (struct super_block*,struct ovl_fs*,struct ovl_entry*,struct path*) ;
 struct ovl_entry* FUNC_17 (struct super_block*,struct ovl_fs*) ;
 int FUNC_18 (struct super_block*,struct ovl_fs*,struct path*) ;
 int FUNC_19 (struct super_block*,struct ovl_fs*,struct path*) ;
 int VAR_15 ;
 int FUNC_20 (int ,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 scalar_t__ VAR_16 ;
 int FUNC_22 (struct super_block*,int ,int ) ;
 int VAR_17 ;
 int FUNC_23 (char*,TYPE_3__*) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_26 () ;
 int FUNC_27 (struct path*) ;
 int FUNC_28 (char*) ;
 int FUNC_29 (char*) ;
 struct cred* FUNC_30 () ;

__attribute__((used)) static int FUNC_31(struct super_block *VAR_20, void *VAR_21, int VAR_22)
{
 struct path VAR_23 = { };
 struct dentry *VAR_24;
 struct ovl_entry *VAR_25;
 struct ovl_fs *VAR_26;
 struct cred *VAR_27;
 int VAR_28;

 VAR_28 = -VAR_3;
 VAR_26 = FUNC_7(sizeof(struct ovl_fs), VAR_4);
 if (!VAR_26)
  goto out;

 VAR_26->creator_cred = VAR_27 = FUNC_30();
 if (!VAR_27)
  goto out_err;

 VAR_26->config.index = VAR_15;
 VAR_26->config.nfs_export = VAR_17;
 VAR_26->config.xino = FUNC_26();
 VAR_26->config.metacopy = VAR_16;
 VAR_28 = FUNC_23((char *) VAR_21, &VAR_26->config);
 if (VAR_28)
  goto out_err;

 VAR_28 = -VAR_2;
 if (!VAR_26->config.lowerdir) {
  if (!VAR_22)
   FUNC_28("overlayfs: missing 'lowerdir'\n");
  goto out_err;
 }

 VAR_20->s_stack_depth = 0;
 VAR_20->s_maxbytes = VAR_5;

 if (VAR_26->config.xino != VAR_10)
  VAR_26->xino_bits = VAR_0 - 32;


 VAR_20->s_op = &VAR_18;

 if (VAR_26->config.upperdir) {
  if (!VAR_26->config.workdir) {
   FUNC_28("overlayfs: missing 'workdir'\n");
   goto out_err;
  }

  VAR_28 = FUNC_18(VAR_20, VAR_26, &VAR_23);
  if (VAR_28)
   goto out_err;

  VAR_28 = FUNC_19(VAR_20, VAR_26, &VAR_23);
  if (VAR_28)
   goto out_err;

  if (!VAR_26->workdir)
   VAR_20->s_flags |= VAR_12;

  VAR_20->s_stack_depth = VAR_26->upper_mnt->mnt_sb->s_stack_depth;
  VAR_20->s_time_gran = VAR_26->upper_mnt->mnt_sb->s_time_gran;

 }
 VAR_25 = FUNC_17(VAR_20, VAR_26);
 VAR_28 = FUNC_1(VAR_25);
 if (FUNC_0(VAR_25))
  goto out_err;


 if (!VAR_26->upper_mnt)
  VAR_20->s_flags |= VAR_12;

 if (!(FUNC_14(VAR_26)) && VAR_26->config.index) {
  VAR_28 = FUNC_16(VAR_20, VAR_26, VAR_25, &VAR_23);
  if (VAR_28)
   goto out_free_oe;


  if (!VAR_26->indexdir) {
   FUNC_5(VAR_26->workdir);
   VAR_26->workdir = ((void*)0);
   VAR_20->s_flags |= VAR_12;
  }

 }

 VAR_28 = FUNC_9(VAR_20, VAR_26);
 if (VAR_28)
  goto out_free_oe;


 if (!VAR_26->indexdir) {
  VAR_26->config.index = 0;
  if (VAR_26->upper_mnt && VAR_26->config.nfs_export) {
   FUNC_29("overlayfs: NFS export requires an index dir, falling back to nfs_export=off.\n");
   VAR_26->config.nfs_export = 0;
  }
 }

 if (VAR_26->config.metacopy && VAR_26->config.nfs_export) {
  FUNC_29("overlayfs: NFS export is not supported with metadata only copy up, falling back to nfs_export=off.\n");
  VAR_26->config.nfs_export = 0;
 }

 if (VAR_26->config.nfs_export)
  VAR_20->s_export_op = &VAR_14;


 FUNC_2(VAR_27->cap_effective, VAR_1);

 VAR_20->s_magic = VAR_6;
 VAR_20->s_xattr = VAR_19;
 VAR_20->s_fs_info = VAR_26;
 VAR_20->s_flags |= VAR_11;

 VAR_28 = -VAR_3;
 VAR_24 = FUNC_4(FUNC_22(VAR_20, VAR_13, 0));
 if (!VAR_24)
  goto out_free_oe;

 VAR_24->d_fsdata = VAR_25;

 FUNC_8(VAR_23.mnt);
 if (VAR_23.dentry) {
  FUNC_12(VAR_24);
  if (FUNC_21(VAR_23.dentry))
   FUNC_24(VAR_8, FUNC_3(VAR_24));
 }


 FUNC_24(VAR_9, FUNC_3(VAR_24));
 FUNC_11(VAR_7, VAR_24);
 FUNC_25(FUNC_3(VAR_24));
 FUNC_20(FUNC_3(VAR_24), VAR_23.dentry,
         FUNC_10(VAR_24), ((void*)0));

 VAR_20->s_root = VAR_24;

 return 0;

out_free_oe:
 FUNC_13(VAR_25);
 FUNC_6(VAR_25);
out_err:
 FUNC_27(&VAR_23);
 FUNC_15(VAR_26);
out:
 return VAR_28;
}
