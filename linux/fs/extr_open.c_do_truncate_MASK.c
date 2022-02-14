
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iattr {unsigned int ia_valid; struct file* ia_file; scalar_t__ ia_size; } ;
struct file {int dummy; } ;
struct dentry {int d_inode; } ;
typedef scalar_t__ loff_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*,struct iattr*,int *) ;

int FUNC_4(struct dentry *VAR_4, loff_t VAR_5, unsigned int VAR_6,
 struct file *VAR_7)
{
 int VAR_8;
 struct iattr VAR_9;


 if (VAR_5 < 0)
  return -VAR_3;

 VAR_9.ia_size = VAR_5;
 VAR_9.ia_valid = VAR_2 | VAR_6;
 if (VAR_7) {
  VAR_9.ia_file = VAR_7;
  VAR_9.ia_valid |= VAR_0;
 }


 VAR_8 = FUNC_0(VAR_4);
 if (VAR_8 < 0)
  return VAR_8;
 if (VAR_8)
  VAR_9.ia_valid |= VAR_8 | VAR_1;

 FUNC_1(VAR_4->d_inode);

 VAR_8 = FUNC_3(VAR_4, &VAR_9, ((void*)0));
 FUNC_2(VAR_4->d_inode);
 return VAR_8;
}
