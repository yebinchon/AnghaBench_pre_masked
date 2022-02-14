
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_umount; } ;
struct inode {struct super_block* i_sb; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (unsigned int,int) ;
 TYPE_1__* FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (struct super_block*,int) ;
 scalar_t__ FUNC_6 (struct super_block*,int) ;
 scalar_t__ FUNC_7 (struct super_block*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct inode*,int,int,unsigned int) ;

int FUNC_12(struct inode *VAR_5, int VAR_6, int VAR_7,
   unsigned int VAR_8)
{
 struct super_block *VAR_9 = VAR_5->i_sb;


 FUNC_0(VAR_8 & VAR_1);

 if (FUNC_1(FUNC_2(&VAR_9->s_umount)))
  FUNC_10(&VAR_9->s_umount);

 if (!VAR_8)
  return 0;

 if (FUNC_6(VAR_9, VAR_6)) {
  if (VAR_8 & VAR_2 &&
      FUNC_7(VAR_9, VAR_6))
   return -VAR_3;
  if (VAR_8 & VAR_0 &&
      FUNC_5(VAR_9, VAR_6))
   return -VAR_3;
  FUNC_8(&VAR_4);
  FUNC_4(VAR_9)->flags |= FUNC_3(VAR_8, VAR_6);
  FUNC_9(&VAR_4);
  return 0;
 }

 return FUNC_11(VAR_5, VAR_6, VAR_7, VAR_8);
}
