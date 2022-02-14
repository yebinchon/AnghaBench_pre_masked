
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * slots; struct extent_buffer** nodes; } ;
struct btrfs_key {int dummy; } ;


 int VAR_0 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_path*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key const*,int ) ;
 unsigned long FUNC_3 (struct extent_buffer*,int ) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (struct extent_buffer*,void*,unsigned long,int ) ;

int FUNC_6(struct btrfs_trans_handle *VAR_1, struct btrfs_root *VAR_2,
        const struct btrfs_key *VAR_3, void *VAR_4,
        u32 VAR_5)
{
 int VAR_6 = 0;
 struct btrfs_path *VAR_7;
 struct extent_buffer *VAR_8;
 unsigned long VAR_9;

 VAR_7 = FUNC_0();
 if (!VAR_7)
  return -VAR_0;
 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_7, VAR_3, VAR_5);
 if (!VAR_6) {
  VAR_8 = VAR_7->nodes[0];
  VAR_9 = FUNC_3(VAR_8, VAR_7->slots[0]);
  FUNC_5(VAR_8, VAR_4, VAR_9, VAR_5);
  FUNC_4(VAR_8);
 }
 FUNC_1(VAR_7);
 return VAR_6;
}
