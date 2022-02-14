
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_state {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct btrfs_fs_info {struct extent_io_tree* freed_extents; int unused_bg_unpin_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,int ,int ) ;
 int FUNC_1 (struct extent_io_tree*,int ,int ,struct extent_state**) ;
 int FUNC_2 () ;
 int FUNC_3 (struct extent_io_tree*,int ,int *,int *,int ,struct extent_state**) ;
 int FUNC_4 (struct extent_state*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct btrfs_fs_info *VAR_1,
           struct extent_io_tree *VAR_2)
{
 struct extent_io_tree *VAR_3;
 u64 VAR_4;
 u64 VAR_5;
 int VAR_6;
 bool VAR_7 = 1;

 VAR_3 = VAR_2;
again:
 while (1) {
  struct extent_state *VAR_8 = ((void*)0);







  FUNC_5(&VAR_1->unused_bg_unpin_mutex);
  VAR_6 = FUNC_3(VAR_3, 0, &VAR_4, &VAR_5,
         VAR_0, &VAR_8);
  if (VAR_6) {
   FUNC_6(&VAR_1->unused_bg_unpin_mutex);
   break;
  }

  FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_8);
  FUNC_4(VAR_8);
  FUNC_0(VAR_1, VAR_4, VAR_5);
  FUNC_6(&VAR_1->unused_bg_unpin_mutex);
  FUNC_2();
 }

 if (VAR_7) {
  if (VAR_3 == &VAR_1->freed_extents[0])
   VAR_3 = &VAR_1->freed_extents[1];
  else
   VAR_3 = &VAR_1->freed_extents[0];
  VAR_7 = 0;
  goto again;
 }

 return 0;
}
