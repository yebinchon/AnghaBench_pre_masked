
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int local_nls; int s_flags; scalar_t__ s_root; } ;
struct smb_vol {int local_nls; int s_flags; scalar_t__ s_root; } ;
struct file_system_type {int dummy; } ;
struct dentry {int local_nls; int s_flags; scalar_t__ s_root; } ;
struct cifs_sb_info {struct cifs_sb_info* mountdata; struct cifs_sb_info* prepath; } ;
struct cifs_mnt_data {int flags; struct cifs_sb_info* cifs_sb; struct super_block* vol; } ;


 int VAR_0 ;
 struct super_block* FUNC_0 (struct super_block*) ;
 struct super_block* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (int ,char*,...) ;
 struct super_block* FUNC_5 (struct super_block*,struct super_block*) ;
 struct super_block* FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char*,char const*) ;
 int VAR_10 ;
 int FUNC_8 (struct cifs_sb_info*,struct super_block*) ;
 int FUNC_9 (struct super_block*) ;
 int VAR_11 ;
 int FUNC_10 (struct super_block*,struct cifs_sb_info*) ;
 int FUNC_11 (struct cifs_sb_info*) ;
 int FUNC_12 (struct super_block*) ;
 int FUNC_13 (struct cifs_sb_info*) ;
 struct cifs_sb_info* FUNC_14 (void*,int ,int ) ;
 struct cifs_sb_info* FUNC_15 (int,int ) ;
 struct super_block* FUNC_16 (struct file_system_type*,int ,int ,int,struct cifs_mnt_data*) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static struct dentry *
FUNC_18(struct file_system_type *VAR_12,
       int VAR_13, const char *VAR_14, void *VAR_15, bool VAR_16)
{
 int VAR_17;
 struct super_block *VAR_18;
 struct cifs_sb_info *VAR_19;
 struct smb_vol *VAR_20;
 struct cifs_mnt_data VAR_21;
 struct dentry *VAR_22;





 if (VAR_9)
  FUNC_4(VAR_1, "Devname: %s flags: %d\n", VAR_14, VAR_13);
 else
  FUNC_7("Attempting to mount %s\n", VAR_14);

 VAR_20 = FUNC_6((char *)VAR_15, VAR_14, VAR_16);
 if (FUNC_2(VAR_20))
  return FUNC_0(VAR_20);

 VAR_19 = FUNC_15(sizeof(struct cifs_sb_info), VAR_2);
 if (VAR_19 == ((void*)0)) {
  VAR_22 = FUNC_1(-VAR_0);
  goto out_nls;
 }

 VAR_19->mountdata = FUNC_14(VAR_15, VAR_3, VAR_2);
 if (VAR_19->mountdata == ((void*)0)) {
  VAR_22 = FUNC_1(-VAR_0);
  goto out_free;
 }

 VAR_17 = FUNC_10(VAR_20, VAR_19);
 if (VAR_17) {
  VAR_22 = FUNC_1(VAR_17);
  goto out_free;
 }

 VAR_17 = FUNC_8(VAR_19, VAR_20);
 if (VAR_17) {
  if (!(VAR_13 & VAR_7))
   FUNC_4(VAR_8, "cifs_mount failed w/return code = %d\n",
     VAR_17);
  VAR_22 = FUNC_1(VAR_17);
  goto out_free;
 }

 VAR_21.vol = VAR_20;
 VAR_21.cifs_sb = VAR_19;
 VAR_21.flags = VAR_13;


 VAR_13 |= VAR_6 | VAR_5;

 VAR_18 = FUNC_16(VAR_12, VAR_10, VAR_11, VAR_13, &VAR_21);
 if (FUNC_2(VAR_18)) {
  VAR_22 = FUNC_0(VAR_18);
  FUNC_11(VAR_19);
  goto out;
 }

 if (VAR_18->s_root) {
  FUNC_4(VAR_1, "Use existing superblock\n");
  FUNC_11(VAR_19);
 } else {
  VAR_17 = FUNC_9(VAR_18);
  if (VAR_17) {
   VAR_22 = FUNC_1(VAR_17);
   goto out_super;
  }

  VAR_18->s_flags |= VAR_4;
 }

 VAR_22 = FUNC_5(VAR_20, VAR_18);
 if (FUNC_2(VAR_22))
  goto out_super;

 FUNC_4(VAR_1, "dentry root is: %p\n", VAR_22);
 goto out;

out_super:
 FUNC_12(VAR_18);
out:
 FUNC_3(VAR_20);
 return VAR_22;

out_free:
 FUNC_13(VAR_19->prepath);
 FUNC_13(VAR_19->mountdata);
 FUNC_13(VAR_19);
out_nls:
 FUNC_17(VAR_20->local_nls);
 goto out;
}
