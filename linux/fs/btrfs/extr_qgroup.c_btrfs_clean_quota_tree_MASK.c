
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int leave_spinning; scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ type; scalar_t__ offset; scalar_t__ objectid; } ;


 int VAR_0 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int ,int) ;
 int FUNC_2 (struct btrfs_path*) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;

__attribute__((used)) static int FUNC_6(struct btrfs_trans_handle *VAR_1,
      struct btrfs_root *VAR_2)
{
 struct btrfs_path *VAR_3;
 struct btrfs_key VAR_4;
 struct extent_buffer *VAR_5 = ((void*)0);
 int VAR_6;
 int VAR_7 = 0;

 VAR_3 = FUNC_0();
 if (!VAR_3)
  return -VAR_0;

 VAR_3->leave_spinning = 1;

 VAR_4.objectid = 0;
 VAR_4.offset = 0;
 VAR_4.type = 0;

 while (1) {
  VAR_6 = FUNC_5(VAR_1, VAR_2, &VAR_4, VAR_3, -1, 1);
  if (VAR_6 < 0)
   goto out;
  VAR_5 = VAR_3->nodes[0];
  VAR_7 = FUNC_3(VAR_5);
  if (!VAR_7)
   break;





  VAR_3->slots[0] = 0;
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, 0, VAR_7);
  if (VAR_6)
   goto out;

  FUNC_4(VAR_3);
 }
 VAR_6 = 0;
out:
 FUNC_2(VAR_3);
 return VAR_6;
}
