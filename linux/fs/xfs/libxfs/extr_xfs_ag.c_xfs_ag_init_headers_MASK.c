
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sb_blocksize; } ;
struct xfs_mount {scalar_t__ m_ag_prealloc_blocks; TYPE_1__ m_sb; } ;
struct xfs_aghdr_grow_data {scalar_t__ daddr; int need_init; int * ops; int * work; int type; int numblks; } ;
struct aghdr_init_data {scalar_t__ daddr; int type; int numblks; scalar_t__ agsize; int nfree; int agno; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct xfs_mount*,int ,int ) ;
 int FUNC_2 (struct xfs_mount*) ;
 int FUNC_3 (struct xfs_mount*) ;
 int FUNC_4 (struct xfs_mount*) ;
 scalar_t__ FUNC_5 (struct xfs_mount*,int ,int ) ;
 int FUNC_6 (struct xfs_mount*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (struct xfs_mount*) ;
 int FUNC_8 (struct xfs_mount*) ;
 int FUNC_9 (struct xfs_mount*,int) ;
 int FUNC_10 (struct xfs_mount*) ;
 int FUNC_11 (struct xfs_mount*) ;
 int VAR_4 ;
 int FUNC_12 (struct xfs_mount*,struct aghdr_init_data*,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_13 (struct xfs_mount*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int VAR_22 ;

int
FUNC_17(
 struct xfs_mount *VAR_23,
 struct aghdr_init_data *VAR_24)

{
 struct xfs_aghdr_grow_data VAR_25[] = {
 {
  .daddr = FUNC_5(VAR_23, VAR_24->agno, VAR_4),
  .numblks = FUNC_9(VAR_23, 1),
  .ops = &VAR_21,
  .work = &VAR_22,
  .need_init = 1
 },
 {
  .daddr = FUNC_5(VAR_23, VAR_24->agno, FUNC_3(VAR_23)),
  .numblks = FUNC_9(VAR_23, 1),
  .ops = &VAR_5,
  .work = &VAR_6,
  .need_init = 1
 },
 {
  .daddr = FUNC_5(VAR_23, VAR_24->agno, FUNC_2(VAR_23)),
  .numblks = FUNC_9(VAR_23, 1),
  .ops = &VAR_7,
  .work = &VAR_8,
  .need_init = 1
 },
 {
  .daddr = FUNC_5(VAR_23, VAR_24->agno, FUNC_4(VAR_23)),
  .numblks = FUNC_9(VAR_23, 1),
  .ops = &VAR_9,
  .work = &VAR_10,
  .need_init = 1
 },
 {
  .daddr = FUNC_1(VAR_23, VAR_24->agno, FUNC_6(VAR_23)),
  .numblks = FUNC_0(VAR_23->m_sb.sb_blocksize),
  .ops = &VAR_11,
  .work = &VAR_12,
  .need_init = 1
 },
 {
  .daddr = FUNC_1(VAR_23, VAR_24->agno, FUNC_7(VAR_23)),
  .numblks = FUNC_0(VAR_23->m_sb.sb_blocksize),
  .ops = &VAR_14,
  .work = &VAR_15,
  .need_init = 1
 },
 {
  .daddr = FUNC_1(VAR_23, VAR_24->agno, FUNC_10(VAR_23)),
  .numblks = FUNC_0(VAR_23->m_sb.sb_blocksize),
  .ops = &VAR_17,
  .work = &VAR_13,
  .type = VAR_1,
  .need_init = 1
 },
 {
  .daddr = FUNC_1(VAR_23, VAR_24->agno, FUNC_8(VAR_23)),
  .numblks = FUNC_0(VAR_23->m_sb.sb_blocksize),
  .ops = &VAR_16,
  .work = &VAR_13,
  .type = VAR_0,
  .need_init = FUNC_14(&VAR_23->m_sb)
 },
 {
  .daddr = FUNC_1(VAR_23, VAR_24->agno, FUNC_11(VAR_23)),
  .numblks = FUNC_0(VAR_23->m_sb.sb_blocksize),
  .ops = &VAR_19,
  .work = &VAR_20,
  .need_init = FUNC_16(&VAR_23->m_sb)
 },
 {
  .daddr = FUNC_1(VAR_23, VAR_24->agno, FUNC_13(VAR_23)),
  .numblks = FUNC_0(VAR_23->m_sb.sb_blocksize),
  .ops = &VAR_18,
  .work = &VAR_13,
  .type = VAR_2,
  .need_init = FUNC_15(&VAR_23->m_sb)
 },
 {
  .daddr = VAR_3,
 }
 };
 struct xfs_aghdr_grow_data *VAR_26;
 int VAR_27 = 0;


 VAR_24->nfree += VAR_24->agsize - VAR_23->m_ag_prealloc_blocks;
 for (VAR_26 = &VAR_25[0]; VAR_26->daddr != VAR_3; VAR_26++) {
  if (!VAR_26->need_init)
   continue;

  VAR_24->daddr = VAR_26->daddr;
  VAR_24->numblks = VAR_26->numblks;
  VAR_24->type = VAR_26->type;
  VAR_27 = FUNC_12(VAR_23, VAR_24, VAR_26->work, VAR_26->ops);
  if (VAR_27)
   break;
 }
 return VAR_27;
}
