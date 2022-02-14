
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_extlen_t ;
struct xfs_perag {scalar_t__ pag_agno; TYPE_1__* pag_mount; } ;
struct xfs_ag_resv {scalar_t__ ar_orig_reserved; scalar_t__ ar_asked; scalar_t__ ar_reserved; } ;
typedef enum xfs_ag_resv_type { ____Placeholder_xfs_ag_resv_type } xfs_ag_resv_type ;
struct TYPE_3__ {int m_ag_max_usable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_perag*,int,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int,int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int) ;
 struct xfs_ag_resv* FUNC_3 (struct xfs_perag*,int) ;

__attribute__((used)) static int
FUNC_4(
 struct xfs_perag *VAR_2,
 enum xfs_ag_resv_type VAR_3)
{
 struct xfs_ag_resv *VAR_4;
 xfs_extlen_t VAR_5;
 int VAR_6;

 FUNC_0(VAR_2, VAR_3, 0);

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_2->pag_agno == 0)
  VAR_2->pag_mount->m_ag_max_usable += VAR_4->ar_asked;





 if (VAR_3 == VAR_0)
  VAR_5 = VAR_4->ar_orig_reserved;
 else
  VAR_5 = VAR_4->ar_reserved;
 VAR_6 = FUNC_2(VAR_2->pag_mount, VAR_5, 1);
 VAR_4->ar_reserved = 0;
 VAR_4->ar_asked = 0;
 VAR_4->ar_orig_reserved = 0;

 if (VAR_6)
  FUNC_1(VAR_2->pag_mount, VAR_2->pag_agno,
    VAR_6, VAR_1);
 return VAR_6;
}
