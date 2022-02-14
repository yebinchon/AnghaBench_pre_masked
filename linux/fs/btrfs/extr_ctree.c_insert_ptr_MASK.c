
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int transid; int fs_info; } ;
struct btrfs_path {struct extent_buffer** nodes; } ;
struct btrfs_key_ptr {int dummy; } ;
struct btrfs_disk_key {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct extent_buffer*,int) ;
 int FUNC_8 (struct extent_buffer*,int,int ) ;
 int FUNC_9 (struct extent_buffer*,struct btrfs_disk_key*,int) ;
 int FUNC_10 (struct extent_buffer*,int,int ) ;
 int FUNC_11 (struct extent_buffer*,int ,int ,int) ;
 int FUNC_12 (struct extent_buffer*,int,int ,int ) ;
 int FUNC_13 (struct extent_buffer*,int,int,int) ;

__attribute__((used)) static void FUNC_14(struct btrfs_trans_handle *VAR_2,
         struct btrfs_path *VAR_3,
         struct btrfs_disk_key *VAR_4, u64 VAR_5,
         int VAR_6, int VAR_7)
{
 struct extent_buffer *VAR_8;
 int VAR_9;
 int VAR_10;

 FUNC_1(!VAR_3->nodes[VAR_7]);
 FUNC_3(VAR_3->nodes[VAR_7]);
 VAR_8 = VAR_3->nodes[VAR_7];
 VAR_9 = FUNC_4(VAR_8);
 FUNC_1(VAR_6 > VAR_9);
 FUNC_1(VAR_9 == FUNC_0(VAR_2->fs_info));
 if (VAR_6 != VAR_9) {
  if (VAR_7) {
   VAR_10 = FUNC_13(VAR_8, VAR_6 + 1, VAR_6,
     VAR_9 - VAR_6);
   FUNC_1(VAR_10 < 0);
  }
  FUNC_11(VAR_8,
         FUNC_6(VAR_6 + 1),
         FUNC_6(VAR_6),
         (VAR_9 - VAR_6) * sizeof(struct btrfs_key_ptr));
 }
 if (VAR_7) {
  VAR_10 = FUNC_12(VAR_8, VAR_6, VAR_1,
    VAR_0);
  FUNC_1(VAR_10 < 0);
 }
 FUNC_9(VAR_8, VAR_4, VAR_6);
 FUNC_8(VAR_8, VAR_6, VAR_5);
 FUNC_2(VAR_2->transid == 0);
 FUNC_10(VAR_8, VAR_6, VAR_2->transid);
 FUNC_7(VAR_8, VAR_9 + 1);
 FUNC_5(VAR_8);
}
