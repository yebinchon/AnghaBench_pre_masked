
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef int xfs_suminfo_t ;
typedef size_t xfs_rtblock_t ;
struct TYPE_13__ {int* m_rsum_cache; } ;
typedef TYPE_1__ xfs_mount_t ;
typedef scalar_t__ xfs_fsblock_t ;
struct TYPE_14__ {scalar_t__ b_addr; } ;
typedef TYPE_2__ xfs_buf_t ;
typedef scalar_t__ uint ;


 int FUNC_0 (TYPE_1__*,int,size_t) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int* FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_1__*,int *,scalar_t__,int,TYPE_2__**) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_2__*,scalar_t__,scalar_t__) ;

int
FUNC_6(
 xfs_mount_t *VAR_0,
 xfs_trans_t *VAR_1,
 int VAR_2,
 xfs_rtblock_t VAR_3,
 int VAR_4,
 xfs_buf_t **VAR_5,
 xfs_fsblock_t *VAR_6,
 xfs_suminfo_t *VAR_7)
{
 xfs_buf_t *VAR_8;
 int VAR_9;
 xfs_fsblock_t VAR_10;
 int VAR_11;
 xfs_suminfo_t *VAR_12;




 VAR_11 = FUNC_0(VAR_0, VAR_2, VAR_3);



 VAR_10 = FUNC_1(VAR_0, VAR_11);



 if (*VAR_5 && *VAR_6 == VAR_10)
  VAR_8 = *VAR_5;



 else {



  if (*VAR_5)
   FUNC_4(VAR_1, *VAR_5);
  VAR_9 = FUNC_3(VAR_0, VAR_1, VAR_10, 1, &VAR_8);
  if (VAR_9) {
   return VAR_9;
  }



  *VAR_5 = VAR_8;
  *VAR_6 = VAR_10;
 }



 VAR_12 = FUNC_2(VAR_0, VAR_8, VAR_11);
 if (VAR_4) {
  uint VAR_13 = (uint)((char *)VAR_12 - (char *)VAR_8->b_addr);

  *VAR_12 += VAR_4;
  if (VAR_0->m_rsum_cache) {
   if (*VAR_12 == 0 && VAR_2 == VAR_0->m_rsum_cache[VAR_3])
    VAR_0->m_rsum_cache[VAR_3]++;
   if (*VAR_12 != 0 && VAR_2 < VAR_0->m_rsum_cache[VAR_3])
    VAR_0->m_rsum_cache[VAR_3] = VAR_2;
  }
  FUNC_5(VAR_1, VAR_8, VAR_13, VAR_13 + sizeof(*VAR_12) - 1);
 }
 if (VAR_7)
  *VAR_7 = *VAR_12;
 return 0;
}
