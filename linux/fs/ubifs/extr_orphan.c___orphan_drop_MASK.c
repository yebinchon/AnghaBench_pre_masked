
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_orphan {int new_list; scalar_t__ new; int list; int rb; } ;
struct ubifs_info {int tot_orphans; int new_orphans; int orph_tree; } ;


 int FUNC_0 (struct ubifs_orphan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct ubifs_info *VAR_0, struct ubifs_orphan *VAR_1)
{
 FUNC_2(&VAR_1->rb, &VAR_0->orph_tree);
 FUNC_1(&VAR_1->list);
 VAR_0->tot_orphans -= 1;

 if (VAR_1->new) {
  FUNC_1(&VAR_1->new_list);
  VAR_0->new_orphans -= 1;
 }

 FUNC_0(VAR_1);
}
