
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pi433_instance {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct pi433_instance* private_data; } ;


 int FUNC_0 (struct pi433_instance*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct pi433_instance *VAR_2;

 VAR_2 = VAR_1->private_data;
 FUNC_0(VAR_2);
 VAR_1->private_data = ((void*)0);

 return 0;
}
