
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swap_eb {struct rb_root* root; } ;
struct rb_root {int dummy; } ;
struct mtdswap_dev {TYPE_1__* trees; } ;
struct TYPE_2__ {int count; struct rb_root root; } ;


 int FUNC_0 (struct rb_root*,struct swap_eb*) ;
 int FUNC_1 (struct mtdswap_dev*,struct swap_eb*) ;

__attribute__((used)) static void FUNC_2(struct mtdswap_dev *VAR_0, struct swap_eb *VAR_1, int VAR_2)
{
 struct rb_root *VAR_3;

 if (VAR_1->root == &VAR_0->trees[VAR_2].root)
  return;

 FUNC_1(VAR_0, VAR_1);
 VAR_3 = &VAR_0->trees[VAR_2].root;
 FUNC_0(VAR_3, VAR_1);
 VAR_1->root = VAR_3;
 VAR_0->trees[VAR_2].count++;
}
