
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_agblock_t ;
struct TYPE_2__ {struct xfs_buf* agfl_bp; struct xfs_buf* agf_bp; int agno; } ;
struct xfs_scrub {TYPE_1__ sa; int tp; struct xfs_mount* mp; } ;
struct xfs_mount {int m_ddev_targp; int m_sb; } ;
struct xfs_buf {int * b_ops; } ;
struct xfs_bitmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_mount*) ;
 int FUNC_1 (struct xfs_mount*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct xfs_mount*,int) ;
 int VAR_3 ;
 int FUNC_3 (struct xfs_mount*,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_4 (struct xfs_mount*,int ,int ,int ,struct xfs_buf**) ;
 int FUNC_5 (struct xfs_bitmap*) ;
 int FUNC_6 (struct xfs_bitmap*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct xfs_mount*,int ,int ,int ,int ,int ,struct xfs_buf**,int *) ;
 int FUNC_9 (struct xfs_scrub*,struct xfs_buf*,struct xfs_bitmap*,int *) ;
 int FUNC_10 (struct xfs_scrub*,struct xfs_buf*,struct xfs_bitmap*,int ) ;
 int FUNC_11 (struct xfs_scrub*,struct xfs_buf*,int ) ;
 int FUNC_12 (struct xfs_scrub*,struct xfs_bitmap*,int *,int ) ;
 int FUNC_13 (struct xfs_scrub*) ;

int
FUNC_14(
 struct xfs_scrub *VAR_5)
{
 struct xfs_bitmap VAR_6;
 struct xfs_mount *VAR_7 = VAR_5->mp;
 struct xfs_buf *VAR_8;
 struct xfs_buf *VAR_9;
 xfs_agblock_t VAR_10;
 int VAR_11;


 if (!FUNC_7(&VAR_7->m_sb))
  return -VAR_1;

 FUNC_3(VAR_5->mp, &VAR_5->sa);
 FUNC_6(&VAR_6);






 VAR_11 = FUNC_4(VAR_7, VAR_5->tp, VAR_5->sa.agno, 0, &VAR_8);
 if (VAR_11)
  return VAR_11;
 if (!VAR_8)
  return -VAR_0;





 VAR_11 = FUNC_8(VAR_7, VAR_5->tp, VAR_7->m_ddev_targp,
   FUNC_1(VAR_7, VAR_5->sa.agno, FUNC_0(VAR_7)),
   FUNC_2(VAR_7, 1), 0, &VAR_9, ((void*)0));
 if (VAR_11)
  return VAR_11;
 VAR_9->b_ops = &VAR_4;


 VAR_11 = FUNC_9(VAR_5, VAR_8, &VAR_6, &VAR_10);
 if (VAR_11)
  goto err;






 FUNC_11(VAR_5, VAR_8, VAR_10);
 FUNC_10(VAR_5, VAR_9, &VAR_6, VAR_10);






 VAR_5->sa.agf_bp = VAR_8;
 VAR_5->sa.agfl_bp = VAR_9;
 VAR_11 = FUNC_13(VAR_5);
 if (VAR_11)
  goto err;


 return FUNC_12(VAR_5, &VAR_6, &VAR_3,
   VAR_2);
err:
 FUNC_5(&VAR_6);
 return VAR_11;
}
