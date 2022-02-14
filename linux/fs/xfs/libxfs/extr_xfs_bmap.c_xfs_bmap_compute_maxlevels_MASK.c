
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* m_bmap_dmnr; int* m_bm_maxlevels; } ;
typedef TYPE_1__ xfs_mount_t ;
typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int,int ) ;

void
FUNC_2(
 xfs_mount_t *VAR_5,
 int VAR_6)
{
 int VAR_7;
 uint VAR_8;
 uint VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 if (VAR_6 == VAR_4) {
  VAR_9 = VAR_1;
  VAR_13 = FUNC_0(VAR_3);
 } else {
  VAR_9 = VAR_0;
  VAR_13 = FUNC_0(VAR_2);
 }
 VAR_10 = FUNC_1(VAR_13, 0);
 VAR_11 = VAR_5->m_bmap_dmnr[0];
 VAR_12 = VAR_5->m_bmap_dmnr[1];
 VAR_8 = (VAR_9 + VAR_11 - 1) / VAR_11;
 for (VAR_7 = 1; VAR_8 > 1; VAR_7++) {
  if (VAR_8 <= VAR_10)
   VAR_8 = 1;
  else
   VAR_8 = (VAR_8 + VAR_12 - 1) / VAR_12;
 }
 VAR_5->m_bm_maxlevels[VAR_6] = VAR_7;
}
