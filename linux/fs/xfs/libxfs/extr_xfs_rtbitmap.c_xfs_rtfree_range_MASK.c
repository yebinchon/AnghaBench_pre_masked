
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef scalar_t__ xfs_rtblock_t ;
struct TYPE_9__ {scalar_t__ sb_rextents; } ;
struct TYPE_10__ {TYPE_1__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef int xfs_fsblock_t ;
typedef scalar_t__ xfs_extlen_t ;
typedef int xfs_buf_t ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int *,scalar_t__,int ,scalar_t__*) ;
 int FUNC_3 (TYPE_2__*,int *,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_4 (TYPE_2__*,int *,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (TYPE_2__*,int *,int ,int ,int,int **,int *) ;

int
FUNC_6(
 xfs_mount_t *VAR_0,
 xfs_trans_t *VAR_1,
 xfs_rtblock_t VAR_2,
 xfs_extlen_t VAR_3,
 xfs_buf_t **VAR_4,
 xfs_fsblock_t *VAR_5)
{
 xfs_rtblock_t VAR_6;
 int VAR_7;
 xfs_rtblock_t VAR_8;
 xfs_rtblock_t VAR_9;

 VAR_6 = VAR_2 + VAR_3 - 1;



 VAR_7 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, 1);
 if (VAR_7) {
  return VAR_7;
 }





 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, 0, &VAR_9);
 if (VAR_7) {
  return VAR_7;
 }



 VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_6, VAR_0->m_sb.sb_rextents - 1,
  &VAR_8);
 if (VAR_7)
  return VAR_7;




 if (VAR_9 < VAR_2) {
  VAR_7 = FUNC_5(VAR_0, VAR_1,
   FUNC_1(VAR_2 - VAR_9),
   FUNC_0(VAR_0, VAR_9), -1, VAR_4, VAR_5);
  if (VAR_7) {
   return VAR_7;
  }
 }




 if (VAR_8 > VAR_6) {
  VAR_7 = FUNC_5(VAR_0, VAR_1,
   FUNC_1(VAR_8 - VAR_6),
   FUNC_0(VAR_0, VAR_6 + 1), -1, VAR_4, VAR_5);
  if (VAR_7) {
   return VAR_7;
  }
 }




 VAR_7 = FUNC_5(VAR_0, VAR_1,
  FUNC_1(VAR_8 + 1 - VAR_9),
  FUNC_0(VAR_0, VAR_9), 1, VAR_4, VAR_5);
 return VAR_7;
}
