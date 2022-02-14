
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct prop_handler {int (* apply ) (struct inode*,char const*,size_t) ;int xattr_name; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; int fs_info; } ;
struct TYPE_5__ {int runtime_flags; struct btrfs_root* root; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct inode*,char const*,size_t) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(void *VAR_1,
    const struct prop_handler *VAR_2,
    const char *VAR_3,
    size_t VAR_4)
{
 struct inode *VAR_5 = VAR_1;
 struct btrfs_root *VAR_6 = FUNC_0(VAR_5)->root;
 int VAR_7;

 VAR_7 = VAR_2->apply(VAR_5, VAR_3, VAR_4);
 if (FUNC_5(VAR_7))
  FUNC_2(VAR_6->fs_info,
      "error applying prop %s to ino %llu (root %llu): %d",
      VAR_2->xattr_name, FUNC_1(FUNC_0(VAR_5)),
      VAR_6->root_key.objectid, VAR_7);
 else
  FUNC_3(VAR_0, &FUNC_0(VAR_5)->runtime_flags);
}
