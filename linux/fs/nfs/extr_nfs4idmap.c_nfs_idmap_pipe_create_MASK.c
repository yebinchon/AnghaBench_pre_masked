
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_pipe_dir_object {struct idmap* pdo_data; } ;
struct rpc_pipe {struct dentry* dentry; } ;
struct idmap {struct rpc_pipe* idmap_pipe; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*,char*,struct idmap*,struct rpc_pipe*) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_0,
  struct rpc_pipe_dir_object *VAR_1)
{
 struct idmap *VAR_2 = VAR_1->pdo_data;
 struct rpc_pipe *VAR_3 = VAR_2->idmap_pipe;
 struct dentry *VAR_4;

 VAR_4 = FUNC_2(VAR_0, "idmap", VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 VAR_3->dentry = VAR_4;
 return 0;
}
