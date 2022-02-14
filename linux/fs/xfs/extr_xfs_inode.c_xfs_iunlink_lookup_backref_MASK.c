
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_agino_t ;
struct xfs_perag {int pagi_unlinked_hash; } ;
struct xfs_iunlink {int iu_agino; } ;


 int VAR_0 ;
 struct xfs_iunlink* FUNC_0 (int *,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static xfs_agino_t
FUNC_1(
 struct xfs_perag *VAR_2,
 xfs_agino_t VAR_3)
{
 struct xfs_iunlink *VAR_4;

 VAR_4 = FUNC_0(&VAR_2->pagi_unlinked_hash, &VAR_3,
   VAR_1);
 return VAR_4 ? VAR_4->iu_agino : VAR_0;
}
