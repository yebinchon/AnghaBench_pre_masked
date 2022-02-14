
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {scalar_t__ transid; } ;
struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_root {int state; TYPE_1__ root_key; int fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct extent_buffer*,int ) ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static inline int FUNC_5(struct btrfs_trans_handle *VAR_4,
       struct btrfs_root *VAR_5,
       struct extent_buffer *VAR_6)
{
 if (FUNC_2(VAR_5->fs_info))
  return 0;


 FUNC_3();
 if (FUNC_1(VAR_6) == VAR_4->transid &&
     !FUNC_0(VAR_6, VAR_1) &&
     !(VAR_5->root_key.objectid != VAR_3 &&
       FUNC_0(VAR_6, VAR_0)) &&
     !FUNC_4(VAR_2, &VAR_5->state))
  return 0;
 return 1;
}
