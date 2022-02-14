
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {int offset; int type; int objectid; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_disk_key {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct btrfs_disk_key*,struct btrfs_key const*) ;
 int FUNC_2 (struct btrfs_fs_info*,char*,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct btrfs_disk_key*) ;
 int FUNC_4 (struct btrfs_disk_key*) ;
 int FUNC_5 (struct btrfs_disk_key*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*,struct btrfs_disk_key*,int) ;
 int FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct extent_buffer*) ;
 int FUNC_10 (struct extent_buffer*,struct btrfs_disk_key*,int) ;
 scalar_t__ FUNC_11 (struct btrfs_disk_key*,struct btrfs_key const*) ;
 int FUNC_12 (struct btrfs_path*,struct btrfs_disk_key*,int) ;
 scalar_t__ FUNC_13 (int) ;

void FUNC_14(struct btrfs_fs_info *VAR_0,
        struct btrfs_path *VAR_1,
        const struct btrfs_key *VAR_2)
{
 struct btrfs_disk_key VAR_3;
 struct extent_buffer *VAR_4;
 int VAR_5;

 VAR_4 = VAR_1->nodes[0];
 VAR_5 = VAR_1->slots[0];
 if (VAR_5 > 0) {
  FUNC_7(VAR_4, &VAR_3, VAR_5 - 1);
  if (FUNC_13(FUNC_11(&VAR_3, VAR_2) >= 0)) {
   FUNC_2(VAR_0,
  "slot %u key (%llu %u %llu) new key (%llu %u %llu)",
       VAR_5, FUNC_3(&VAR_3),
       FUNC_5(&VAR_3),
       FUNC_4(&VAR_3),
       VAR_2->objectid, VAR_2->type,
       VAR_2->offset);
   FUNC_9(VAR_4);
   FUNC_0();
  }
 }
 if (VAR_5 < FUNC_6(VAR_4) - 1) {
  FUNC_7(VAR_4, &VAR_3, VAR_5 + 1);
  if (FUNC_13(FUNC_11(&VAR_3, VAR_2) <= 0)) {
   FUNC_2(VAR_0,
  "slot %u key (%llu %u %llu) new key (%llu %u %llu)",
       VAR_5, FUNC_3(&VAR_3),
       FUNC_5(&VAR_3),
       FUNC_4(&VAR_3),
       VAR_2->objectid, VAR_2->type,
       VAR_2->offset);
   FUNC_9(VAR_4);
   FUNC_0();
  }
 }

 FUNC_1(&VAR_3, VAR_2);
 FUNC_10(VAR_4, &VAR_3, VAR_5);
 FUNC_8(VAR_4);
 if (VAR_5 == 0)
  FUNC_12(VAR_1, &VAR_3, 1);
}
