
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_root {int * rb_node; } ;
struct mtdswap_dev {unsigned int max_erase_count; TYPE_1__* trees; } ;
struct TYPE_2__ {struct rb_root root; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct rb_root*) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct mtdswap_dev *VAR_2)
{
 static unsigned int VAR_3;
 unsigned int VAR_4, VAR_5 = -1, VAR_6, VAR_7;
 struct rb_root *VAR_8;

 VAR_7 = 0;
 for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4++) {
  VAR_8 = &VAR_2->trees[VAR_4].root;
  if (VAR_8->rb_node == ((void*)0))
   continue;

  VAR_6 = VAR_2->max_erase_count - FUNC_0(VAR_8);
  if (VAR_6 > VAR_7) {
   VAR_7 = VAR_6;
   VAR_5 = VAR_4;
  }
 }

 if (VAR_7 > VAR_0 && VAR_3 >= FUNC_1(VAR_7) - 1) {
  VAR_3 = 0;
  return VAR_5;
 }

 VAR_3++;
 return -1;
}
