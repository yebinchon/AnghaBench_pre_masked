
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct xgene_enet_pdata {int dummy; } ;
struct xgene_cle_ptree {size_t num_dbptr; scalar_t__ start_dbptr; int * dbptr; } ;
struct xgene_enet_cle {struct xgene_cle_ptree ptree; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t*,int ,int) ;
 int FUNC_1 (struct xgene_enet_pdata*,int *,size_t*) ;
 int FUNC_2 (struct xgene_enet_cle*,size_t*,int,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct xgene_enet_pdata *VAR_3,
     struct xgene_enet_cle *VAR_4)
{
 struct xgene_cle_ptree *VAR_5 = &VAR_4->ptree;
 u32 VAR_6[VAR_1];
 u32 VAR_7;
 int VAR_8;

 FUNC_0(VAR_6, 0, sizeof(VAR_6));
 for (VAR_7 = 0; VAR_7 < VAR_5->num_dbptr; VAR_7++) {
  FUNC_1(VAR_3, &VAR_5->dbptr[VAR_7], VAR_6);
  VAR_8 = FUNC_2(VAR_4, VAR_6, 6, VAR_7 + VAR_5->start_dbptr,
     VAR_2, VAR_0);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
