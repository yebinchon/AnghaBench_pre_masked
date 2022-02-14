
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_writecount; } ;
struct file {int f_mode; } ;
struct TYPE_2__ {int i_data_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, struct file *VAR_2)
{
 if (VAR_2->f_mode & VAR_0 &&
     FUNC_1(&VAR_1->i_writecount) == 1) {




  FUNC_3(VAR_1);
  FUNC_2(&FUNC_0(VAR_1)->i_data_sem);
  FUNC_5(VAR_1);
  FUNC_6(VAR_1);
  FUNC_7(&FUNC_0(VAR_1)->i_data_sem);
  FUNC_4(VAR_1);
 }
 return 0;
}
