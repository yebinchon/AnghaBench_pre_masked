
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_agnumber_t ;
struct xfs_perag {int dummy; } ;
struct TYPE_2__ {scalar_t__ sb_agcount; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;


 int FUNC_0 (struct xfs_perag*) ;
 struct xfs_perag* FUNC_1 (struct xfs_mount*,scalar_t__) ;
 int FUNC_2 (struct xfs_perag*) ;
 int FUNC_3 (struct xfs_mount*,char*,int) ;

int
FUNC_4(
 struct xfs_mount *VAR_0)
{
 xfs_agnumber_t VAR_1;
 struct xfs_perag *VAR_2;
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_1 = 0; VAR_1 < VAR_0->m_sb.sb_agcount; VAR_1++) {
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  VAR_4 = FUNC_0(VAR_2);
  FUNC_2(VAR_2);
  if (VAR_4 && !VAR_3)
   VAR_3 = VAR_4;
 }

 if (VAR_3)
  FUNC_3(VAR_0,
 "Error %d freeing per-AG metadata reserve pool.", VAR_3);

 return VAR_3;
}
