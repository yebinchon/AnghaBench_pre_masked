
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_ino_t ;
struct TYPE_3__ {scalar_t__ sb_rbmino; scalar_t__ sb_rsumino; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

bool
FUNC_2(
 struct xfs_mount *VAR_0,
 xfs_ino_t VAR_1)
{
 return VAR_1 == VAR_0->m_sb.sb_rbmino || VAR_1 == VAR_0->m_sb.sb_rsumino ||
  (FUNC_1(&VAR_0->m_sb) &&
   FUNC_0(&VAR_0->m_sb, VAR_1));
}
