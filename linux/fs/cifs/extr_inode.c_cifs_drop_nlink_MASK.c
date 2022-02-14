
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_nlink; int i_lock; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct inode *VAR_0)
{
 FUNC_1(&VAR_0->i_lock);
 if (VAR_0->i_nlink > 0)
  FUNC_0(VAR_0);
 FUNC_2(&VAR_0->i_lock);
}
