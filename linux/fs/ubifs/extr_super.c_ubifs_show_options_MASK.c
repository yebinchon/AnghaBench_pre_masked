
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int vol_id; int ubi_num; } ;
struct TYPE_5__ {int unmount_mode; int bulk_read; int chk_data_crc; int compr_type; scalar_t__ override_compr; } ;
struct ubifs_info {TYPE_3__ vi; TYPE_2__ mount_opts; } ;
struct seq_file {int dummy; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_4__ {struct ubifs_info* s_fs_info; } ;


 int FUNC_0 (struct seq_file*,char*,int ,...) ;
 int FUNC_1 (struct seq_file*,char*) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (struct ubifs_info*,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, struct dentry *VAR_1)
{
 struct ubifs_info *VAR_2 = VAR_1->d_sb->s_fs_info;

 if (VAR_2->mount_opts.unmount_mode == 2)
  FUNC_1(VAR_0, ",fast_unmount");
 else if (VAR_2->mount_opts.unmount_mode == 1)
  FUNC_1(VAR_0, ",norm_unmount");

 if (VAR_2->mount_opts.bulk_read == 2)
  FUNC_1(VAR_0, ",bulk_read");
 else if (VAR_2->mount_opts.bulk_read == 1)
  FUNC_1(VAR_0, ",no_bulk_read");

 if (VAR_2->mount_opts.chk_data_crc == 2)
  FUNC_1(VAR_0, ",chk_data_crc");
 else if (VAR_2->mount_opts.chk_data_crc == 1)
  FUNC_1(VAR_0, ",no_chk_data_crc");

 if (VAR_2->mount_opts.override_compr) {
  FUNC_0(VAR_0, ",compr=%s",
      FUNC_3(VAR_2, VAR_2->mount_opts.compr_type));
 }

 FUNC_0(VAR_0, ",assert=%s", FUNC_2(VAR_2));
 FUNC_0(VAR_0, ",ubi=%d,vol=%d", VAR_2->vi.ubi_num, VAR_2->vi.vol_id);

 return 0;
}
