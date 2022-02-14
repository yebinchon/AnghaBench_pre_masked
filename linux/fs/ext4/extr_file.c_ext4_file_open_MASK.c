
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct TYPE_2__ {int mnt; } ;
struct file {int f_mode; TYPE_1__ f_path; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,struct file*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct inode*,struct file*) ;
 int FUNC_6 (struct inode*,struct file*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct inode * VAR_3, struct file * VAR_4)
{
 int VAR_5;

 if (FUNC_7(FUNC_2(FUNC_0(VAR_3->i_sb))))
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_3->i_sb, VAR_4->f_path.mnt);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_6(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;





 if (VAR_4->f_mode & VAR_2) {
  VAR_5 = FUNC_3(VAR_3);
  if (VAR_5 < 0)
   return VAR_5;
 }

 VAR_4->f_mode |= VAR_1;
 return FUNC_1(VAR_3, VAR_4);
}
