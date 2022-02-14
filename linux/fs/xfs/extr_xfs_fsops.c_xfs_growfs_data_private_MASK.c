
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_17__ ;


typedef int xfs_trans_t ;
typedef scalar_t__ xfs_rfsblock_t ;
struct TYPE_22__ {scalar_t__ sb_dblocks; scalar_t__ sb_agblocks; int sb_agcount; } ;
struct TYPE_20__ {int m_maxagi; int m_alloc_set_aside; TYPE_5__ m_sb; int m_ddev_targp; } ;
typedef TYPE_1__ xfs_mount_t ;
struct TYPE_21__ {scalar_t__ newblocks; } ;
typedef TYPE_2__ xfs_growfs_data_t ;
typedef int xfs_buf_t ;
typedef int xfs_agnumber_t ;
struct xfs_perag {int dummy; } ;
struct aghdr_init_data {int agno; scalar_t__ agsize; int nfree; int buffer_list; } ;
struct TYPE_19__ {int tr_growdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_17__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int *,struct aghdr_init_data*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,struct aghdr_init_data*) ;
 int FUNC_8 (struct xfs_perag*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,scalar_t__,scalar_t__,int ,int **,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int,int*) ;
 struct xfs_perag* FUNC_16 (TYPE_1__*,scalar_t__) ;
 int FUNC_17 (struct xfs_perag*) ;
 int FUNC_18 (TYPE_5__*,scalar_t__) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (TYPE_1__*,int *,int ,int ,int ,int **) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int ,scalar_t__) ;
 int FUNC_25 (int *) ;

__attribute__((used)) static int
FUNC_26(
 xfs_mount_t *VAR_7,
 xfs_growfs_data_t *VAR_8)
{
 xfs_buf_t *VAR_9;
 int VAR_10;
 xfs_agnumber_t VAR_11;
 xfs_agnumber_t VAR_12 = 0;
 xfs_rfsblock_t VAR_13, VAR_14;
 xfs_rfsblock_t VAR_15;
 xfs_agnumber_t VAR_16;
 xfs_trans_t *VAR_17;
 struct aghdr_init_data VAR_18 = {};

 VAR_13 = VAR_8->newblocks;
 if (VAR_13 < VAR_7->m_sb.sb_dblocks)
  return -VAR_0;
 if ((VAR_10 = FUNC_18(&VAR_7->m_sb, VAR_13)))
  return VAR_10;
 VAR_10 = FUNC_12(VAR_7->m_ddev_targp,
    FUNC_2(VAR_7, VAR_13) - FUNC_3(VAR_7, 1),
    FUNC_3(VAR_7, 1), 0, &VAR_9, ((void*)0));
 if (VAR_10)
  return VAR_10;
 FUNC_13(VAR_9);

 VAR_15 = VAR_13;
 VAR_14 = FUNC_5(VAR_15, VAR_7->m_sb.sb_agblocks);
 VAR_11 = VAR_15 + (VAR_14 != 0);
 if (VAR_14 && VAR_14 < VAR_2) {
  VAR_11--;
  VAR_13 = (xfs_rfsblock_t)VAR_11 * VAR_7->m_sb.sb_agblocks;
  if (VAR_13 < VAR_7->m_sb.sb_dblocks)
   return -VAR_0;
 }
 VAR_15 = VAR_13 - VAR_7->m_sb.sb_dblocks;
 VAR_16 = VAR_7->m_sb.sb_agcount;


 if (VAR_11 > VAR_16) {
  VAR_10 = FUNC_15(VAR_7, VAR_11, &VAR_12);
  if (VAR_10)
   return VAR_10;
 }

 VAR_10 = FUNC_21(VAR_7, &FUNC_1(VAR_7)->tr_growdata,
   FUNC_4(VAR_7), 0, VAR_3, &VAR_17);
 if (VAR_10)
  return VAR_10;
 FUNC_0(&VAR_18.buffer_list);
 for (VAR_18.agno = VAR_11 - 1;
      VAR_18.agno >= VAR_16;
      VAR_18.agno--, VAR_15 -= VAR_18.agsize) {

  if (VAR_18.agno == VAR_11 - 1)
   VAR_18.agsize = VAR_13 -
    (VAR_18.agno * (xfs_rfsblock_t)VAR_7->m_sb.sb_agblocks);
  else
   VAR_18.agsize = VAR_7->m_sb.sb_agblocks;

  VAR_10 = FUNC_7(VAR_7, &VAR_18);
  if (VAR_10) {
   FUNC_10(&VAR_18.buffer_list);
   goto out_trans_cancel;
  }
 }
 VAR_10 = FUNC_11(&VAR_18.buffer_list);
 if (VAR_10)
  goto out_trans_cancel;

 FUNC_20(VAR_17, VAR_18.nfree);


 if (VAR_15) {
  VAR_10 = FUNC_6(VAR_7, VAR_17, &VAR_18, VAR_15);
  if (VAR_10)
   goto out_trans_cancel;
 }






 if (VAR_11 > VAR_16)
  FUNC_24(VAR_17, VAR_4, VAR_11 - VAR_16);
 if (VAR_13 > VAR_7->m_sb.sb_dblocks)
  FUNC_24(VAR_17, VAR_5,
     VAR_13 - VAR_7->m_sb.sb_dblocks);
 if (VAR_18.nfree)
  FUNC_24(VAR_17, VAR_6, VAR_18.nfree);
 FUNC_25(VAR_17);
 VAR_10 = FUNC_23(VAR_17);
 if (VAR_10)
  return VAR_10;


 if (VAR_12)
  VAR_7->m_maxagi = VAR_12;
 FUNC_19(VAR_7);
 VAR_7->m_alloc_set_aside = FUNC_9(VAR_7);





 if (VAR_15) {
  struct xfs_perag *VAR_19;

  VAR_19 = FUNC_16(VAR_7, VAR_18.agno);
  VAR_10 = FUNC_8(VAR_19);
  FUNC_17(VAR_19);
  if (VAR_10)
   return VAR_10;
 }






 VAR_10 = FUNC_14(VAR_7);
 if (VAR_10 == -VAR_1)
  VAR_10 = 0;
 return VAR_10;

out_trans_cancel:
 FUNC_22(VAR_17);
 return VAR_10;
}
