
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_refs; int offset; int owner; int parent; int root_objectid; } ;
struct ref_action {TYPE_1__ ref; int root; int action; } ;
struct btrfs_fs_info {int dummy; } ;


 int FUNC_0 (struct btrfs_fs_info*,struct ref_action*) ;
 int FUNC_1 (struct btrfs_fs_info*,char*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct btrfs_fs_info *VAR_0,
       struct ref_action *VAR_1)
{
 FUNC_1(VAR_0,
"  Ref action %d, root %llu, ref_root %llu, parent %llu, owner %llu, offset %llu, num_refs %llu",
    VAR_1->action, VAR_1->root, VAR_1->ref.root_objectid, VAR_1->ref.parent,
    VAR_1->ref.owner, VAR_1->ref.offset, VAR_1->ref.num_refs);
 FUNC_0(VAR_0, VAR_1);
}
