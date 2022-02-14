
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_flags; struct file const* private_data; } ;
struct fd {struct file const* file; scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file const*) ;
 struct inode* FUNC_1 (struct file const*) ;
 int FUNC_2 (struct file const*,int) ;
 struct inode* FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct inode*) ;
 struct file const* FUNC_5 (struct file const*,struct inode*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(const struct file *VAR_2, struct fd *VAR_3,
          bool VAR_4)
{
 struct inode *VAR_5 = FUNC_1(VAR_2);
 struct inode *VAR_6;

 VAR_3->flags = 0;
 VAR_3->file = VAR_2->private_data;

 if (VAR_4)
  VAR_6 = FUNC_3(VAR_5);
 else
  VAR_6 = FUNC_4(VAR_5);


 if (FUNC_6(FUNC_1(VAR_3->file) != VAR_6)) {
  VAR_3->flags = VAR_0;
  VAR_3->file = FUNC_5(VAR_2, VAR_6);

  return FUNC_0(VAR_3->file);
 }


 if (FUNC_6((VAR_2->f_flags ^ VAR_3->file->f_flags) & ~VAR_1))
  return FUNC_2(VAR_3->file, VAR_2->f_flags);

 return 0;
}
