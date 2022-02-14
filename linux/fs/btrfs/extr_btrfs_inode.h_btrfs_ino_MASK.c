
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {scalar_t__ i_ino; } ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ objectid; } ;
struct btrfs_inode {TYPE_2__ vfs_inode; TYPE_1__ location; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline u64 FUNC_0(const struct btrfs_inode *VAR_1)
{
 u64 VAR_2 = VAR_1->location.objectid;





 if (!VAR_2 || VAR_1->location.type == VAR_0)
  VAR_2 = VAR_1->vfs_inode.i_ino;
 return VAR_2;
}
