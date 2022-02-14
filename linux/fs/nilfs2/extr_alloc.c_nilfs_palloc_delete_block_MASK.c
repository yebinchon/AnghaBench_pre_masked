
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_bh_assoc {unsigned long blkoff; int * bh; } ;
struct inode {int dummy; } ;
typedef int spinlock_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, unsigned long VAR_1,
         struct nilfs_bh_assoc *VAR_2,
         spinlock_t *VAR_3)
{
 FUNC_2(VAR_3);
 if (VAR_2->bh && VAR_1 == VAR_2->blkoff) {
  FUNC_0(VAR_2->bh);
  VAR_2->bh = ((void*)0);
 }
 FUNC_3(VAR_3);
 return FUNC_1(VAR_0, VAR_1);
}
