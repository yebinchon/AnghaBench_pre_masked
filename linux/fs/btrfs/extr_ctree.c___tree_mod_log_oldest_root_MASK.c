
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int logical; } ;
struct tree_mod_elem {scalar_t__ op; TYPE_1__ old_root; } ;
struct extent_buffer {int fs_info; int start; } ;


 scalar_t__ VAR_0 ;
 struct tree_mod_elem* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static struct tree_mod_elem *FUNC_1(
  struct extent_buffer *VAR_1, u64 VAR_2)
{
 struct tree_mod_elem *VAR_3;
 struct tree_mod_elem *VAR_4 = ((void*)0);
 u64 VAR_5 = VAR_1->start;
 int VAR_6 = 0;

 if (!VAR_2)
  return ((void*)0);







 while (1) {
  VAR_3 = FUNC_0(VAR_1->fs_info, VAR_5,
      VAR_2);
  if (!VAR_6 && !VAR_3)
   return ((void*)0);





  if (!VAR_3)
   break;






  if (VAR_3->op != VAR_0)
   break;

  VAR_4 = VAR_3;
  VAR_5 = VAR_3->old_root.logical;
  VAR_6 = 1;
 }


 if (!VAR_4)
  VAR_4 = VAR_3;

 return VAR_4;
}
