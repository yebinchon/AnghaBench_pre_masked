
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * slots; struct extent_buffer** nodes; } ;
struct btrfs_inode_extref {int dummy; } ;
struct btrfs_inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_root*,scalar_t__,scalar_t__,struct btrfs_path*,struct btrfs_inode_extref**,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct btrfs_inode*) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_inode_extref*) ;
 unsigned long FUNC_3 (struct extent_buffer*,int ) ;
 scalar_t__ FUNC_4 (struct extent_buffer*,int ) ;
 int FUNC_5 (struct btrfs_path*) ;

__attribute__((used)) static int FUNC_6(struct btrfs_root *VAR_1,
  struct btrfs_inode *VAR_2, struct btrfs_path *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;
 unsigned int VAR_6 = 0;
 u32 VAR_7;
 u32 VAR_8 = 0;
 u64 VAR_9 = FUNC_1(VAR_2);
 u64 VAR_10 = 0;
 unsigned long VAR_11;
 struct btrfs_inode_extref *VAR_12;
 struct extent_buffer *VAR_13;

 while (1) {
  VAR_4 = FUNC_0(VAR_1, VAR_9, VAR_10, VAR_3,
         &VAR_12, &VAR_10);
  if (VAR_4)
   break;

  VAR_13 = VAR_3->nodes[0];
  VAR_7 = FUNC_4(VAR_13, VAR_3->slots[0]);
  VAR_11 = FUNC_3(VAR_13, VAR_3->slots[0]);
  VAR_8 = 0;

  while (VAR_8 < VAR_7) {
   VAR_12 = (struct btrfs_inode_extref *) (VAR_11 + VAR_8);
   VAR_5 = FUNC_2(VAR_13, VAR_12);

   VAR_6++;

   VAR_8 += VAR_5 + sizeof(*VAR_12);
  }

  VAR_10++;
  FUNC_5(VAR_3);
 }
 FUNC_5(VAR_3);

 if (VAR_4 < 0 && VAR_4 != -VAR_0)
  return VAR_4;
 return VAR_6;
}
