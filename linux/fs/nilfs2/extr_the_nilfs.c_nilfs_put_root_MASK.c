
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_cptree_lock; int ns_cptree; } ;
struct nilfs_root {int ifile; int rb_node; struct the_nilfs* nilfs; int count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nilfs_root*) ;
 int FUNC_2 (struct nilfs_root*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct nilfs_root *VAR_0)
{
 if (FUNC_4(&VAR_0->count)) {
  struct the_nilfs *VAR_1 = VAR_0->nilfs;

  FUNC_2(VAR_0);

  FUNC_5(&VAR_1->ns_cptree_lock);
  FUNC_3(&VAR_0->rb_node, &VAR_1->ns_cptree);
  FUNC_6(&VAR_1->ns_cptree_lock);
  FUNC_0(VAR_0->ifile);

  FUNC_1(VAR_0);
 }
}
