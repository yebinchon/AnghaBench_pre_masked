
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_extlen_t ;
struct TYPE_3__ {int ar_reserved; int ar_asked; } ;
struct TYPE_4__ {int ar_asked; int ar_reserved; } ;
struct xfs_perag {int pagf_freeblks; int pagf_flcount; int pag_mount; TYPE_1__ pag_rmapbt_resv; TYPE_2__ pag_meta_resv; } ;
typedef enum xfs_ag_resv_type { ____Placeholder_xfs_ag_resv_type } xfs_ag_resv_type ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct xfs_perag*,int,int) ;

bool
FUNC_3(
 struct xfs_perag *VAR_2,
 enum xfs_ag_resv_type VAR_3)
{
 xfs_extlen_t VAR_4;
 xfs_extlen_t VAR_5;

 switch (VAR_3) {
 case 129:
  VAR_4 = VAR_2->pagf_freeblks - VAR_2->pag_rmapbt_resv.ar_reserved;
  VAR_5 = VAR_2->pag_meta_resv.ar_asked;
  break;
 case 128:
  VAR_4 = VAR_2->pagf_freeblks + VAR_2->pagf_flcount -
   VAR_2->pag_meta_resv.ar_reserved;
  VAR_5 = VAR_2->pag_rmapbt_resv.ar_asked;
  break;
 default:
  FUNC_0(0);
  return 0;
 }

 FUNC_2(VAR_2, VAR_3, VAR_4);


 return FUNC_1(VAR_4 < VAR_5 / 10 || VAR_4 < VAR_0,
   VAR_2->pag_mount, VAR_1);
}
