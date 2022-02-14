
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nfs; } ;
struct msdos_sb_info {int nfs_build_inode_lock; TYPE_1__ options; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct msdos_sb_info *VAR_1)
{
 if (VAR_1->options.nfs == VAR_0)
  FUNC_0(&VAR_1->nfs_build_inode_lock);
}
