
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
struct mtd_file_info {struct mtd_info* mtd; } ;
struct inode {int dummy; } ;
struct file {int f_mode; struct mtd_file_info* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_file_info*) ;
 int FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_1, struct file *VAR_2)
{
 struct mtd_file_info *VAR_3 = VAR_2->private_data;
 struct mtd_info *VAR_4 = VAR_3->mtd;

 FUNC_2("MTD_close\n");


 if ((VAR_2->f_mode & VAR_0))
  FUNC_1(VAR_4);

 FUNC_3(VAR_4);
 VAR_2->private_data = ((void*)0);
 FUNC_0(VAR_3);

 return 0;
}
