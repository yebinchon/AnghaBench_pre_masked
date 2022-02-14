
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {struct extent_buffer* node; } ;
struct btrfs_path {struct extent_buffer** nodes; } ;
struct btrfs_key_ptr {int dummy; } ;
struct btrfs_disk_key {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_disk_key*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct extent_buffer*,int ) ;
 int FUNC_7 (struct extent_buffer*,int) ;
 int FUNC_8 (struct btrfs_path*,struct btrfs_disk_key*,int) ;
 int FUNC_9 (struct extent_buffer*,int ,int ,int) ;
 int FUNC_10 (struct extent_buffer*,int,int ,int ) ;
 int FUNC_11 (struct extent_buffer*,int,int,int) ;

__attribute__((used)) static void FUNC_12(struct btrfs_root *VAR_2, struct btrfs_path *VAR_3,
      int VAR_4, int VAR_5)
{
 struct extent_buffer *VAR_6 = VAR_3->nodes[VAR_4];
 u32 VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_5 != VAR_7 - 1) {
  if (VAR_4) {
   VAR_8 = FUNC_11(VAR_6, VAR_5, VAR_5 + 1,
     VAR_7 - VAR_5 - 1);
   FUNC_0(VAR_8 < 0);
  }
  FUNC_9(VAR_6,
         FUNC_5(VAR_5),
         FUNC_5(VAR_5 + 1),
         sizeof(struct btrfs_key_ptr) *
         (VAR_7 - VAR_5 - 1));
 } else if (VAR_4) {
  VAR_8 = FUNC_10(VAR_6, VAR_5, VAR_1,
    VAR_0);
  FUNC_0(VAR_8 < 0);
 }

 VAR_7--;
 FUNC_7(VAR_6, VAR_7);
 if (VAR_7 == 0 && VAR_6 == VAR_2->node) {
  FUNC_0(FUNC_1(VAR_2->node) != 1);

  FUNC_6(VAR_2->node, 0);
 } else if (VAR_5 == 0) {
  struct btrfs_disk_key VAR_9;

  FUNC_4(VAR_6, &VAR_9, 0);
  FUNC_8(VAR_3, &VAR_9, VAR_4 + 1);
 }
 FUNC_3(VAR_6);
}
