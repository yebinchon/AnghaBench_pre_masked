
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_item {struct direntry_uarea* vi_uarea; } ;
struct direntry_uarea {int entry_count; scalar_t__* entry_sizes; } ;



__attribute__((used)) static int FUNC_0(struct virtual_item *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5, VAR_6;
 struct direntry_uarea *VAR_7 = VAR_0->vi_uarea;

 VAR_4 = 0;
 if (VAR_1 == 0)
  VAR_5 = 0;
 else
  VAR_5 = VAR_7->entry_count - VAR_2;
 VAR_6 = VAR_5 + VAR_2 - 1;

 for (VAR_3 = VAR_5; VAR_3 <= VAR_6; VAR_3++)
  VAR_4 += VAR_7->entry_sizes[VAR_3];

 return VAR_4;
}
