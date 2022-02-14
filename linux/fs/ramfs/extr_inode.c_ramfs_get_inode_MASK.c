
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct super_block {int dummy; } ;
struct inode {int * i_op; int * i_fop; int i_ctime; int i_mtime; int i_atime; TYPE_1__* i_mapping; int i_ino; } ;
typedef int dev_t ;
struct TYPE_3__ {int * a_ops; } ;


 int VAR_0 ;


 int VAR_1 ;

 int FUNC_0 (struct inode*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int,int ) ;
 int FUNC_4 (struct inode*,struct inode const*,int) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 struct inode* FUNC_8 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

struct inode *FUNC_9(struct super_block *VAR_8,
    const struct inode *VAR_9, umode_t VAR_10, dev_t VAR_11)
{
 struct inode * VAR_12 = FUNC_8(VAR_8);

 if (VAR_12) {
  VAR_12->i_ino = FUNC_1();
  FUNC_4(VAR_12, VAR_9, VAR_10);
  VAR_12->i_mapping->a_ops = &VAR_3;
  FUNC_6(VAR_12->i_mapping, VAR_0);
  FUNC_7(VAR_12->i_mapping);
  VAR_12->i_atime = VAR_12->i_mtime = VAR_12->i_ctime = FUNC_0(VAR_12);
  switch (VAR_10 & VAR_1) {
  default:
   FUNC_3(VAR_12, VAR_10, VAR_11);
   break;
  case 128:
   VAR_12->i_op = &VAR_5;
   VAR_12->i_fop = &VAR_6;
   break;
  case 130:
   VAR_12->i_op = &VAR_4;
   VAR_12->i_fop = &VAR_7;


   FUNC_2(VAR_12);
   break;
  case 129:
   VAR_12->i_op = &VAR_2;
   FUNC_5(VAR_12);
   break;
  }
 }
 return VAR_12;
}
