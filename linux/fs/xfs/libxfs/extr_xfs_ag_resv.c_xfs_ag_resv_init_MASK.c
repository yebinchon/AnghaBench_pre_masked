
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xfs_extlen_t ;
typedef int xfs_agnumber_t ;
struct xfs_trans {int dummy; } ;
struct TYPE_5__ {scalar_t__ ar_asked; } ;
struct TYPE_4__ {scalar_t__ ar_asked; } ;
struct xfs_perag {scalar_t__ pagf_freeblks; scalar_t__ pagf_flcount; int pag_agno; struct xfs_mount* pag_mount; TYPE_2__ pag_rmapbt_resv; TYPE_1__ pag_meta_resv; } ;
struct xfs_mount {int m_finobt_nores; } ;
struct TYPE_6__ {scalar_t__ ar_reserved; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xfs_perag*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct xfs_mount*,struct xfs_trans*,int ,int ) ;
 int FUNC_3 (struct xfs_mount*,struct xfs_trans*,int ,scalar_t__*,scalar_t__*) ;
 TYPE_3__* FUNC_4 (struct xfs_perag*,int ) ;
 int FUNC_5 (struct xfs_mount*,struct xfs_trans*,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (struct xfs_mount*,struct xfs_trans*,int ,scalar_t__*,scalar_t__*) ;

int
FUNC_7(
 struct xfs_perag *VAR_2,
 struct xfs_trans *VAR_3)
{
 struct xfs_mount *VAR_4 = VAR_2->pag_mount;
 xfs_agnumber_t VAR_5 = VAR_2->pag_agno;
 xfs_extlen_t VAR_6;
 xfs_extlen_t VAR_7;
 int VAR_8 = 0;


 if (VAR_2->pag_meta_resv.ar_asked == 0) {
  VAR_6 = VAR_7 = 0;

  VAR_8 = FUNC_5(VAR_4, VAR_3, VAR_5, &VAR_6, &VAR_7);
  if (VAR_8)
   goto out;

  VAR_8 = FUNC_3(VAR_4, VAR_3, VAR_5, &VAR_6, &VAR_7);
  if (VAR_8)
   goto out;

  VAR_8 = FUNC_1(VAR_2, VAR_0,
    VAR_6, VAR_7);
  if (VAR_8) {







   VAR_6 = VAR_7 = 0;

   VAR_4->m_finobt_nores = 1;

   VAR_8 = FUNC_5(VAR_4, VAR_3, VAR_5, &VAR_6,
     &VAR_7);
   if (VAR_8)
    goto out;

   VAR_8 = FUNC_1(VAR_2, VAR_0,
     VAR_6, VAR_7);
   if (VAR_8)
    goto out;
  }
 }


 if (VAR_2->pag_rmapbt_resv.ar_asked == 0) {
  VAR_6 = VAR_7 = 0;

  VAR_8 = FUNC_6(VAR_4, VAR_3, VAR_5, &VAR_6, &VAR_7);
  if (VAR_8)
   goto out;

  VAR_8 = FUNC_1(VAR_2, VAR_1, VAR_6, VAR_7);
  if (VAR_8)
   goto out;
 }
out:
 return VAR_8;
}
