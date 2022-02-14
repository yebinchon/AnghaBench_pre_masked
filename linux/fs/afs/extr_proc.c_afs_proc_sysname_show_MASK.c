
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct afs_sysnames {unsigned int nr; int * subs; } ;
struct afs_net {struct afs_sysnames* sysnames; } ;


 struct afs_net* FUNC_0 (struct seq_file*) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct afs_net *VAR_2 = FUNC_0(VAR_0);
 struct afs_sysnames *VAR_3 = VAR_2->sysnames;
 unsigned int VAR_4 = (unsigned long)VAR_1 - 1;

 if (VAR_4 < VAR_3->nr)
  FUNC_1(VAR_0, "%s\n", VAR_3->subs[VAR_4]);
 return 0;
}
