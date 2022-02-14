
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* xfs_agino_t ;
struct xfs_perag {int pag_mount; } ;
struct xfs_iunlink {void* iu_next_unlinked; void* iu_agino; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 struct xfs_iunlink* FUNC_1 (int,int ) ;
 int FUNC_2 (struct xfs_perag*,struct xfs_iunlink*) ;

__attribute__((used)) static int
FUNC_3(
 struct xfs_perag *VAR_2,
 xfs_agino_t VAR_3,
 xfs_agino_t VAR_4)
{
 struct xfs_iunlink *VAR_5;

 if (FUNC_0(0, VAR_2->pag_mount, VAR_1))
  return 0;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0);
 VAR_5->iu_agino = VAR_3;
 VAR_5->iu_next_unlinked = VAR_4;

 return FUNC_2(VAR_2, VAR_5);
}
