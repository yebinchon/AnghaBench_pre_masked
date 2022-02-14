
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; int i_mapping; int i_mode; } ;
struct file {int dummy; } ;
struct coda_file_info {struct file* cfi_container; } ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct coda_file_info* FUNC_3 (struct file*) ;
 int FUNC_4 (struct inode*) ;
 struct inode* FUNC_5 (struct file*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct file*,int) ;

int FUNC_11(struct file *VAR_1, loff_t VAR_2, loff_t VAR_3, int VAR_4)
{
 struct file *VAR_5;
 struct inode *VAR_6 = FUNC_5(VAR_1);
 struct coda_file_info *VAR_7;
 int VAR_8;

 if (!(FUNC_2(VAR_6->i_mode) || FUNC_0(VAR_6->i_mode) ||
       FUNC_1(VAR_6->i_mode)))
  return -VAR_0;

 VAR_8 = FUNC_6(VAR_6->i_mapping, VAR_2, VAR_3);
 if (VAR_8)
  return VAR_8;
 FUNC_7(VAR_6);

 VAR_7 = FUNC_3(VAR_1);
 VAR_5 = VAR_7->cfi_container;

 VAR_8 = FUNC_10(VAR_5, VAR_4);
 if (!VAR_8 && !VAR_4)
  VAR_8 = FUNC_9(VAR_6->i_sb, FUNC_4(VAR_6));
 FUNC_8(VAR_6);

 return VAR_8;
}
