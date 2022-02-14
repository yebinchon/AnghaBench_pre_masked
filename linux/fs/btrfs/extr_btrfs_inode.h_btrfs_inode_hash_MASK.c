
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(u64 VAR_1,
          const struct btrfs_root *VAR_2)
{
 u64 VAR_3 = VAR_1 ^ (VAR_2->root_key.objectid * VAR_0);





 return (unsigned long)VAR_3;
}
