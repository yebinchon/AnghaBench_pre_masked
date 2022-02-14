
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs4_ff_layout_mirror {TYPE_1__* layout; int mirrors; } ;
struct inode {int i_lock; } ;
struct TYPE_2__ {struct inode* plh_inode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct nfs4_ff_layout_mirror *VAR_0)
{
 struct inode *VAR_1;
 if (VAR_0->layout == ((void*)0))
  return;
 VAR_1 = VAR_0->layout->plh_inode;
 FUNC_1(&VAR_1->i_lock);
 FUNC_0(&VAR_0->mirrors);
 FUNC_2(&VAR_1->i_lock);
 VAR_0->layout = ((void*)0);
}
