
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; int i_writecount; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3, struct file *VAR_4)
{




 if (!(VAR_4->f_mode & VAR_2) ||
   FUNC_0(&VAR_3->i_writecount) != 1)
  return 0;


 if (FUNC_3(VAR_3))
  FUNC_2(VAR_3);
 if (FUNC_4(VAR_3)) {
  FUNC_6(VAR_3, VAR_0);
  FUNC_5(VAR_3->i_mapping);
  FUNC_1(VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_1);
  FUNC_7(VAR_3);
 }
 return 0;
}
