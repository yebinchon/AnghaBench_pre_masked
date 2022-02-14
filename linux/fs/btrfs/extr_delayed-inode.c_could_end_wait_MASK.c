
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_delayed_root {int items; int items_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct btrfs_delayed_root *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(&VAR_2->items_seq);

 if (VAR_4 < VAR_3 || VAR_4 >= VAR_3 + VAR_1)
  return 1;

 if (FUNC_0(&VAR_2->items) < VAR_0)
  return 1;

 return 0;
}
