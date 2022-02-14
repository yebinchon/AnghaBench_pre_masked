
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct exfat_mount_options {scalar_t__ errors; scalar_t__ discard; scalar_t__ casesensitive; scalar_t__ allow_utime; scalar_t__ fs_dmask; scalar_t__ fs_fmask; int fs_gid; int fs_uid; } ;
struct exfat_sb_info {TYPE_2__* nls_io; TYPE_1__* nls_disk; struct exfat_mount_options options; } ;
struct dentry {int d_sb; } ;
struct TYPE_4__ {scalar_t__ charset; } ;
struct TYPE_3__ {scalar_t__ charset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct exfat_sb_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_2, struct dentry *VAR_3)
{
 struct exfat_sb_info *VAR_4 = FUNC_0(VAR_3->d_sb);
 struct exfat_mount_options *VAR_5 = &VAR_4->options;

 if (FUNC_2(VAR_5->fs_uid))
  FUNC_3(VAR_2, ",uid=%u", FUNC_2(VAR_5->fs_uid));
 if (FUNC_1(VAR_5->fs_gid))
  FUNC_3(VAR_2, ",gid=%u", FUNC_1(VAR_5->fs_gid));
 FUNC_3(VAR_2, ",fmask=%04o", VAR_5->fs_fmask);
 FUNC_3(VAR_2, ",dmask=%04o", VAR_5->fs_dmask);
 if (VAR_5->allow_utime)
  FUNC_3(VAR_2, ",allow_utime=%04o", VAR_5->allow_utime);
 if (VAR_4->nls_disk)
  FUNC_3(VAR_2, ",codepage=%s", VAR_4->nls_disk->charset);
 if (VAR_4->nls_io)
  FUNC_3(VAR_2, ",iocharset=%s", VAR_4->nls_io->charset);
 FUNC_3(VAR_2, ",namecase=%u", VAR_5->casesensitive);
 if (VAR_5->errors == VAR_0)
  FUNC_4(VAR_2, ",errors=continue");
 else if (VAR_5->errors == VAR_1)
  FUNC_4(VAR_2, ",errors=panic");
 else
  FUNC_4(VAR_2, ",errors=remount-ro");




 return 0;
}
