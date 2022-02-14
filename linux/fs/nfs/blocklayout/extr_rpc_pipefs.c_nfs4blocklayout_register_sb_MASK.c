
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct rpc_pipe {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct super_block*,int ) ;
 struct dentry* FUNC_3 (struct dentry*,char*,int *,struct rpc_pipe*) ;

__attribute__((used)) static struct dentry *FUNC_4(struct super_block *VAR_2,
         struct rpc_pipe *VAR_3)
{
 struct dentry *VAR_4, *VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_1);
 if (VAR_4 == ((void*)0))
  return FUNC_0(-VAR_0);
 VAR_5 = FUNC_3(VAR_4, "blocklayout", ((void*)0), VAR_3);
 FUNC_1(VAR_4);
 return VAR_5;
}
