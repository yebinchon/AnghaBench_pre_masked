
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_path {int* slots; int ** nodes; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct btrfs_path *VAR_0,
        int *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 VAR_4 = FUNC_0(VAR_0->nodes[*VAR_1]);

 VAR_0->slots[*VAR_1]++;

 while (VAR_0->slots[*VAR_1] >= VAR_4) {
  if (*VAR_1 == VAR_2)
   return -1;


  VAR_0->slots[*VAR_1] = 0;
  FUNC_1(VAR_0->nodes[*VAR_1]);
  VAR_0->nodes[*VAR_1] = ((void*)0);
  (*VAR_1)++;
  VAR_0->slots[*VAR_1]++;

  VAR_4 = FUNC_0(VAR_0->nodes[*VAR_1]);
  VAR_3 = 1;
 }
 return VAR_3;
}
