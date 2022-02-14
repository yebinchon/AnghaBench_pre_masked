
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sb_rblocks; } ;
struct TYPE_6__ {TYPE_1__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;

__attribute__((used)) static inline int
FUNC_1(
 xfs_mount_t *VAR_1)
{
 if (VAR_1->m_sb.sb_rblocks == 0)
  return 0;

 FUNC_0(VAR_1, "Not built with CONFIG_XFS_RT");
 return -VAR_0;
}
