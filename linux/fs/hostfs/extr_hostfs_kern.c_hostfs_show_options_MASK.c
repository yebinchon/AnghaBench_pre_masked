
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {char* s_fs_info; } ;


 scalar_t__ VAR_0 ;
 char const* VAR_1 ;
 int FUNC_0 (struct seq_file*,char*) ;
 int FUNC_1 (struct seq_file*,char const*,int *) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, struct dentry *VAR_3)
{
 const char *VAR_4 = VAR_3->d_sb->s_fs_info;
 size_t VAR_5 = FUNC_2(VAR_1) + 1;

 if (FUNC_2(VAR_4) > VAR_5)
  FUNC_1(VAR_2, VAR_4 + VAR_5, ((void*)0));

 if (VAR_0)
  FUNC_0(VAR_2, ",append");

 return 0;
}
