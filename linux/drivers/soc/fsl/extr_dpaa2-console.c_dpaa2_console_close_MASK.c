
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct console_data* private_data; } ;
struct console_data {int map_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct console_data*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct console_data *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2->map_addr);
 FUNC_1(VAR_2);
 return 0;
}
