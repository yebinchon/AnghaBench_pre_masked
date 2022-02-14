
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct inode {int dummy; } ;
struct extent_map_tree {int lock; } ;
struct extent_map {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct TYPE_2__ {struct extent_map_tree extent_tree; struct extent_io_tree io_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct extent_io_tree*,scalar_t__*,scalar_t__,scalar_t__,int ,int) ;
 scalar_t__ FUNC_2 (struct extent_map*) ;
 int FUNC_3 (struct extent_map*) ;
 struct extent_map* FUNC_4 (struct extent_map_tree*,scalar_t__,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2, u64 VAR_3, u32 VAR_4)
{
 struct extent_io_tree *VAR_5 = &FUNC_0(VAR_2)->io_tree;
 struct extent_map *VAR_6 = ((void*)0);
 struct extent_map_tree *VAR_7 = &FUNC_0(VAR_2)->extent_tree;
 u64 VAR_8;

 FUNC_5(&VAR_7->lock);
 VAR_6 = FUNC_4(VAR_7, VAR_3, VAR_1);
 FUNC_6(&VAR_7->lock);

 if (VAR_6) {
  VAR_8 = FUNC_2(VAR_6);
  FUNC_3(VAR_6);
  if (VAR_8 - VAR_3 > VAR_4)
   return 0;
 }

 VAR_4 /= 2;
 VAR_8 = FUNC_1(VAR_5, &VAR_3, VAR_3 + VAR_4,
          VAR_4, VAR_0, 1);
 if (VAR_8 >= VAR_4)
  return 0;
 return 1;
}
