
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_net_private {struct net* net; } ;
struct net {int dummy; } ;
struct inode {int dummy; } ;
struct file {int f_mode; } ;
struct TYPE_2__ {unsigned int state_size; int seq_ops; int write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 struct seq_net_private* FUNC_2 (struct file*,int ,unsigned int) ;
 struct net* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct net*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, struct file *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4)->state_size;
 struct seq_net_private *VAR_7;
 struct net *VAR_8;

 FUNC_1(VAR_6 < sizeof(*VAR_7));

 if (VAR_5->f_mode & VAR_3 && !FUNC_0(VAR_4)->write)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_4);
 if (!VAR_8)
  return -VAR_2;

 VAR_7 = FUNC_2(VAR_5, FUNC_0(VAR_4)->seq_ops, VAR_6);
 if (!VAR_7) {
  FUNC_4(VAR_8);
  return -VAR_1;
 }



 return 0;
}
