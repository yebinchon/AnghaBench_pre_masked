
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xfs_extlen_t ;
struct TYPE_5__ {scalar_t__ ar_reserved; } ;
struct TYPE_4__ {scalar_t__ ar_reserved; } ;
struct xfs_perag {TYPE_2__ pag_rmapbt_resv; TYPE_1__ pag_meta_resv; } ;
typedef enum xfs_ag_resv_type { ____Placeholder_xfs_ag_resv_type } xfs_ag_resv_type ;
struct TYPE_6__ {int ar_reserved; } ;


 int FUNC_0 (int ) ;



 int FUNC_1 (struct xfs_perag*,int,scalar_t__) ;
 TYPE_3__* FUNC_2 (struct xfs_perag*,int) ;

xfs_extlen_t
FUNC_3(
 struct xfs_perag *VAR_0,
 enum xfs_ag_resv_type VAR_1)
{
 xfs_extlen_t VAR_2;

 VAR_2 = VAR_0->pag_meta_resv.ar_reserved + VAR_0->pag_rmapbt_resv.ar_reserved;
 switch (VAR_1) {
 case 130:
 case 128:
  VAR_2 -= FUNC_2(VAR_0, VAR_1)->ar_reserved;
  break;
 case 129:

  break;
 default:
  FUNC_0(0);
 }

 FUNC_1(VAR_0, VAR_1, VAR_2);

 return VAR_2;
}
