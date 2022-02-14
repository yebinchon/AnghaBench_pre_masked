
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct jfs_sb_info {int umask; int flag; TYPE_1__* nls_tab; int minblks_trim; int gid; int uid; } ;
struct dentry {int d_sb; } ;
struct TYPE_2__ {int charset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct jfs_sb_info* FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (struct seq_file*,char*,...) ;
 int FUNC_5 (struct seq_file*,char*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_7, struct dentry *VAR_8)
{
 struct jfs_sb_info *VAR_9 = FUNC_0(VAR_8->d_sb);

 if (FUNC_6(VAR_9->uid))
  FUNC_4(VAR_7, ",uid=%d", FUNC_2(&VAR_6, VAR_9->uid));
 if (FUNC_3(VAR_9->gid))
  FUNC_4(VAR_7, ",gid=%d", FUNC_1(&VAR_6, VAR_9->gid));
 if (VAR_9->umask != -1)
  FUNC_4(VAR_7, ",umask=%03o", VAR_9->umask);
 if (VAR_9->flag & VAR_4)
  FUNC_5(VAR_7, ",nointegrity");
 if (VAR_9->flag & VAR_0)
  FUNC_4(VAR_7, ",discard=%u", VAR_9->minblks_trim);
 if (VAR_9->nls_tab)
  FUNC_4(VAR_7, ",iocharset=%s", VAR_9->nls_tab->charset);
 if (VAR_9->flag & VAR_1)
  FUNC_4(VAR_7, ",errors=continue");
 if (VAR_9->flag & VAR_2)
  FUNC_4(VAR_7, ",errors=panic");
 return 0;
}
