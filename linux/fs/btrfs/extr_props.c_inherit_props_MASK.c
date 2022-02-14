
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct prop_handler {char* (* extract ) (struct inode*) ;int (* validate ) (char const*,int ) ;int (* apply ) (struct inode*,char const*,int ) ;int xattr_name; int inheritable; } ;
struct inode {int dummy; } ;
struct btrfs_trans_handle {int block_rsv; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_2__ {int runtime_flags; struct btrfs_root* root; } ;


 int FUNC_0 (struct prop_handler*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct btrfs_root*,int ,int ,int ) ;
 int FUNC_3 (struct btrfs_fs_info*,int ,int ) ;
 int FUNC_4 (struct btrfs_fs_info*,int) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct inode*,int ,char const*,int ,int ) ;
 struct prop_handler* VAR_2 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (struct inode*) ;
 int FUNC_9 (char const*,int ) ;
 int FUNC_10 (struct inode*,char const*,int ) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct btrfs_trans_handle *VAR_3,
    struct inode *VAR_4,
    struct inode *VAR_5)
{
 struct btrfs_root *VAR_6 = FUNC_1(VAR_4)->root;
 struct btrfs_fs_info *VAR_7 = VAR_6->fs_info;
 int VAR_8;
 int VAR_9;
 bool VAR_10 = 0;

 if (!FUNC_11(VAR_0,
        &FUNC_1(VAR_5)->runtime_flags))
  return 0;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++) {
  const struct prop_handler *VAR_11 = &VAR_2[VAR_9];
  const char *VAR_12;
  u64 VAR_13 = 0;

  if (!VAR_11->inheritable)
   continue;

  VAR_12 = VAR_11->extract(VAR_5);
  if (!VAR_12)
   continue;





  VAR_8 = VAR_11->validate(VAR_12, FUNC_7(VAR_12));
  if (VAR_8)
   continue;
  if (VAR_10) {
   VAR_13 = FUNC_4(VAR_7, 1);
   VAR_8 = FUNC_2(VAR_6, VAR_3->block_rsv,
     VAR_13, VAR_1);
   if (VAR_8)
    return VAR_8;
  }

  VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_11->xattr_name, VAR_12,
         FUNC_7(VAR_12), 0);
  if (!VAR_8) {
   VAR_8 = VAR_11->apply(VAR_4, VAR_12, FUNC_7(VAR_12));
   if (VAR_8)
    FUNC_5(VAR_3, VAR_4, VAR_11->xattr_name,
            ((void*)0), 0, 0);
   else
    FUNC_6(VAR_0,
     &FUNC_1(VAR_4)->runtime_flags);
  }

  if (VAR_10) {
   FUNC_3(VAR_7, VAR_3->block_rsv,
     VAR_13);
   if (VAR_8)
    return VAR_8;
  }
  VAR_10 = 1;
 }

 return 0;
}
