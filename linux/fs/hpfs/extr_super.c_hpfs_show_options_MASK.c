
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct hpfs_sb_info {int sb_mode; int sb_chk; int sb_err; int sb_chkdsk; int sb_eas; int sb_timeshift; scalar_t__ sb_lowercase; int sb_gid; int sb_uid; } ;
struct dentry {int d_sb; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 struct hpfs_sb_info* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, struct dentry *VAR_2)
{
 struct hpfs_sb_info *VAR_3 = FUNC_2(VAR_2->d_sb);

 FUNC_3(VAR_1, ",uid=%u", FUNC_1(&VAR_0, VAR_3->sb_uid));
 FUNC_3(VAR_1, ",gid=%u", FUNC_0(&VAR_0, VAR_3->sb_gid));
 FUNC_3(VAR_1, ",umask=%03o", (~VAR_3->sb_mode & 0777));
 if (VAR_3->sb_lowercase)
  FUNC_3(VAR_1, ",case=lower");
 if (!VAR_3->sb_chk)
  FUNC_3(VAR_1, ",check=none");
 if (VAR_3->sb_chk == 2)
  FUNC_3(VAR_1, ",check=strict");
 if (!VAR_3->sb_err)
  FUNC_3(VAR_1, ",errors=continue");
 if (VAR_3->sb_err == 2)
  FUNC_3(VAR_1, ",errors=panic");
 if (!VAR_3->sb_chkdsk)
  FUNC_3(VAR_1, ",chkdsk=no");
 if (VAR_3->sb_chkdsk == 2)
  FUNC_3(VAR_1, ",chkdsk=always");
 if (!VAR_3->sb_eas)
  FUNC_3(VAR_1, ",eas=no");
 if (VAR_3->sb_eas == 1)
  FUNC_3(VAR_1, ",eas=ro");
 if (VAR_3->sb_timeshift)
  FUNC_3(VAR_1, ",timeshift=%d", VAR_3->sb_timeshift);
 return 0;
}
