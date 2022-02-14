
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct seq_file*,char*) ;

__attribute__((used)) static void
FUNC_1(struct seq_file *VAR_4, struct cifs_sb_info *VAR_5)
{
 FUNC_0(VAR_4, ",cache=");

 if (VAR_5->mnt_cifs_flags & VAR_3)
  FUNC_0(VAR_4, "strict");
 else if (VAR_5->mnt_cifs_flags & VAR_0)
  FUNC_0(VAR_4, "none");
 else if (VAR_5->mnt_cifs_flags & VAR_2)
  FUNC_0(VAR_4, "singleclient");
 else if (VAR_5->mnt_cifs_flags & VAR_1)
  FUNC_0(VAR_4, "ro");
 else
  FUNC_0(VAR_4, "loose");
}
