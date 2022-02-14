
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct file_operations {int mmap; int compat_ioctl; int unlocked_ioctl; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct inode *VAR_2,
       struct file *VAR_3,
       const struct file_operations *VAR_4)
{
 if ((VAR_2->i_mode & 07777) == 0444 &&
     !(VAR_3->f_mode & VAR_0) &&
     !VAR_4->unlocked_ioctl &&
     !VAR_4->compat_ioctl &&
     !VAR_4->mmap)
  return 0;

 return FUNC_0(VAR_1);
}
