
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_cdev; } ;
struct gb_cap {int dummy; } ;
struct file {struct gb_cap* private_data; } ;


 int VAR_0 ;
 struct gb_cap* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 struct gb_cap *VAR_3 = FUNC_0(VAR_1->i_cdev);


 if (VAR_3) {
  VAR_2->private_data = VAR_3;
  return 0;
 }

 return -VAR_0;
}
