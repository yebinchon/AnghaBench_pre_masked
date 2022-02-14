
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_message {int * rpc_proc; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct rpc_message*,struct file*,int ,int ) ;
 int * VAR_3 ;
 int FUNC_5 (struct inode*,int ) ;

int FUNC_6(struct file *VAR_4, loff_t VAR_5, loff_t VAR_6)
{
 struct rpc_message VAR_7 = {
  .rpc_proc = &VAR_3[VAR_1],
 };
 struct inode *VAR_8 = FUNC_1(VAR_4);
 int VAR_9;

 if (!FUNC_5(VAR_8, VAR_2))
  return -VAR_0;

 FUNC_2(VAR_8);

 VAR_9 = FUNC_4(&VAR_7, VAR_4, VAR_5, VAR_6);
 if (VAR_9 == -VAR_0)
  FUNC_0(VAR_8)->caps &= ~VAR_2;

 FUNC_3(VAR_8);
 return VAR_9;
}
