
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_fastmap_layout {int used_blocks; int ** e; int * to_be_tortured; } ;
struct ubi_device {int dummy; } ;


 int FUNC_0 (struct ubi_device*,int *,int,int ) ;

__attribute__((used)) static void FUNC_1(struct ubi_device *VAR_0,
      struct ubi_fastmap_layout *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->used_blocks; VAR_2++) {
  if (VAR_1->e[VAR_2]) {
   FUNC_0(VAR_0, VAR_1->e[VAR_2], VAR_2,
       VAR_1->to_be_tortured[VAR_2]);
   VAR_1->e[VAR_2] = ((void*)0);
  }
 }
}
