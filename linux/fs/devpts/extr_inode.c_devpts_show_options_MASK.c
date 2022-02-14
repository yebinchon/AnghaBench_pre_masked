
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pts_mount_opts {scalar_t__ mode; scalar_t__ ptmxmode; scalar_t__ max; int gid; scalar_t__ setgid; int uid; scalar_t__ setuid; } ;
struct pts_fs_info {struct pts_mount_opts mount_opts; } ;
struct dentry {int d_sb; } ;


 struct pts_fs_info* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct seq_file*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_2, struct dentry *VAR_3)
{
 struct pts_fs_info *VAR_4 = FUNC_0(VAR_3->d_sb);
 struct pts_mount_opts *VAR_5 = &VAR_4->mount_opts;

 if (VAR_5->setuid)
  FUNC_3(VAR_2, ",uid=%u",
      FUNC_2(&VAR_1, VAR_5->uid));
 if (VAR_5->setgid)
  FUNC_3(VAR_2, ",gid=%u",
      FUNC_1(&VAR_1, VAR_5->gid));
 FUNC_3(VAR_2, ",mode=%03o", VAR_5->mode);
 FUNC_3(VAR_2, ",ptmxmode=%03o", VAR_5->ptmxmode);
 if (VAR_5->max < VAR_0)
  FUNC_3(VAR_2, ",max=%d", VAR_5->max);

 return 0;
}
