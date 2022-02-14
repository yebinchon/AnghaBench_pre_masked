
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_path {scalar_t__* slots; scalar_t__* locks; int ** nodes; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct btrfs_path *VAR_1, int *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!VAR_1->nodes[VAR_3])
   continue;
  if (VAR_3) {
   VAR_1->slots[VAR_3]++;
   if (VAR_1->slots[VAR_3] <
       FUNC_0(VAR_1->nodes[VAR_3])) {
    *VAR_2 = VAR_3;
    return 0;
   }
  }
  FUNC_1(VAR_1->nodes[VAR_3], VAR_1->locks[VAR_3]);
  FUNC_2(VAR_1->nodes[VAR_3]);
  VAR_1->nodes[VAR_3] = ((void*)0);
  VAR_1->slots[VAR_3] = 0;
  VAR_1->locks[VAR_3] = 0;
 }

 return 1;
}
