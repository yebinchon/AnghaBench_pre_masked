
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct extent_changeset {int bytes_changed; } ;
struct TYPE_8__ {TYPE_2__* root; int io_tree; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_5__ {int objectid; } ;
struct TYPE_6__ {TYPE_1__ root_key; TYPE_3__* fs_info; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,int,int ) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__,int ,struct extent_changeset*) ;
 int FUNC_4 (struct extent_changeset*) ;
 int FUNC_5 (struct extent_changeset*) ;
 int FUNC_6 (struct inode*,struct extent_changeset*,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct inode*,scalar_t__,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_5,
   struct extent_changeset *VAR_6, u64 VAR_7, u64 VAR_8,
   int VAR_9)
{
 struct extent_changeset VAR_10;
 int VAR_11 = VAR_4;
 int VAR_12;

 if (!FUNC_7(VAR_0,
        &FUNC_0(VAR_5)->root->fs_info->flags))
  return 0;


 FUNC_1(!VAR_9 && VAR_6);
 if (VAR_9 && VAR_6)
  return FUNC_6(VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_4(&VAR_10);
 VAR_12 = FUNC_3(&FUNC_0(VAR_5)->io_tree, VAR_7,
   VAR_7 + VAR_8 -1, VAR_2, &VAR_10);
 if (VAR_12 < 0)
  goto out;

 if (VAR_9)
  VAR_11 = VAR_3;
 FUNC_8(VAR_5, VAR_7, VAR_8,
     VAR_10.bytes_changed, VAR_11);
 if (VAR_9)
  FUNC_2(FUNC_0(VAR_5)->root->fs_info,
    FUNC_0(VAR_5)->root->root_key.objectid,
    VAR_10.bytes_changed, VAR_1);
 VAR_12 = VAR_10.bytes_changed;
out:
 FUNC_5(&VAR_10);
 return VAR_12;
}
