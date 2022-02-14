
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct ddb* private_data; } ;
struct ddb {int ddb_dev_users; } ;



__attribute__((used)) static int FUNC_0(struct inode *VAR_0, struct file *VAR_1)
{
 struct ddb *VAR_2 = VAR_1->private_data;

 VAR_2->ddb_dev_users--;
 return 0;
}
