
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; int i_uid; } ;
struct file_lock {TYPE_1__* fl_lmops; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int lm_break; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct file*,long,struct file_lock**,void**) ;
 int FUNC_5 (struct file*,void*) ;
 struct inode* FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*,long) ;
 int FUNC_8 (int ,int ) ;

int FUNC_9(struct file *VAR_4, long VAR_5, struct file_lock **VAR_6,
   void **VAR_7)
{
 struct inode *VAR_8 = FUNC_6(VAR_4);
 int VAR_9;

 if ((!FUNC_8(FUNC_3(), VAR_8->i_uid)) && !FUNC_2(VAR_0))
  return -VAR_1;
 if (!FUNC_0(VAR_8->i_mode))
  return -VAR_2;
 VAR_9 = FUNC_7(VAR_4, VAR_5);
 if (VAR_9)
  return VAR_9;

 switch (VAR_5) {
 case 129:
  return FUNC_5(VAR_4, *VAR_7);
 case 130:
 case 128:
  if (!(*VAR_6)->fl_lmops->lm_break) {
   FUNC_1(1);
   return -VAR_3;
  }

  return FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);
 default:
  return -VAR_2;
 }
}
