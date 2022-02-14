
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct isofs_sb_info {int s_check; int s_mapping; int s_session; int s_sbsector; int s_dmode; int s_fmode; TYPE_1__* s_nls_iocharset; int s_gid; scalar_t__ s_gid_set; int s_uid; scalar_t__ s_uid_set; scalar_t__ s_utf8; scalar_t__ s_showassoc; scalar_t__ s_overriderockperm; scalar_t__ s_nocompress; scalar_t__ s_hide; scalar_t__ s_cruft; int s_joliet_level; int s_rock; } ;
struct dentry {TYPE_2__* d_sb; } ;
struct TYPE_4__ {int s_blocksize; } ;
struct TYPE_3__ {int charset; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct isofs_sb_info* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct seq_file*,char*,int) ;
 int FUNC_4 (struct seq_file*,char*) ;
 scalar_t__ FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_3, struct dentry *VAR_4)
{
 struct isofs_sb_info *VAR_5 = FUNC_0(VAR_4->d_sb);

 if (!VAR_5->s_rock) FUNC_4(VAR_3, ",norock");
 else if (!VAR_5->s_joliet_level) FUNC_4(VAR_3, ",nojoliet");
 if (VAR_5->s_cruft) FUNC_4(VAR_3, ",cruft");
 if (VAR_5->s_hide) FUNC_4(VAR_3, ",hide");
 if (VAR_5->s_nocompress) FUNC_4(VAR_3, ",nocompress");
 if (VAR_5->s_overriderockperm) FUNC_4(VAR_3, ",overriderockperm");
 if (VAR_5->s_showassoc) FUNC_4(VAR_3, ",showassoc");
 if (VAR_5->s_utf8) FUNC_4(VAR_3, ",utf8");

 if (VAR_5->s_check) FUNC_3(VAR_3, ",check=%c", VAR_5->s_check);
 if (VAR_5->s_mapping) FUNC_3(VAR_3, ",map=%c", VAR_5->s_mapping);
 if (VAR_5->s_session != 255) FUNC_3(VAR_3, ",session=%u", VAR_5->s_session - 1);
 if (VAR_5->s_sbsector != -1) FUNC_3(VAR_3, ",sbsector=%u", VAR_5->s_sbsector);

 if (VAR_4->d_sb->s_blocksize != 1024)
  FUNC_3(VAR_3, ",blocksize=%lu", VAR_4->d_sb->s_blocksize);

 if (VAR_5->s_uid_set)
  FUNC_3(VAR_3, ",uid=%u",
      FUNC_2(&VAR_2, VAR_5->s_uid));
 if (VAR_5->s_gid_set)
  FUNC_3(VAR_3, ",gid=%u",
      FUNC_1(&VAR_2, VAR_5->s_gid));

 if (VAR_5->s_dmode != VAR_1)
  FUNC_3(VAR_3, ",dmode=%o", VAR_5->s_dmode);
 if (VAR_5->s_fmode != VAR_1)
  FUNC_3(VAR_3, ",fmode=%o", VAR_5->s_fmode);






 return 0;
}
