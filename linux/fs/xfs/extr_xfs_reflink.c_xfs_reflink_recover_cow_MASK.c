
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_agnumber_t ;
struct TYPE_2__ {scalar_t__ sb_agcount; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;


 int FUNC_0 (struct xfs_mount*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(
 struct xfs_mount *VAR_0)
{
 xfs_agnumber_t VAR_1;
 int VAR_2 = 0;

 if (!FUNC_1(&VAR_0->m_sb))
  return 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->m_sb.sb_agcount; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2)
   break;
 }

 return VAR_2;
}
