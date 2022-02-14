
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_fsblock_t ;
typedef int xfs_btnum_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_2__ {int agno; } ;
struct xfs_scrub {TYPE_1__ sa; struct xfs_mount* mp; struct xfs_trans* tp; } ;
struct xfs_mount {int m_ddev_targp; } ;
struct xfs_buf_ops {int dummy; } ;
struct xfs_buf {struct xfs_buf_ops const* b_ops; int b_length; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct xfs_mount*,int ) ;
 int FUNC_3 (struct xfs_mount*,int ) ;
 int FUNC_4 (struct xfs_mount*,int) ;
 int FUNC_5 (struct xfs_mount*,int ) ;
 int FUNC_6 (struct xfs_mount*,int ,int ,int ) ;
 int FUNC_7 (struct xfs_mount*,struct xfs_buf*,int ,int ,int ,int ) ;
 int FUNC_8 (struct xfs_buf*,int ,scalar_t__) ;
 int FUNC_9 (struct xfs_trans*,struct xfs_buf*,int ) ;
 struct xfs_buf* FUNC_10 (struct xfs_trans*,int ,int ,int ,int ) ;
 int FUNC_11 (struct xfs_trans*,struct xfs_buf*,int ,scalar_t__) ;

int
FUNC_12(
 struct xfs_scrub *VAR_1,
 xfs_fsblock_t VAR_2,
 struct xfs_buf **VAR_3,
 xfs_btnum_t VAR_4,
 const struct xfs_buf_ops *VAR_5)
{
 struct xfs_trans *VAR_6 = VAR_1->tp;
 struct xfs_mount *VAR_7 = VAR_1->mp;
 struct xfs_buf *VAR_8;

 FUNC_6(VAR_7, FUNC_3(VAR_7, VAR_2),
   FUNC_2(VAR_7, VAR_2), VAR_4);

 FUNC_0(FUNC_3(VAR_7, VAR_2) == VAR_1->sa.agno);
 VAR_8 = FUNC_10(VAR_6, VAR_7->m_ddev_targp, FUNC_5(VAR_7, VAR_2),
   FUNC_4(VAR_7, 1), 0);
 FUNC_8(VAR_8, 0, FUNC_1(VAR_8->b_length));
 FUNC_7(VAR_7, VAR_8, VAR_4, 0, 0, VAR_1->sa.agno);
 FUNC_9(VAR_6, VAR_8, VAR_0);
 FUNC_11(VAR_6, VAR_8, 0, FUNC_1(VAR_8->b_length) - 1);
 VAR_8->b_ops = VAR_5;
 *VAR_3 = VAR_8;

 return 0;
}
