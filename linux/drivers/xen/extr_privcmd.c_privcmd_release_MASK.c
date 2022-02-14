
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct privcmd_data {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct privcmd_data* private_data; } ;


 int FUNC_0 (struct privcmd_data*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct privcmd_data *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2);
 return 0;
}
