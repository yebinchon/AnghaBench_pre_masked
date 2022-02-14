
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int single_show; } ;
struct net {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 struct net* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (struct file*,int ,struct net*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct file *VAR_2)
{
 struct proc_dir_entry *VAR_3 = FUNC_0(VAR_1);
 struct net *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_2, VAR_3->single_show, VAR_4);
 if (VAR_5)
  FUNC_2(VAR_4);
 return VAR_5;
}
