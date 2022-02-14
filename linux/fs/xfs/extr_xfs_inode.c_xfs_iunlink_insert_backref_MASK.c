
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_perag {int pagi_unlinked_hash; } ;
struct xfs_iunlink {int iu_rhash_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct xfs_iunlink*) ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(
 struct xfs_perag *VAR_3,
 struct xfs_iunlink *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_3->pagi_unlinked_hash,
   &VAR_4->iu_rhash_head, VAR_2);






 if (VAR_5) {
  FUNC_0(VAR_5 != -VAR_1, "iunlink cache insert error %d", VAR_5);
  FUNC_1(VAR_4);
 }




 if (VAR_5 != 0 && VAR_5 != -VAR_0)
  VAR_5 = 0;
 return VAR_5;
}
