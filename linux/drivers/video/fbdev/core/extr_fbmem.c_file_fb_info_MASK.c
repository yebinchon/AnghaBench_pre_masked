
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct fb_info* private_data; } ;
struct fb_info {int dummy; } ;


 struct inode* FUNC_0 (struct file*) ;
 int FUNC_1 (struct inode*) ;
 struct fb_info** VAR_0 ;

__attribute__((used)) static struct fb_info *FUNC_2(struct file *VAR_1)
{
 struct inode *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = FUNC_1(VAR_2);
 struct fb_info *VAR_4 = VAR_0[VAR_3];

 if (VAR_4 != VAR_1->private_data)
  VAR_4 = ((void*)0);
 return VAR_4;
}
