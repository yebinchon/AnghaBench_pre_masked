
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct orangefs_sb_info_s {int flags; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct orangefs_sb_info_s* FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_3, struct dentry *VAR_4)
{
 struct orangefs_sb_info_s *VAR_5 = FUNC_0(VAR_4->d_sb);

 if (VAR_4->d_sb->s_flags & VAR_2)
  FUNC_1(VAR_3, ",acl");
 if (VAR_5->flags & VAR_0)
  FUNC_1(VAR_3, ",intr");
 if (VAR_5->flags & VAR_1)
  FUNC_1(VAR_3, ",local_lock");
 return 0;
}
