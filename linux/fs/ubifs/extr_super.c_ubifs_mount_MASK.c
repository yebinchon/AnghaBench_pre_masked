
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vol_id; int ubi_num; } ;
struct ubifs_info {int ro_mount; TYPE_1__ vi; } ;
struct ubi_volume_desc {scalar_t__ s_root; int s_flags; struct ubifs_info* s_fs_info; } ;
struct super_block {scalar_t__ s_root; int s_flags; struct ubifs_info* s_fs_info; } ;
struct file_system_type {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (struct ubi_volume_desc*) ;
 struct dentry* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ubi_volume_desc*) ;
 int FUNC_4 (struct ubi_volume_desc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ubifs_info* FUNC_5 (struct ubi_volume_desc*) ;
 TYPE_2__* VAR_8 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct ubi_volume_desc*) ;
 struct dentry* FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct ubifs_info*) ;
 struct ubi_volume_desc* FUNC_10 (char const*,int ) ;
 int FUNC_11 (char*,int ,char const*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 struct ubi_volume_desc* FUNC_12 (struct file_system_type*,int ,int ,int,struct ubifs_info*) ;
 int FUNC_13 (struct ubi_volume_desc*) ;
 int FUNC_14 (struct ubi_volume_desc*,void*,int) ;
 int FUNC_15 (struct ubifs_info*,char*) ;

__attribute__((used)) static struct dentry *FUNC_16(struct file_system_type *VAR_11, int VAR_12,
   const char *VAR_13, void *VAR_14)
{
 struct ubi_volume_desc *VAR_15;
 struct ubifs_info *VAR_16;
 struct super_block *VAR_17;
 int VAR_18;

 FUNC_6("name %s, flags %#x", VAR_13, VAR_12);






 VAR_15 = FUNC_10(VAR_13, VAR_7);
 if (FUNC_3(VAR_15)) {
  if (!(VAR_12 & VAR_6))
   FUNC_11("UBIFS error (pid: %d): cannot open \"%s\", error %d",
          VAR_8->pid, VAR_13, (int)FUNC_4(VAR_15));
  return FUNC_0(VAR_15);
 }

 VAR_16 = FUNC_5(VAR_15);
 if (!VAR_16) {
  VAR_18 = -VAR_2;
  goto out_close;
 }

 FUNC_6("opened ubi%d_%d", VAR_16->vi.ubi_num, VAR_16->vi.vol_id);

 VAR_17 = FUNC_12(VAR_11, VAR_10, VAR_9, VAR_12, VAR_16);
 if (FUNC_3(VAR_17)) {
  VAR_18 = FUNC_4(VAR_17);
  FUNC_9(VAR_16);
  goto out_close;
 }

 if (VAR_17->s_root) {
  struct ubifs_info *VAR_19 = VAR_17->s_fs_info;
  FUNC_9(VAR_16);

  FUNC_6("this ubi volume is already mounted");
  if (!!(VAR_12 & VAR_5) != VAR_19->ro_mount) {
   VAR_18 = -VAR_1;
   goto out_deact;
  }
 } else {
  VAR_18 = FUNC_14(VAR_17, VAR_14, VAR_12 & VAR_6 ? 1 : 0);
  if (VAR_18) {
   FUNC_9(VAR_16);
   goto out_deact;
  }

  VAR_17->s_flags |= VAR_3;
  if (FUNC_2(VAR_0))
   FUNC_15(VAR_16, "full atime support is enabled.");
  else
   VAR_17->s_flags |= VAR_4;
 }


 FUNC_13(VAR_15);

 return FUNC_8(VAR_17->s_root);

out_deact:
 FUNC_7(VAR_17);
out_close:
 FUNC_13(VAR_15);
 return FUNC_1(VAR_18);
}
