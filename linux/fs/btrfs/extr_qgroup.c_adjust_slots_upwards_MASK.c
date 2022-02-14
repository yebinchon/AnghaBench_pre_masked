
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; int * locks; } ;


 int FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct extent_buffer*,int ) ;
 int FUNC_2 (struct extent_buffer*) ;

__attribute__((used)) static int FUNC_3(struct btrfs_path *VAR_0, int VAR_1)
{
 int VAR_2 = 0;
 int VAR_3, VAR_4;
 struct extent_buffer *VAR_5;

 if (VAR_1 == 0)
  return 1;

 while (VAR_2 <= VAR_1) {
  VAR_5 = VAR_0->nodes[VAR_2];
  VAR_3 = FUNC_0(VAR_5);
  VAR_0->slots[VAR_2]++;
  VAR_4 = VAR_0->slots[VAR_2];
  if (VAR_4 >= VAR_3 || VAR_2 == 0) {





   if (VAR_2 != VAR_1) {
    FUNC_1(VAR_5, VAR_0->locks[VAR_2]);
    VAR_0->locks[VAR_2] = 0;

    FUNC_2(VAR_5);
    VAR_0->nodes[VAR_2] = ((void*)0);
    VAR_0->slots[VAR_2] = 0;
   }
  } else {





   break;
  }

  VAR_2++;
 }

 VAR_5 = VAR_0->nodes[VAR_1];
 if (VAR_0->slots[VAR_1] >= FUNC_0(VAR_5))
  return 1;

 return 0;
}
