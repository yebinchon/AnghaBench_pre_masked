
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_item {struct direntry_uarea* vi_uarea; } ;
struct direntry_uarea {int entry_count; int* entry_sizes; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct virtual_item *VAR_1, int VAR_2,
          int VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6 = 0;
 struct direntry_uarea *VAR_7 = VAR_1->vi_uarea;

 for (VAR_5 = VAR_3; VAR_5 < VAR_7->entry_count - VAR_4; VAR_5++) {

  if (VAR_7->entry_sizes[VAR_5] > VAR_2)
   break;

  VAR_2 -= VAR_7->entry_sizes[VAR_5];
  VAR_6++;
 }

 if (VAR_6 == VAR_7->entry_count) {
  FUNC_0(((void*)0), "item_ops-1",
          "free space %d, entry_count %d", VAR_2,
          VAR_7->entry_count);
 }


 if (VAR_3 == 0 && (VAR_7->flags & VAR_0)
     && VAR_6 < 2)
  VAR_6 = 0;

 return VAR_6 ? : -1;
}
