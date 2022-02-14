
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; } ;
struct address_space {scalar_t__ nrpages; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct inode *VAR_1, struct address_space *VAR_2)
{
 if (VAR_2->nrpages != 0) {
  FUNC_1(&VAR_1->i_lock);
  FUNC_0(VAR_1, VAR_0);
  FUNC_2(&VAR_1->i_lock);
 }
}
