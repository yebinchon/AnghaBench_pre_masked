
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_path {scalar_t__* slots; struct extent_buffer** nodes; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_3 (struct extent_buffer*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct btrfs_path *VAR_0, int *VAR_1)
{
 struct extent_buffer *VAR_2;

 FUNC_0(*VAR_1 == 0);
 VAR_2 = FUNC_3(VAR_0->nodes[*VAR_1], VAR_0->slots[*VAR_1]);
 if (FUNC_1(VAR_2))
  return FUNC_2(VAR_2);

 VAR_0->nodes[*VAR_1 - 1] = VAR_2;
 VAR_0->slots[*VAR_1 - 1] = 0;
 (*VAR_1)--;
 return 0;
}
