
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_context {int * ops; struct afs_fs_context* fs_private; int net_ns; } ;
struct afs_fs_context {struct afs_cell* cell; int net; int type; } ;
struct afs_cell {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct afs_cell*) ;
 int VAR_3 ;
 struct afs_cell* FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;
 struct afs_fs_context* FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct fs_context *VAR_4)
{
 struct afs_fs_context *VAR_5;
 struct afs_cell *VAR_6;

 VAR_5 = FUNC_3(sizeof(struct afs_fs_context), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->type = VAR_0;
 VAR_5->net = FUNC_2(VAR_4->net_ns);


 FUNC_4();
 VAR_6 = FUNC_1(VAR_5->net, ((void*)0), 0);
 FUNC_5();
 if (FUNC_0(VAR_6))
  VAR_6 = ((void*)0);
 VAR_5->cell = VAR_6;

 VAR_4->fs_private = VAR_5;
 VAR_4->ops = &VAR_3;
 return 0;
}
