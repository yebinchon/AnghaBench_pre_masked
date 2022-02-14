
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_fsblock_t ;
typedef int xfs_dqid_t ;
typedef int uint ;
struct xfs_mount {TYPE_1__* m_quotainfo; } ;
struct TYPE_4__ {int if_flags; } ;
struct xfs_inode {TYPE_2__ i_df; } ;
struct xfs_iext_cursor {int dummy; } ;
struct xfs_bmbt_irec {int br_startoff; } ;
struct TYPE_3__ {int qi_dqperchunk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct xfs_inode*,TYPE_2__*,int,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 int FUNC_1 (struct xfs_inode*) ;
 int FUNC_2 (int *,struct xfs_inode*,int ) ;
 int FUNC_3 (struct xfs_inode*,int ) ;
 struct xfs_inode* FUNC_4 (struct xfs_mount*,int ) ;

__attribute__((used)) static int
FUNC_5(
 struct xfs_mount *VAR_3,
 uint VAR_4,
 xfs_dqid_t *VAR_5)
{
 struct xfs_inode *VAR_6 = FUNC_4(VAR_3, VAR_4);
 xfs_dqid_t VAR_7 = *VAR_5 + 1;
 uint VAR_8;
 struct xfs_bmbt_irec VAR_9;
 struct xfs_iext_cursor VAR_10;
 xfs_fsblock_t VAR_11;
 int VAR_12 = 0;


 if (VAR_7 < *VAR_5)
  return -VAR_0;


 if (VAR_7 % VAR_3->m_quotainfo->qi_dqperchunk) {
  *VAR_5 = VAR_7;
  return 0;
 }


 VAR_11 = (xfs_fsblock_t)VAR_7 / VAR_3->m_quotainfo->qi_dqperchunk;

 VAR_8 = FUNC_1(VAR_6);
 if (!(VAR_6->i_df.if_flags & VAR_2)) {
  VAR_12 = FUNC_2(((void*)0), VAR_6, VAR_1);
  if (VAR_12)
   return VAR_12;
 }

 if (FUNC_0(VAR_6, &VAR_6->i_df, VAR_11, &VAR_10, &VAR_9)) {

  if (VAR_9.br_startoff < VAR_11)
   VAR_9.br_startoff = VAR_11;
  *VAR_5 = VAR_9.br_startoff * VAR_3->m_quotainfo->qi_dqperchunk;
 } else {
  VAR_12 = -VAR_0;
 }

 FUNC_3(VAR_6, VAR_8);

 return VAR_12;
}
