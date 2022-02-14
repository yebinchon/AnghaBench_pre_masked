
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int i_mapping; } ;
struct extent_state {int dummy; } ;
struct btrfs_ordered_extent {scalar_t__ const file_offset; scalar_t__ const len; } ;
struct TYPE_2__ {int io_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct btrfs_ordered_extent* FUNC_1 (struct inode*,scalar_t__ const) ;
 int FUNC_2 (struct btrfs_ordered_extent*) ;
 int FUNC_3 (struct inode*,scalar_t__ const,scalar_t__ const) ;
 int FUNC_4 (int ,scalar_t__ const,scalar_t__ const) ;
 int FUNC_5 (int *,scalar_t__ const,scalar_t__ const,struct extent_state**) ;
 int FUNC_6 (struct inode*,scalar_t__ const,scalar_t__ const) ;
 int FUNC_7 (int *,scalar_t__ const,scalar_t__ const,struct extent_state**) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_0,
           const u64 VAR_1,
           const u64 VAR_2,
           struct extent_state **VAR_3)
{
 while (1) {
  struct btrfs_ordered_extent *VAR_4;
  int VAR_5;

  FUNC_6(VAR_0, VAR_1, VAR_2);

  FUNC_5(&FUNC_0(VAR_0)->io_tree, VAR_1, VAR_2,
     VAR_3);
  VAR_4 = FUNC_1(VAR_0, VAR_2);






  if ((!VAR_4 ||
      (VAR_4->file_offset + VAR_4->len <= VAR_1 ||
       VAR_4->file_offset > VAR_2)) &&
       !FUNC_4(VAR_0->i_mapping,
          VAR_1, VAR_2)) {
   if (VAR_4)
    FUNC_2(VAR_4);
   break;
  }
  if (VAR_4)
   FUNC_2(VAR_4);
  FUNC_7(&FUNC_0(VAR_0)->io_tree, VAR_1,
         VAR_2, VAR_3);
  VAR_5 = FUNC_3(VAR_0, VAR_1,
            VAR_2 - VAR_1 + 1);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
