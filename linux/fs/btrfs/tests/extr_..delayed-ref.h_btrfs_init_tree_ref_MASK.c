
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct TYPE_2__ {int level; void* root; } ;
struct btrfs_ref {int type; TYPE_1__ tree_ref; void* real_root; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct btrfs_ref *VAR_1,
    int VAR_2, u64 VAR_3)
{

 if (!VAR_1->real_root)
  VAR_1->real_root = VAR_3;
 VAR_1->tree_ref.level = VAR_2;
 VAR_1->tree_ref.root = VAR_3;
 VAR_1->type = VAR_0;
}
