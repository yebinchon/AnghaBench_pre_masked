
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct rpc_pipe {int dummy; } ;
struct net {int dummy; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (struct super_block*,struct rpc_pipe*) ;
 struct super_block* FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;

__attribute__((used)) static struct dentry *FUNC_3(struct net *VAR_0,
         struct rpc_pipe *VAR_1)
{
 struct super_block *VAR_2;
 struct dentry *VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2)
  return ((void*)0);
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 FUNC_2(VAR_0);
 return VAR_3;
}
