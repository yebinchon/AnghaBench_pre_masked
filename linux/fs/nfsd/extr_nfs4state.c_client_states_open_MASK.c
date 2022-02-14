
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct nfs4_client* private; } ;
struct nfs4_client {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int VAR_0 ;
 struct nfs4_client* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 struct seq_file *VAR_4;
 struct nfs4_client *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, &VAR_1);
 if (VAR_6)
  return VAR_6;
 VAR_4 = VAR_3->private_data;
 VAR_4->private = VAR_5;
 return 0;
}
