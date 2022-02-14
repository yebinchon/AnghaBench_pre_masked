
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct inode {int i_sb; } ;
struct extent_state {unsigned int state; scalar_t__ start; scalar_t__ end; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {int delalloc_batch; int delalloc_bytes; } ;
struct TYPE_4__ {int lock; int new_delalloc_bytes; int runtime_flags; int defrag_bytes; int delalloc_bytes; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct btrfs_root*,struct inode*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 struct btrfs_fs_info* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,scalar_t__,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int *) ;

void FUNC_12(struct inode *VAR_4, struct extent_state *VAR_5,
          unsigned *VAR_6)
{
 struct btrfs_fs_info *VAR_7 = FUNC_6(VAR_4->i_sb);

 if ((*VAR_6 & VAR_1) && !(*VAR_6 & VAR_2))
  FUNC_1(1);





 if (!(VAR_5->state & VAR_2) && (*VAR_6 & VAR_2)) {
  struct btrfs_root *VAR_8 = FUNC_0(VAR_4)->root;
  u64 VAR_9 = VAR_5->end + 1 - VAR_5->start;
  u32 VAR_10 = FUNC_7(VAR_9);
  bool VAR_11 = !FUNC_3(FUNC_0(VAR_4));

  FUNC_9(&FUNC_0(VAR_4)->lock);
  FUNC_5(FUNC_0(VAR_4), VAR_10);
  FUNC_10(&FUNC_0(VAR_4)->lock);


  if (FUNC_4(VAR_7))
   return;

  FUNC_8(&VAR_7->delalloc_bytes, VAR_9,
      VAR_7->delalloc_batch);
  FUNC_9(&FUNC_0(VAR_4)->lock);
  FUNC_0(VAR_4)->delalloc_bytes += VAR_9;
  if (*VAR_6 & VAR_1)
   FUNC_0(VAR_4)->defrag_bytes += VAR_9;
  if (VAR_11 && !FUNC_11(VAR_0,
      &FUNC_0(VAR_4)->runtime_flags))
   FUNC_2(VAR_8, VAR_4);
  FUNC_10(&FUNC_0(VAR_4)->lock);
 }

 if (!(VAR_5->state & VAR_3) &&
     (*VAR_6 & VAR_3)) {
  FUNC_9(&FUNC_0(VAR_4)->lock);
  FUNC_0(VAR_4)->new_delalloc_bytes += VAR_5->end + 1 -
   VAR_5->start;
  FUNC_10(&FUNC_0(VAR_4)->lock);
 }
}
