
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct dentry {int d_sb; } ;
struct befs_mount_options {scalar_t__ debug; scalar_t__ iocharset; int gid; int uid; } ;
struct befs_sb_info {struct befs_mount_options mount_opts; } ;


 struct befs_sb_info* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_5 (struct seq_file*,char*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_3, struct dentry *VAR_4)
{
 struct befs_sb_info *VAR_5 = FUNC_0(VAR_4->d_sb);
 struct befs_mount_options *VAR_6 = &VAR_5->mount_opts;

 if (!FUNC_6(VAR_6->uid, VAR_1))
  FUNC_4(VAR_3, ",uid=%u",
      FUNC_2(&VAR_2, VAR_6->uid));
 if (!FUNC_3(VAR_6->gid, VAR_0))
  FUNC_4(VAR_3, ",gid=%u",
      FUNC_1(&VAR_2, VAR_6->gid));
 if (VAR_6->iocharset)
  FUNC_4(VAR_3, ",charset=%s", VAR_6->iocharset);
 if (VAR_6->debug)
  FUNC_5(VAR_3, ",debug");
 return 0;
}
