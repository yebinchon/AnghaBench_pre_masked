
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_agnumber_t ;
struct xfs_trans {TYPE_2__* t_mountp; } ;
struct xfs_buf {int dummy; } ;
struct xfs_alloc_arg {scalar_t__ agno; int pag; struct xfs_buf* agbp; TYPE_2__* mp; struct xfs_trans* tp; } ;
struct TYPE_3__ {scalar_t__ sb_agcount; } ;
struct TYPE_4__ {TYPE_1__ m_sb; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xfs_alloc_arg*,int ,int) ;
 int FUNC_2 (struct xfs_alloc_arg*,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (int ) ;

int
FUNC_5(
 struct xfs_trans *VAR_2,
 xfs_agnumber_t VAR_3,
 struct xfs_buf **VAR_4)
{
 struct xfs_alloc_arg VAR_5;
 int VAR_6;

 FUNC_1(&VAR_5, 0, sizeof(struct xfs_alloc_arg));
 VAR_5.tp = VAR_2;
 VAR_5.mp = VAR_2->t_mountp;
 VAR_5.agno = VAR_3;





 if (VAR_5.agno >= VAR_5.mp->m_sb.sb_agcount)
  return -VAR_0;

 VAR_5.pag = FUNC_3(VAR_5.mp, VAR_5.agno);
 FUNC_0(VAR_5.pag);

 VAR_6 = FUNC_2(&VAR_5, VAR_1);
 if (VAR_6)
  goto out;

 *VAR_4 = VAR_5.agbp;
out:
 FUNC_4(VAR_5.pag);
 return VAR_6;
}
