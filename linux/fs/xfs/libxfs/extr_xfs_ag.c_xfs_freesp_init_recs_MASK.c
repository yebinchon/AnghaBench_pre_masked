
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_agblock_t ;
struct TYPE_2__ {int sb_logblocks; int sb_logstart; } ;
struct xfs_mount {scalar_t__ m_ag_prealloc_blocks; TYPE_1__ m_sb; } ;
struct xfs_buf {int dummy; } ;
struct xfs_btree_block {scalar_t__ bb_numrecs; } ;
struct xfs_alloc_rec {void* ar_blockcount; void* ar_startblock; } ;
struct aghdr_init_data {scalar_t__ agsize; } ;


 int FUNC_0 (int) ;
 struct xfs_alloc_rec* FUNC_1 (struct xfs_mount*,struct xfs_btree_block*,int) ;
 struct xfs_btree_block* FUNC_2 (struct xfs_buf*) ;
 scalar_t__ FUNC_3 (struct xfs_mount*,int ) ;
 int FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (void**,int ) ;
 scalar_t__ FUNC_6 (void*) ;
 void* FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (struct xfs_mount*,struct aghdr_init_data*) ;

__attribute__((used)) static void
FUNC_9(
 struct xfs_mount *VAR_0,
 struct xfs_buf *VAR_1,
 struct aghdr_init_data *VAR_2)
{
 struct xfs_alloc_rec *VAR_3;
 struct xfs_btree_block *VAR_4 = FUNC_2(VAR_1);

 VAR_3 = FUNC_1(VAR_0, FUNC_2(VAR_1), 1);
 VAR_3->ar_startblock = FUNC_7(VAR_0->m_ag_prealloc_blocks);

 if (FUNC_8(VAR_0, VAR_2)) {
  struct xfs_alloc_rec *VAR_5;
  xfs_agblock_t VAR_6 = FUNC_3(VAR_0,
       VAR_0->m_sb.sb_logstart);

  FUNC_0(VAR_6 >= VAR_0->m_ag_prealloc_blocks);
  if (VAR_6 != VAR_0->m_ag_prealloc_blocks) {



   VAR_3->ar_blockcount = FUNC_7(VAR_6 -
      VAR_0->m_ag_prealloc_blocks);
   VAR_5 = VAR_3 + 1;





   VAR_5->ar_startblock = FUNC_7(
     FUNC_6(VAR_3->ar_startblock) +
     FUNC_6(VAR_3->ar_blockcount));
   VAR_3 = VAR_5;
   FUNC_4(&VAR_4->bb_numrecs, 1);
  }



  FUNC_5(&VAR_3->ar_startblock, VAR_0->m_sb.sb_logblocks);
 }







 VAR_3->ar_blockcount = FUNC_7(VAR_2->agsize -
       FUNC_6(VAR_3->ar_startblock));
 if (!VAR_3->ar_blockcount)
  VAR_4->bb_numrecs = 0;
}
