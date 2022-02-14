
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_flags; struct file* private_data; } ;


 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,int) ;
 struct file* FUNC_5 (struct file*,int ) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_4, struct file *VAR_5)
{
 struct file *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(FUNC_2(VAR_5), VAR_5->f_flags);
 if (VAR_7)
  return VAR_7;


 VAR_5->f_flags &= ~(VAR_0 | VAR_1 | VAR_2 | VAR_3);

 VAR_6 = FUNC_5(VAR_5, FUNC_3(VAR_4));
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_5->private_data = VAR_6;

 return 0;
}
