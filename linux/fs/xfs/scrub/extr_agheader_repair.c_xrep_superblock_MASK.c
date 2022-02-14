
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_agnumber_t ;
struct xfs_scrub {int tp; TYPE_1__* sm; struct xfs_mount* mp; } ;
struct xfs_mount {int m_sb; } ;
struct xfs_buf {int b_length; } ;
struct TYPE_2__ {scalar_t__ sm_agno; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xfs_buf*) ;
 int FUNC_2 (struct xfs_buf*,int ,scalar_t__) ;
 int FUNC_3 (struct xfs_mount*,int ,scalar_t__,struct xfs_buf**) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,struct xfs_buf*,int ) ;
 int FUNC_6 (int ,struct xfs_buf*,int ,scalar_t__) ;

int
FUNC_7(
 struct xfs_scrub *VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_2->mp;
 struct xfs_buf *VAR_4;
 xfs_agnumber_t VAR_5;
 int VAR_6;


 VAR_5 = VAR_2->sm->sm_agno;
 if (VAR_5 == 0)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_3, VAR_2->tp, VAR_5, &VAR_4);
 if (VAR_6)
  return VAR_6;


 FUNC_2(VAR_4, 0, FUNC_0(VAR_4->b_length));
 FUNC_4(FUNC_1(VAR_4), &VAR_3->m_sb);


 FUNC_5(VAR_2->tp, VAR_4, VAR_1);
 FUNC_6(VAR_2->tp, VAR_4, 0, FUNC_0(VAR_4->b_length) - 1);
 return VAR_6;
}
