
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_root {struct extent_buffer* commit_root; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int skip_locking; int* locks; struct extent_buffer** nodes; scalar_t__ need_commit_sem; scalar_t__ search_commit_root; } ;
struct btrfs_fs_info {int commit_root_sem; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct extent_buffer* FUNC_1 (int ) ;
 struct extent_buffer* FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_4 (struct btrfs_root*) ;
 struct extent_buffer* FUNC_5 (struct btrfs_root*) ;
 struct extent_buffer* FUNC_6 (struct btrfs_root*) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct extent_buffer*) ;
 int FUNC_10 (struct extent_buffer*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static struct extent_buffer *FUNC_12(struct btrfs_root *VAR_4,
       struct btrfs_path *VAR_5,
       int VAR_6)
{
 struct btrfs_fs_info *VAR_7 = VAR_4->fs_info;
 struct extent_buffer *VAR_8;
 int VAR_9;
 int VAR_10 = 0;


 VAR_9 = VAR_1;

 if (VAR_5->search_commit_root) {
  if (VAR_5->need_commit_sem) {
   FUNC_8(&VAR_7->commit_root_sem);
   VAR_8 = FUNC_2(VAR_4->commit_root);
   FUNC_11(&VAR_7->commit_root_sem);
   if (!VAR_8)
    return FUNC_1(-VAR_3);

  } else {
   VAR_8 = VAR_4->commit_root;
   FUNC_9(VAR_8);
  }
  VAR_10 = FUNC_3(VAR_8);




  FUNC_0(VAR_5->skip_locking == 1);

  goto out;
 }

 if (VAR_5->skip_locking) {
  VAR_8 = FUNC_6(VAR_4);
  VAR_10 = FUNC_3(VAR_8);
  goto out;
 }





 if (VAR_6 < VAR_0) {




  VAR_8 = FUNC_5(VAR_4);
  VAR_10 = FUNC_3(VAR_8);
  if (VAR_10 > VAR_6)
   goto out;


  FUNC_7(VAR_8);
  FUNC_10(VAR_8);
 }

 VAR_8 = FUNC_4(VAR_4);
 VAR_9 = VAR_2;


 VAR_10 = FUNC_3(VAR_8);

out:
 VAR_5->nodes[VAR_10] = VAR_8;
 if (!VAR_5->skip_locking)
  VAR_5->locks[VAR_10] = VAR_9;



 return VAR_8;
}
