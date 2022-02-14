
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_orphan {int del; scalar_t__ inum; int list; int rb; int new; struct ubifs_orphan* dnext; } ;
struct ubifs_info {int tot_orphans; int orphan_lock; struct ubifs_orphan* orph_dnext; int orph_tree; } ;


 int FUNC_0 (char*,unsigned long) ;
 int FUNC_1 (struct ubifs_orphan*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ubifs_info*,int) ;

__attribute__((used)) static void FUNC_7(struct ubifs_info *VAR_0)
{
 struct ubifs_orphan *VAR_1, *VAR_2;

 FUNC_4(&VAR_0->orphan_lock);
 VAR_2 = VAR_0->orph_dnext;
 while (VAR_2) {
  VAR_1 = VAR_2;
  VAR_2 = VAR_1->dnext;
  FUNC_6(VAR_0, !VAR_1->new);
  FUNC_6(VAR_0, VAR_1->del);
  FUNC_3(&VAR_1->rb, &VAR_0->orph_tree);
  FUNC_2(&VAR_1->list);
  VAR_0->tot_orphans -= 1;
  FUNC_0("deleting orphan ino %lu", (unsigned long)VAR_1->inum);
  FUNC_1(VAR_1);
 }
 VAR_0->orph_dnext = ((void*)0);
 FUNC_5(&VAR_0->orphan_lock);
}
