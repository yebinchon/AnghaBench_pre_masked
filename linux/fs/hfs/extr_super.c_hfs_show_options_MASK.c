
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct hfs_sb_info {scalar_t__ s_creator; scalar_t__ s_type; int s_file_umask; int s_dir_umask; scalar_t__ s_quiet; TYPE_2__* nls_io; TYPE_1__* nls_disk; int session; int part; int s_gid; int s_uid; } ;
struct dentry {int d_sb; } ;
struct TYPE_4__ {int charset; } ;
struct TYPE_3__ {int charset; } ;


 struct hfs_sb_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct seq_file*,char*,...) ;
 int FUNC_5 (struct seq_file*,char*,char*,int) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_1, struct dentry *VAR_2)
{
 struct hfs_sb_info *VAR_3 = FUNC_0(VAR_2->d_sb);

 if (VAR_3->s_creator != FUNC_1(0x3f3f3f3f))
  FUNC_5(VAR_1, "creator", (char *)&VAR_3->s_creator, 4);
 if (VAR_3->s_type != FUNC_1(0x3f3f3f3f))
  FUNC_5(VAR_1, "type", (char *)&VAR_3->s_type, 4);
 FUNC_4(VAR_1, ",uid=%u,gid=%u",
   FUNC_3(&VAR_0, VAR_3->s_uid),
   FUNC_2(&VAR_0, VAR_3->s_gid));
 if (VAR_3->s_file_umask != 0133)
  FUNC_4(VAR_1, ",file_umask=%o", VAR_3->s_file_umask);
 if (VAR_3->s_dir_umask != 0022)
  FUNC_4(VAR_1, ",dir_umask=%o", VAR_3->s_dir_umask);
 if (VAR_3->part >= 0)
  FUNC_4(VAR_1, ",part=%u", VAR_3->part);
 if (VAR_3->session >= 0)
  FUNC_4(VAR_1, ",session=%u", VAR_3->session);
 if (VAR_3->nls_disk)
  FUNC_4(VAR_1, ",codepage=%s", VAR_3->nls_disk->charset);
 if (VAR_3->nls_io)
  FUNC_4(VAR_1, ",iocharset=%s", VAR_3->nls_io->charset);
 if (VAR_3->s_quiet)
  FUNC_4(VAR_1, ",quiet");
 return 0;
}
