
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct afs_net {int ws_cell; } ;
struct afs_cell {int name; } ;


 struct afs_net* FUNC_0 (struct seq_file*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct afs_cell* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, void *VAR_1)
{
 struct afs_cell *VAR_2;
 struct afs_net *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (FUNC_1(VAR_3->ws_cell)) {
  FUNC_3();
  VAR_2 = FUNC_2(VAR_3->ws_cell);
  if (VAR_2)
   FUNC_5(VAR_0, "%s\n", VAR_2->name);
  FUNC_4();
 }
 return 0;
}
