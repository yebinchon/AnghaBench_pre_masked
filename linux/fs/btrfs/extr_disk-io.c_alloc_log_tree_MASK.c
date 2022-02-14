
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct TYPE_2__ {void* offset; int type; void* objectid; } ;
struct btrfs_root {struct extent_buffer* node; TYPE_1__ root_key; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 struct btrfs_root* FUNC_0 (struct extent_buffer*) ;
 struct btrfs_root* FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct btrfs_root*,struct btrfs_fs_info*,void*) ;
 struct btrfs_root* FUNC_4 (struct btrfs_fs_info*,int ) ;
 struct extent_buffer* FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,int ,void*,int *,int ,int ,int ) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (struct btrfs_root*) ;

__attribute__((used)) static struct btrfs_root *FUNC_9(struct btrfs_trans_handle *VAR_4,
      struct btrfs_fs_info *VAR_5)
{
 struct btrfs_root *VAR_6;
 struct extent_buffer *VAR_7;

 VAR_6 = FUNC_4(VAR_5, VAR_3);
 if (!VAR_6)
  return FUNC_1(-VAR_2);

 FUNC_3(VAR_6, VAR_5, VAR_1);

 VAR_6->root_key.objectid = VAR_1;
 VAR_6->root_key.type = VAR_0;
 VAR_6->root_key.offset = VAR_1;
 VAR_7 = FUNC_5(VAR_4, VAR_6, 0, VAR_1,
   ((void*)0), 0, 0, 0);
 if (FUNC_2(VAR_7)) {
  FUNC_8(VAR_6);
  return FUNC_0(VAR_7);
 }

 VAR_6->node = VAR_7;

 FUNC_6(VAR_6->node);
 FUNC_7(VAR_6->node);
 return VAR_6;
}
