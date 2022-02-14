
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ type; int offset; } ;
struct btrfs_inode_ref {int dummy; } ;
struct btrfs_inode_extref {int dummy; } ;
struct btrfs_inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct extent_buffer*,int,char*,int) ;
 int FUNC_2 (struct extent_buffer*,int,int ,char*,int) ;
 unsigned long FUNC_3 (struct extent_buffer*,int ) ;
 unsigned long FUNC_4 (struct extent_buffer*,int ) ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*,int ,struct btrfs_inode*,char*,int) ;
 int FUNC_8 (struct extent_buffer*,unsigned long,int*,char**,int *,int *) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (char*) ;
 struct inode* FUNC_11 (struct btrfs_root*,int ) ;
 int FUNC_12 (struct extent_buffer*,unsigned long,int*,char**,int *) ;

__attribute__((used)) static int FUNC_13(struct btrfs_trans_handle *VAR_2,
     struct btrfs_root *VAR_3,
     struct btrfs_path *VAR_4,
     struct btrfs_inode *VAR_5,
     struct extent_buffer *VAR_6,
     int VAR_7,
     struct btrfs_key *VAR_8)
{
 int VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 struct extent_buffer *VAR_12;

again:
 FUNC_5(VAR_4);
 VAR_9 = FUNC_6(((void*)0), VAR_3, VAR_8, VAR_4, 0, 0);
 if (VAR_9 > 0) {
  VAR_9 = 0;
  goto out;
 }
 if (VAR_9 < 0)
  goto out;

 VAR_12 = VAR_4->nodes[0];
 VAR_10 = FUNC_3(VAR_12, VAR_4->slots[0]);
 VAR_11 = VAR_10 + FUNC_4(VAR_12, VAR_4->slots[0]);
 while (VAR_10 < VAR_11) {
  char *VAR_13 = ((void*)0);
  int VAR_14;
  u64 VAR_15;

  if (VAR_8->type == VAR_0) {
   VAR_9 = FUNC_8(VAR_12, VAR_10, &VAR_14, &VAR_13,
      ((void*)0), &VAR_15);
  } else {
   VAR_15 = VAR_8->offset;
   VAR_9 = FUNC_12(VAR_12, VAR_10, &VAR_14, &VAR_13,
          ((void*)0));
  }
  if (VAR_9)
   goto out;

  if (VAR_8->type == VAR_0)
   VAR_9 = !!FUNC_2(VAR_6, VAR_7,
              VAR_15, VAR_13,
              VAR_14);
  else
   VAR_9 = !!FUNC_1(VAR_6, VAR_7,
          VAR_13, VAR_14);

  if (!VAR_9) {
   struct inode *VAR_16;

   FUNC_5(VAR_4);
   VAR_16 = FUNC_11(VAR_3, VAR_15);
   if (!VAR_16) {
    VAR_9 = -VAR_1;
    FUNC_10(VAR_13);
    goto out;
   }
   VAR_9 = FUNC_7(VAR_2, VAR_3, FUNC_0(VAR_16),
       VAR_5, VAR_13, VAR_14);
   FUNC_10(VAR_13);
   FUNC_9(VAR_16);
   if (VAR_9)
    goto out;
   goto again;
  }

  FUNC_10(VAR_13);
  VAR_10 += VAR_14;
  if (VAR_8->type == VAR_0)
   VAR_10 += sizeof(struct btrfs_inode_extref);
  else
   VAR_10 += sizeof(struct btrfs_inode_ref);
 }
 VAR_9 = 0;
 out:
 FUNC_5(VAR_4);
 return VAR_9;
}
