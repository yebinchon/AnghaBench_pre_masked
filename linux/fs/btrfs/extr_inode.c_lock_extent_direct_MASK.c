
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int i_mapping; } ;
struct extent_state {int dummy; } ;
struct btrfs_ordered_extent {int flags; } ;
struct TYPE_3__ {int io_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct btrfs_ordered_extent* FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct btrfs_ordered_extent*) ;
 int FUNC_3 (struct inode*,struct btrfs_ordered_extent*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__,struct extent_state**) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,scalar_t__,scalar_t__,struct extent_state**) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_2, u64 VAR_3, u64 VAR_4,
         struct extent_state **VAR_5, int VAR_6)
{
 struct btrfs_ordered_extent *VAR_7;
 int VAR_8 = 0;

 while (1) {
  FUNC_6(&FUNC_0(VAR_2)->io_tree, VAR_3, VAR_4,
     VAR_5);





  VAR_7 = FUNC_1(FUNC_0(VAR_2), VAR_3,
           VAR_4 - VAR_3 + 1);
  if (!VAR_7 &&
      (!VAR_6 || !FUNC_5(VAR_2->i_mapping,
        VAR_3, VAR_4)))
   break;

  FUNC_8(&FUNC_0(VAR_2)->io_tree, VAR_3, VAR_4,
         VAR_5);

  if (VAR_7) {
   if (VAR_6 ||
       FUNC_7(VAR_0, &VAR_7->flags))
    FUNC_3(VAR_2, VAR_7, 1);
   else
    VAR_8 = -VAR_1;
   FUNC_2(VAR_7);
  } else {
   VAR_8 = -VAR_1;
  }

  if (VAR_8)
   break;

  FUNC_4();
 }

 return VAR_8;
}
