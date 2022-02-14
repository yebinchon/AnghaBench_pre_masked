
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
struct block_device {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct block_device* FUNC_0 (struct inode*) ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct block_device*,int ,int *) ;
 int FUNC_3 (struct file*,int ,int ) ;

int FUNC_4(struct file *VAR_2, loff_t VAR_3, loff_t VAR_4, int VAR_5)
{
 struct inode *VAR_6 = FUNC_1(VAR_2);
 struct block_device *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_8)
  return VAR_8;






 VAR_8 = FUNC_2(VAR_7, VAR_1, ((void*)0));
 if (VAR_8 == -VAR_0)
  VAR_8 = 0;

 return VAR_8;
}
