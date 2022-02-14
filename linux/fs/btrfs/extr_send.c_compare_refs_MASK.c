
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct send_ctx {int dummy; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_path {int * slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ type; scalar_t__ offset; } ;
struct btrfs_inode_extref {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct extent_buffer*,struct btrfs_inode_extref*) ;
 scalar_t__ FUNC_1 (struct extent_buffer*,struct btrfs_inode_extref*) ;
 unsigned long FUNC_2 (struct extent_buffer*,int ) ;
 scalar_t__ FUNC_3 (struct extent_buffer*,int ) ;
 int FUNC_4 (struct send_ctx*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct send_ctx *VAR_1, struct btrfs_path *VAR_2,
   struct btrfs_key *VAR_3)
{
 struct btrfs_inode_extref *VAR_4;
 struct extent_buffer *VAR_5;
 u64 VAR_6 = 0, VAR_7 = 0;
 unsigned long VAR_8;
 u32 VAR_9;
 u32 VAR_10 = 0;
 int VAR_11;
 int VAR_12 = 0;


 if (VAR_3->type == VAR_0) {
  VAR_6 = VAR_3->offset;

  VAR_12 = FUNC_4(VAR_1, VAR_6);
  goto out;
 }

 VAR_5 = VAR_2->nodes[0];
 VAR_9 = FUNC_3(VAR_5, VAR_2->slots[0]);
 VAR_8 = FUNC_2(VAR_5, VAR_2->slots[0]);
 while (VAR_10 < VAR_9) {
  VAR_4 = (struct btrfs_inode_extref *)(VAR_8 +
             VAR_10);
  VAR_6 = FUNC_1(VAR_5, VAR_4);
  VAR_11 = FUNC_0(VAR_5, VAR_4);
  VAR_10 += VAR_11 + sizeof(*VAR_4);
  if (VAR_6 == VAR_7)
   continue;
  VAR_12 = FUNC_4(VAR_1, VAR_6);
  if (VAR_12)
   break;
  VAR_7 = VAR_6;
 }
out:
 return VAR_12;
}
