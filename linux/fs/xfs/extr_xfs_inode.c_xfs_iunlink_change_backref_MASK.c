
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_agino_t ;
struct xfs_perag {int pagi_unlinked_hash; } ;
struct xfs_iunlink {scalar_t__ iu_next_unlinked; int iu_rhash_head; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xfs_iunlink*) ;
 struct xfs_iunlink* FUNC_1 (int *,scalar_t__*,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct xfs_perag*,struct xfs_iunlink*) ;

__attribute__((used)) static int
FUNC_4(
 struct xfs_perag *VAR_2,
 xfs_agino_t VAR_3,
 xfs_agino_t VAR_4)
{
 struct xfs_iunlink *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_1(&VAR_2->pagi_unlinked_hash, &VAR_3,
   VAR_1);
 if (!VAR_5)
  return 0;
 VAR_6 = FUNC_2(&VAR_2->pagi_unlinked_hash,
   &VAR_5->iu_rhash_head, VAR_1);
 if (VAR_6)
  return VAR_6;


 if (VAR_4 == VAR_0) {
  FUNC_0(VAR_5);
  return 0;
 }


 VAR_5->iu_next_unlinked = VAR_4;
 return FUNC_3(VAR_2, VAR_5);
}
