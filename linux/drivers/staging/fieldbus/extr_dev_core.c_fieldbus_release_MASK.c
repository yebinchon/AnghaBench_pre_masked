
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct fb_open_file* private_data; } ;
struct fb_open_file {int dummy; } ;


 int FUNC_0 (struct fb_open_file*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct fb_open_file *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2);
 return 0;
}
