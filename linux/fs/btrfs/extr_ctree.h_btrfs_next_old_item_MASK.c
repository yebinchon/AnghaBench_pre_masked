
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__* slots; int * nodes; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct btrfs_root*,struct btrfs_path*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct btrfs_root *VAR_0,
          struct btrfs_path *VAR_1, u64 VAR_2)
{
 ++VAR_1->slots[0];
 if (VAR_1->slots[0] >= FUNC_0(VAR_1->nodes[0]))
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 return 0;
}
