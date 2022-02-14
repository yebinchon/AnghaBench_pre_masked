
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct fb_info* private_data; } ;
struct fb_info {int deferred_work; int fbdefio; } ;
typedef int loff_t ;


 int FUNC_0 (int *) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,int ,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *,int ) ;

int FUNC_6(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2, int VAR_3)
{
 struct fb_info *VAR_4 = VAR_0->private_data;
 struct inode *VAR_5 = FUNC_1(VAR_0);
 int VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;


 if (!VAR_4->fbdefio)
  return 0;

 FUNC_3(VAR_5);

 FUNC_0(&VAR_4->deferred_work);


 FUNC_5(&VAR_4->deferred_work, 0);
 FUNC_4(VAR_5);

 return 0;
}
