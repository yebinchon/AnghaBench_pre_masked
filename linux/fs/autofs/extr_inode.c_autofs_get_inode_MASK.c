
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {scalar_t__ s_root; } ;
struct inode {int * i_op; int * i_fop; int i_ino; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; int i_mode; } ;
struct TYPE_2__ {int i_gid; int i_uid; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct inode*) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 struct inode* FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct inode*,int) ;

struct inode *FUNC_8(struct super_block *VAR_3, umode_t VAR_4)
{
 struct inode *VAR_5 = FUNC_6(VAR_3);

 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->i_mode = VAR_4;
 if (VAR_3->s_root) {
  VAR_5->i_uid = FUNC_4(VAR_3->s_root)->i_uid;
  VAR_5->i_gid = FUNC_4(VAR_3->s_root)->i_gid;
 }
 VAR_5->i_atime = VAR_5->i_mtime = VAR_5->i_ctime = FUNC_3(VAR_5);
 VAR_5->i_ino = FUNC_5();

 if (FUNC_0(VAR_4)) {
  FUNC_7(VAR_5, 2);
  VAR_5->i_op = &VAR_0;
  VAR_5->i_fop = &VAR_1;
 } else if (FUNC_1(VAR_4)) {
  VAR_5->i_op = &VAR_2;
 } else
  FUNC_2(1);

 return VAR_5;
}
