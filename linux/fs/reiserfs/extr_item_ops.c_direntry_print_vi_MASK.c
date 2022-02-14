
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_item {int vi_ih; int vi_type; int vi_index; struct direntry_uarea* vi_uarea; } ;
struct direntry_uarea {int entry_count; int * entry_sizes; int flags; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct virtual_item *VAR_0)
{
 int VAR_1;
 struct direntry_uarea *VAR_2 = VAR_0->vi_uarea;

 FUNC_1(((void*)0), "reiserfs-16104",
    "DIRENTRY, index %d, type 0x%x, %h, flags 0x%x",
    VAR_0->vi_index, VAR_0->vi_type, VAR_0->vi_ih, VAR_2->flags);
 FUNC_0("%d entries: ", VAR_2->entry_count);
 for (VAR_1 = 0; VAR_1 < VAR_2->entry_count; VAR_1++)
  FUNC_0("%d ", VAR_2->entry_sizes[VAR_1]);
 FUNC_0("\n");
}
