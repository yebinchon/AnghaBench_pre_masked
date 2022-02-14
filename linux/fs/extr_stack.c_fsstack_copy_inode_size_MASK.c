
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; int i_blocks; } ;
typedef int loff_t ;
typedef int i_size ;
typedef int i_blocks ;
typedef int blkcnt_t ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct inode *VAR_0, struct inode *VAR_1)
{
 loff_t VAR_2;
 blkcnt_t VAR_3;







 VAR_2 = FUNC_0(VAR_1);
 if (sizeof(VAR_3) > sizeof(long))
  FUNC_2(&VAR_1->i_lock);
 VAR_3 = VAR_1->i_blocks;
 if (sizeof(VAR_3) > sizeof(long))
  FUNC_3(&VAR_1->i_lock);
 if (sizeof(VAR_2) > sizeof(long) || sizeof(VAR_3) > sizeof(long))
  FUNC_2(&VAR_0->i_lock);
 FUNC_1(VAR_0, VAR_2);
 VAR_0->i_blocks = VAR_3;
 if (sizeof(VAR_2) > sizeof(long) || sizeof(VAR_3) > sizeof(long))
  FUNC_3(&VAR_0->i_lock);
}
