
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_agnumber_t ;
typedef scalar_t__ xfs_agino_t ;
struct TYPE_2__ {scalar_t__ sb_agcount; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;


 unsigned long long VAR_0 ;
 int FUNC_0 (struct xfs_mount*,scalar_t__,scalar_t__*,scalar_t__*) ;

void
FUNC_1(
 struct xfs_mount *VAR_1,
 unsigned long long *VAR_2,
 unsigned long long *VAR_3)
{
 unsigned long long VAR_4 = 0;
 xfs_agnumber_t VAR_5;


 *VAR_2 = VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_1->m_sb.sb_agcount; VAR_5++) {
  xfs_agino_t VAR_6, VAR_7;

  FUNC_0(VAR_1, VAR_5, &VAR_6, &VAR_7);
  VAR_4 += VAR_7 - VAR_6 + 1;
 }
 *VAR_3 = VAR_4;
}
