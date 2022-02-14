
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_agnumber_t ;
struct xfs_perag {int dummy; } ;
struct TYPE_2__ {scalar_t__ sb_agcount; } ;
struct xfs_mount {int m_finobt_nores; TYPE_1__ m_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_perag*,int *) ;
 int FUNC_1 (struct xfs_mount*,int ) ;
 struct xfs_perag* FUNC_2 (struct xfs_mount*,scalar_t__) ;
 int FUNC_3 (struct xfs_perag*) ;
 int FUNC_4 (struct xfs_mount*,char*,int) ;

int
FUNC_5(
 struct xfs_mount *VAR_2)
{
 xfs_agnumber_t VAR_3;
 struct xfs_perag *VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 VAR_2->m_finobt_nores = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2->m_sb.sb_agcount; VAR_3++) {
  VAR_4 = FUNC_2(VAR_2, VAR_3);
  VAR_6 = FUNC_0(VAR_4, ((void*)0));
  FUNC_3(VAR_4);
  if (VAR_6 && !VAR_5)
   VAR_5 = VAR_6;
 }

 if (VAR_5 && VAR_5 != -VAR_0) {
  FUNC_4(VAR_2,
 "Error %d reserving per-AG metadata reserve pool.", VAR_5);
  FUNC_1(VAR_2, VAR_1);
 }

 return VAR_5;
}
