
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_item {struct direntry_uarea* vi_uarea; } ;
struct direntry_uarea {int entry_count; int* entry_sizes; int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct virtual_item *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 struct direntry_uarea *VAR_5 = VAR_1->vi_uarea;

 for (VAR_3 = VAR_5->entry_count - 1; VAR_3 >= 0; VAR_3--) {

  if (VAR_5->entry_sizes[VAR_3] > VAR_2)
   break;

  VAR_2 -= VAR_5->entry_sizes[VAR_3];
  VAR_4++;
 }
 FUNC_0(VAR_4 == VAR_5->entry_count);


 if ((VAR_5->flags & VAR_0)
     && VAR_4 > VAR_5->entry_count - 2)
  VAR_4 = VAR_5->entry_count - 2;

 return VAR_4 ? : -1;
}
