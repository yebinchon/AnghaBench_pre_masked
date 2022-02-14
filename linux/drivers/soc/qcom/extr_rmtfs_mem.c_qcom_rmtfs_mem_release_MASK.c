
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_rmtfs_mem {int dev; } ;
struct inode {int dummy; } ;
struct file {struct qcom_rmtfs_mem* private_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct qcom_rmtfs_mem *VAR_2 = VAR_1->private_data;

 FUNC_0(&VAR_2->dev);

 return 0;
}
