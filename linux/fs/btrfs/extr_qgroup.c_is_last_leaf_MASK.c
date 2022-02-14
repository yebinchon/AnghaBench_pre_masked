
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_path {int* slots; scalar_t__* nodes; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct btrfs_path *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 < VAR_0 && VAR_1->nodes[VAR_2]; VAR_2++) {
  if (VAR_1->slots[VAR_2] != FUNC_0(VAR_1->nodes[VAR_2]) - 1)
   return 0;
 }
 return 1;
}
