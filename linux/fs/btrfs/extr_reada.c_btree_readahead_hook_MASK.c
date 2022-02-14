
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reada_extent {int refcnt; } ;
struct extent_buffer {int start; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int reada_lock; int reada_tree; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,struct reada_extent*,struct extent_buffer*,int) ;
 struct reada_extent* FUNC_1 (int *,int) ;
 int FUNC_2 (struct btrfs_fs_info*,struct reada_extent*) ;
 int FUNC_3 (struct btrfs_fs_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct extent_buffer *VAR_1, int VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_1->fs_info;
 int VAR_4 = 0;
 struct reada_extent *VAR_5;


 FUNC_4(&VAR_3->reada_lock);
 VAR_5 = FUNC_1(&VAR_3->reada_tree,
          VAR_1->start >> VAR_0);
 if (VAR_5)
  VAR_5->refcnt++;
 FUNC_5(&VAR_3->reada_lock);
 if (!VAR_5) {
  VAR_4 = -1;
  goto start_machine;
 }

 FUNC_0(VAR_3, VAR_5, VAR_1, VAR_2);
 FUNC_2(VAR_3, VAR_5);

start_machine:
 FUNC_3(VAR_3);
 return VAR_4;
}
