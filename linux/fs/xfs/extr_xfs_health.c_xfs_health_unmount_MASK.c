
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_agnumber_t ;
struct xfs_perag {int dummy; } ;
struct TYPE_2__ {scalar_t__ sb_agcount; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;


 scalar_t__ FUNC_0 (struct xfs_mount*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct xfs_mount*,scalar_t__,unsigned int) ;
 int FUNC_2 (struct xfs_mount*,unsigned int) ;
 int FUNC_3 (struct xfs_mount*,unsigned int) ;
 int FUNC_4 (struct xfs_perag*,unsigned int*,unsigned int*) ;
 int FUNC_5 (struct xfs_mount*,unsigned int) ;
 int FUNC_6 (struct xfs_mount*,unsigned int*,unsigned int*) ;
 struct xfs_perag* FUNC_7 (struct xfs_mount*,scalar_t__) ;
 int FUNC_8 (struct xfs_perag*) ;
 int FUNC_9 (struct xfs_mount*,unsigned int*,unsigned int*) ;
 int FUNC_10 (struct xfs_mount*,char*) ;

void
FUNC_11(
 struct xfs_mount *VAR_1)
{
 struct xfs_perag *VAR_2;
 xfs_agnumber_t VAR_3;
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = 0;
 bool VAR_6 = 0;

 if (FUNC_0(VAR_1))
  return;


 for (VAR_3 = 0; VAR_3 < VAR_1->m_sb.sb_agcount; VAR_3++) {
  VAR_2 = FUNC_7(VAR_1, VAR_3);
  FUNC_4(VAR_2, &VAR_4, &VAR_5);
  if (VAR_4) {
   FUNC_1(VAR_1, VAR_3, VAR_4);
   VAR_6 = 1;
  }
  FUNC_8(VAR_2);
 }


 FUNC_9(VAR_1, &VAR_4, &VAR_5);
 if (VAR_4) {
  FUNC_3(VAR_1, VAR_4);
  VAR_6 = 1;
 }





 FUNC_6(VAR_1, &VAR_4, &VAR_5);
 if (VAR_4 & ~VAR_0) {
  FUNC_2(VAR_1, VAR_4);
  VAR_6 = 1;
 }

 if (VAR_6) {
  FUNC_10(VAR_1,
"Uncorrected metadata errors detected; please run xfs_repair.");
  if (VAR_4 & VAR_0)
   FUNC_5(VAR_1, VAR_0);
 }
}
