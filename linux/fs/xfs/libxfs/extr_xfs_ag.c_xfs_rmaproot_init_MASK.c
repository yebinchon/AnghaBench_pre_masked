
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_rmap_rec {scalar_t__ rm_offset; void* rm_owner; void* rm_blockcount; void* rm_startblock; } ;
struct TYPE_2__ {int sb_logblocks; int sb_logstart; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_buf {int dummy; } ;
struct xfs_btree_block {int bb_numrecs; } ;
struct aghdr_init_data {int agno; } ;


 int FUNC_0 (struct xfs_mount*) ;
 int VAR_0 ;
 struct xfs_btree_block* FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (struct xfs_mount*,int ) ;
 int FUNC_3 (struct xfs_mount*) ;
 int FUNC_4 (struct xfs_mount*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct xfs_rmap_rec* FUNC_5 (struct xfs_btree_block*,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int) ;
 void* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct xfs_mount*,struct aghdr_init_data*) ;
 int FUNC_11 (struct xfs_mount*,struct xfs_buf*,int ,int ,int,int ) ;
 int FUNC_12 (struct xfs_mount*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_14(
 struct xfs_mount *VAR_6,
 struct xfs_buf *VAR_7,
 struct aghdr_init_data *VAR_8)
{
 struct xfs_btree_block *VAR_9 = FUNC_1(VAR_7);
 struct xfs_rmap_rec *VAR_10;

 FUNC_11(VAR_6, VAR_7, VAR_0, 0, 4, VAR_8->agno);
 VAR_10 = FUNC_5(VAR_9, 1);
 VAR_10->rm_startblock = 0;
 VAR_10->rm_blockcount = FUNC_8(FUNC_0(VAR_6));
 VAR_10->rm_owner = FUNC_9(VAR_2);
 VAR_10->rm_offset = 0;


 VAR_10 = FUNC_5(VAR_9, 2);
 VAR_10->rm_startblock = FUNC_8(FUNC_0(VAR_6));
 VAR_10->rm_blockcount = FUNC_8(2);
 VAR_10->rm_owner = FUNC_9(VAR_1);
 VAR_10->rm_offset = 0;


 VAR_10 = FUNC_5(VAR_9, 3);
 VAR_10->rm_startblock = FUNC_8(FUNC_3(VAR_6));
 VAR_10->rm_blockcount = FUNC_8(FUNC_4(VAR_6) -
       FUNC_3(VAR_6));
 VAR_10->rm_owner = FUNC_9(VAR_3);
 VAR_10->rm_offset = 0;


 VAR_10 = FUNC_5(VAR_9, 4);
 VAR_10->rm_startblock = FUNC_8(FUNC_4(VAR_6));
 VAR_10->rm_blockcount = FUNC_8(1);
 VAR_10->rm_owner = FUNC_9(VAR_1);
 VAR_10->rm_offset = 0;


 if (FUNC_13(&VAR_6->m_sb)) {
  VAR_10 = FUNC_5(VAR_9, 5);
  VAR_10->rm_startblock = FUNC_8(FUNC_12(VAR_6));
  VAR_10->rm_blockcount = FUNC_8(1);
  VAR_10->rm_owner = FUNC_9(VAR_5);
  VAR_10->rm_offset = 0;
  FUNC_6(&VAR_9->bb_numrecs, 1);
 }


 if (FUNC_10(VAR_6, VAR_8)) {
  VAR_10 = FUNC_5(VAR_9,
    FUNC_7(VAR_9->bb_numrecs) + 1);
  VAR_10->rm_startblock = FUNC_8(
    FUNC_2(VAR_6, VAR_6->m_sb.sb_logstart));
  VAR_10->rm_blockcount = FUNC_8(VAR_6->m_sb.sb_logblocks);
  VAR_10->rm_owner = FUNC_9(VAR_4);
  VAR_10->rm_offset = 0;
  FUNC_6(&VAR_9->bb_numrecs, 1);
 }
}
