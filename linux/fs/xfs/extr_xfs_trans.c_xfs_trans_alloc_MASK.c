
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct xfs_trans_res {scalar_t__ tr_logres; } ;
struct xfs_trans {int t_flags; int t_firstblock; int t_dfops; int t_busy; int t_items; struct xfs_mount* t_mountp; int t_magic; } ;
struct xfs_mount {int m_active_trans; TYPE_2__* m_super; } ;
struct TYPE_3__ {scalar_t__ frozen; } ;
struct TYPE_4__ {TYPE_1__ s_writers; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 struct xfs_trans* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct xfs_trans*,int ) ;
 int FUNC_6 (struct xfs_trans*) ;
 int FUNC_7 (struct xfs_trans*,struct xfs_trans_res*,int,int) ;
 int VAR_5 ;

int
FUNC_8(
 struct xfs_mount *VAR_6,
 struct xfs_trans_res *VAR_7,
 uint VAR_8,
 uint VAR_9,
 uint VAR_10,
 struct xfs_trans **VAR_11)
{
 struct xfs_trans *VAR_12;
 int VAR_13;






 VAR_12 = FUNC_3(VAR_5, 0);
 if (!(VAR_10 & VAR_3))
  FUNC_4(VAR_6->m_super);





 FUNC_1(VAR_7->tr_logres > 0 &&
  VAR_6->m_super->s_writers.frozen == VAR_1);
 FUNC_2(&VAR_6->m_active_trans);

 VAR_12->t_magic = VAR_2;
 VAR_12->t_flags = VAR_10;
 VAR_12->t_mountp = VAR_6;
 FUNC_0(&VAR_12->t_items);
 FUNC_0(&VAR_12->t_busy);
 FUNC_0(&VAR_12->t_dfops);
 VAR_12->t_firstblock = VAR_0;

 VAR_13 = FUNC_7(VAR_12, VAR_7, VAR_8, VAR_9);
 if (VAR_13) {
  FUNC_6(VAR_12);
  return VAR_13;
 }

 FUNC_5(VAR_12, VAR_4);

 *VAR_11 = VAR_12;
 return 0;
}
