
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned long u16 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int leave_spinning; int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; int offset; scalar_t__ type; } ;
struct btrfs_fs_info {TYPE_1__* sb; int super_copy; struct btrfs_root* csum_root; } ;
struct TYPE_2__ {int s_blocksize_bits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct btrfs_trans_handle*,int) ;
 struct btrfs_path* FUNC_1 () ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int,int) ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_key*,int) ;
 unsigned long FUNC_5 (struct extent_buffer*,int) ;
 unsigned long FUNC_6 (struct extent_buffer*,int) ;
 int FUNC_7 (struct btrfs_path*) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_9 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,unsigned long) ;
 unsigned long FUNC_10 (int ) ;
 int FUNC_11 (struct extent_buffer*,unsigned long,unsigned long) ;
 int FUNC_12 (struct btrfs_fs_info*,struct btrfs_path*,struct btrfs_key*,int,int) ;

int FUNC_13(struct btrfs_trans_handle *VAR_4,
      struct btrfs_fs_info *VAR_5, u64 VAR_6, u64 VAR_7)
{
 struct btrfs_root *VAR_8 = VAR_5->csum_root;
 struct btrfs_path *VAR_9;
 struct btrfs_key VAR_10;
 u64 VAR_11 = VAR_6 + VAR_7;
 u64 VAR_12;
 struct extent_buffer *VAR_13;
 int VAR_14;
 u16 VAR_15 = FUNC_10(VAR_5->super_copy);
 int VAR_16 = VAR_5->sb->s_blocksize_bits;

 VAR_9 = FUNC_1();
 if (!VAR_9)
  return -VAR_3;

 while (1) {
  VAR_10.objectid = VAR_1;
  VAR_10.offset = VAR_11 - 1;
  VAR_10.type = VAR_0;

  VAR_9->leave_spinning = 1;
  VAR_14 = FUNC_8(VAR_4, VAR_8, &VAR_10, VAR_9, -1, 1);
  if (VAR_14 > 0) {
   if (VAR_9->slots[0] == 0)
    break;
   VAR_9->slots[0]--;
  } else if (VAR_14 < 0) {
   break;
  }

  VAR_13 = VAR_9->nodes[0];
  FUNC_4(VAR_13, &VAR_10, VAR_9->slots[0]);

  if (VAR_10.objectid != VAR_1 ||
      VAR_10.type != VAR_0) {
   break;
  }

  if (VAR_10.offset >= VAR_11)
   break;

  VAR_12 = FUNC_6(VAR_13, VAR_9->slots[0]) / VAR_15;
  VAR_12 <<= VAR_16;
  VAR_12 += VAR_10.offset;


  if (VAR_12 <= VAR_6)
   break;


  if (VAR_10.offset >= VAR_6 && VAR_12 <= VAR_11) {
   int VAR_17 = 1;






   if (VAR_10.offset > VAR_6 && VAR_9->slots[0] > 0) {
    int VAR_18 = VAR_9->slots[0] - 1;

    while (VAR_18 >= 0) {
     struct btrfs_key VAR_19;

     FUNC_4(VAR_13, &VAR_19, VAR_18);
     if (VAR_19.offset < VAR_6 ||
         VAR_19.type != VAR_0 ||
         VAR_19.objectid !=
         VAR_1)
      break;
     VAR_9->slots[0] = VAR_18;
     VAR_17++;
     VAR_10.offset = VAR_19.offset;
     VAR_18--;
    }
   }
   VAR_14 = FUNC_2(VAR_4, VAR_8, VAR_9,
           VAR_9->slots[0], VAR_17);
   if (VAR_14)
    goto out;
   if (VAR_10.offset == VAR_6)
    break;
  } else if (VAR_10.offset < VAR_6 && VAR_12 > VAR_11) {
   unsigned long VAR_20;
   unsigned long VAR_21;
   unsigned long VAR_22;
   VAR_20 = (VAR_6 - VAR_10.offset) >> VAR_16;
   VAR_20 *= VAR_15;

   VAR_21 = (VAR_7 >> VAR_16) * VAR_15;

   VAR_22 = FUNC_5(VAR_13,
           VAR_9->slots[0]);

   FUNC_11(VAR_13, VAR_22 + VAR_20,
          VAR_21);
   VAR_10.offset = VAR_6;





   VAR_14 = FUNC_9(VAR_4, VAR_8, VAR_9, &VAR_10, VAR_20);
   if (VAR_14 && VAR_14 != -VAR_2) {
    FUNC_0(VAR_4, VAR_14);
    goto out;
   }

   VAR_10.offset = VAR_11 - 1;
  } else {
   FUNC_12(VAR_5, VAR_9, &VAR_10, VAR_6, VAR_7);
   if (VAR_10.offset < VAR_6)
    break;
  }
  FUNC_7(VAR_9);
 }
 VAR_14 = 0;
out:
 FUNC_3(VAR_9);
 return VAR_14;
}
