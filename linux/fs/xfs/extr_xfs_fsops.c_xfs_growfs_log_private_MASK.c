
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sb_logblocks; scalar_t__ sb_logstart; } ;
struct TYPE_8__ {TYPE_1__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_9__ {scalar_t__ newblocks; int isint; } ;
typedef TYPE_3__ xfs_growfs_log_t ;
typedef scalar_t__ xfs_extlen_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(
 xfs_mount_t *VAR_4,
 xfs_growfs_log_t *VAR_5)
{
 xfs_extlen_t VAR_6;

 VAR_6 = VAR_5->newblocks;
 if (VAR_6 < VAR_2 || VAR_6 < FUNC_0(VAR_4, VAR_3))
  return -VAR_0;
 if (VAR_6 == VAR_4->m_sb.sb_logblocks &&
     VAR_5->isint == (VAR_4->m_sb.sb_logstart != 0))
  return -VAR_0;






 return -VAR_1;
}
