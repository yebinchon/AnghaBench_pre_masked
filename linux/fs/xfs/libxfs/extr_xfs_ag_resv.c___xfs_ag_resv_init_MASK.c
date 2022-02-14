
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_extlen_t ;
struct xfs_perag {int pag_agno; struct xfs_mount* pag_mount; } ;
struct xfs_mount {int m_ag_max_usable; } ;
struct xfs_ag_resv {scalar_t__ ar_reserved; scalar_t__ ar_orig_reserved; scalar_t__ ar_asked; } ;
typedef int int64_t ;
typedef enum xfs_ag_resv_type { ____Placeholder_xfs_ag_resv_type } xfs_ag_resv_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_1 (struct xfs_perag*,int,scalar_t__) ;
 int FUNC_2 (struct xfs_mount*,int ,int,int ) ;
 int FUNC_3 (struct xfs_mount*,int ,int) ;
 struct xfs_ag_resv* FUNC_4 (struct xfs_perag*,int) ;
 int FUNC_5 (struct xfs_mount*,char*,int ) ;

__attribute__((used)) static int
FUNC_6(
 struct xfs_perag *VAR_2,
 enum xfs_ag_resv_type VAR_3,
 xfs_extlen_t VAR_4,
 xfs_extlen_t VAR_5)
{
 struct xfs_mount *VAR_6 = VAR_2->pag_mount;
 struct xfs_ag_resv *VAR_7;
 int VAR_8;
 xfs_extlen_t VAR_9;

 if (VAR_5 > VAR_4)
  VAR_4 = VAR_5;

 switch (VAR_3) {
 case 128:






  VAR_9 = VAR_4;
  break;
 case 129:





  VAR_9 = VAR_4 - VAR_5;
  break;
 default:
  FUNC_0(0);
  return -VAR_0;
 }
 VAR_8 = FUNC_3(VAR_6, -(int64_t)VAR_9, 1);
 if (VAR_8) {
  FUNC_2(VAR_2->pag_mount, VAR_2->pag_agno,
    VAR_8, VAR_1);
  FUNC_5(VAR_6,
"Per-AG reservation for AG %u failed.  Filesystem may run out of space.",
    VAR_2->pag_agno);
  return VAR_8;
 }







 if (VAR_2->pag_agno == 0)
  VAR_6->m_ag_max_usable -= VAR_4;

 VAR_7 = FUNC_4(VAR_2, VAR_3);
 VAR_7->ar_asked = VAR_4;
 VAR_7->ar_orig_reserved = VAR_9;
 VAR_7->ar_reserved = VAR_4 - VAR_5;

 FUNC_1(VAR_2, VAR_3, VAR_4);
 return 0;
}
