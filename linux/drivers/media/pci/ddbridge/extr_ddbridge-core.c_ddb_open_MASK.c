
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct ddb* private_data; } ;
struct ddb {scalar_t__ ddb_dev_users; } ;


 int VAR_0 ;
 struct ddb** VAR_1 ;
 size_t FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_2, struct file *VAR_3)
{
 struct ddb *VAR_4 = VAR_1[FUNC_0(VAR_2)];

 if (VAR_4->ddb_dev_users)
  return -VAR_0;
 VAR_4->ddb_dev_users++;
 VAR_3->private_data = VAR_4;
 return 0;
}
