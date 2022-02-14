
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int dummy; } ;
struct inode {int * i_op; TYPE_1__* i_mapping; int i_ino; } ;
struct configfs_dirent {int s_iattr; } ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct inode* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*,int ) ;

struct inode *FUNC_4(umode_t VAR_2, struct configfs_dirent *VAR_3,
     struct super_block *VAR_4)
{
 struct inode * VAR_5 = FUNC_1(VAR_4);
 if (VAR_5) {
  VAR_5->i_ino = FUNC_0();
  VAR_5->i_mapping->a_ops = &VAR_0;
  VAR_5->i_op = &VAR_1;

  if (VAR_3->s_iattr) {




   FUNC_3(VAR_5, VAR_3->s_iattr);
  } else
   FUNC_2(VAR_5, VAR_2);
 }
 return VAR_5;
}
