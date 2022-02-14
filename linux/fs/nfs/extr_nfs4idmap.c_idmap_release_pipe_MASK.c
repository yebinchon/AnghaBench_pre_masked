
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_inode {scalar_t__ private; } ;
struct inode {int dummy; } ;
struct idmap {int dummy; } ;


 int VAR_0 ;
 struct rpc_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct idmap*,int ) ;

__attribute__((used)) static void
FUNC_2(struct inode *VAR_1)
{
 struct rpc_inode *VAR_2 = FUNC_0(VAR_1);
 struct idmap *VAR_3 = (struct idmap *)VAR_2->private;

 FUNC_1(VAR_3, -VAR_0);
}
