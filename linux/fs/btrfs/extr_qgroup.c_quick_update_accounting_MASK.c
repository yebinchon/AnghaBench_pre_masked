
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ulist {int dummy; } ;
struct btrfs_qgroup {scalar_t__ excl; scalar_t__ rfer; } ;
struct btrfs_fs_info {int qgroup_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,struct ulist*,int ,struct btrfs_qgroup*,int) ;
 struct btrfs_qgroup* FUNC_1 (struct btrfs_fs_info*,int ) ;

__attribute__((used)) static int FUNC_2(struct btrfs_fs_info *VAR_1,
       struct ulist *VAR_2, u64 VAR_3, u64 VAR_4,
       int VAR_5)
{
 struct btrfs_qgroup *VAR_6;
 int VAR_7 = 1;
 int VAR_8 = 0;

 VAR_6 = FUNC_1(VAR_1, VAR_3);
 if (!VAR_6)
  goto out;
 if (VAR_6->excl == VAR_6->rfer) {
  VAR_7 = 0;
  VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_4,
            VAR_6, VAR_5);
  if (VAR_8 < 0) {
   VAR_7 = VAR_8;
   goto out;
  }
 }
out:
 if (VAR_7)
  VAR_1->qgroup_flags |= VAR_0;
 return VAR_7;
}
