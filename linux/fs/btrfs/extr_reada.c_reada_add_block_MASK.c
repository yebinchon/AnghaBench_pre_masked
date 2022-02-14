
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct reada_extent {int lock; int extctl; } ;
struct reada_extctl {int list; int generation; struct reada_control* rc; } ;
struct reada_control {int elems; struct btrfs_fs_info* fs_info; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct reada_extctl* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct btrfs_fs_info*,struct reada_extent*) ;
 struct reada_extent* FUNC_4 (struct btrfs_fs_info*,int ,struct btrfs_key*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct reada_control *VAR_2, u64 VAR_3,
      struct btrfs_key *VAR_4, u64 VAR_5)
{
 struct btrfs_fs_info *VAR_6 = VAR_2->fs_info;
 struct reada_extent *VAR_7;
 struct reada_extctl *VAR_8;


 VAR_7 = FUNC_4(VAR_6, VAR_3, VAR_4);
 if (!VAR_7)
  return -1;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  FUNC_3(VAR_6, VAR_7);
  return -VAR_0;
 }

 VAR_8->rc = VAR_2;
 VAR_8->generation = VAR_5;
 FUNC_0(&VAR_2->elems);

 FUNC_5(&VAR_7->lock);
 FUNC_2(&VAR_8->list, &VAR_7->extctl);
 FUNC_6(&VAR_7->lock);



 return 0;
}
