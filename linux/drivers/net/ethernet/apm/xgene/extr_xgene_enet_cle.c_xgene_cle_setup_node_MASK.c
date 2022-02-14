
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_enet_pdata {int dummy; } ;
struct xgene_cle_ptree {int num_kn; scalar_t__ start_node; struct xgene_cle_ptree_kn* kn; } ;
struct xgene_enet_cle {int jump_bytes; struct xgene_cle_ptree ptree; } ;
struct xgene_cle_ptree_kn {int dummy; } ;
struct xgene_cle_ptree_ewdn {int dummy; } ;
typedef int buf ;


 int FUNC_0 (struct xgene_cle_ptree_ewdn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct xgene_cle_ptree_ewdn const*,int *,int ) ;
 int FUNC_3 (struct xgene_enet_cle*,int *,int,scalar_t__,int ,int ) ;
 int FUNC_4 (struct xgene_cle_ptree_kn*,int *) ;
 struct xgene_cle_ptree_ewdn* VAR_3 ;

__attribute__((used)) static int FUNC_5(struct xgene_enet_pdata *VAR_4,
    struct xgene_enet_cle *VAR_5)
{
 struct xgene_cle_ptree *VAR_6 = &VAR_5->ptree;
 const struct xgene_cle_ptree_ewdn *VAR_7 = VAR_3;
 int VAR_8 = FUNC_0(VAR_3);
 struct xgene_cle_ptree_kn *VAR_9 = VAR_6->kn;
 u32 VAR_10[VAR_1];
 int VAR_11, VAR_12, VAR_13;

 FUNC_1(VAR_10, 0, sizeof(VAR_10));
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  FUNC_2(&VAR_7[VAR_11], VAR_10, VAR_5->jump_bytes);
  VAR_13 = FUNC_3(VAR_5, VAR_10, 17, VAR_11 + VAR_6->start_node,
     VAR_2, VAR_0);
  if (VAR_13)
   return VAR_13;
 }


 FUNC_1(VAR_10, 0, sizeof(VAR_10));
 for (VAR_12 = VAR_11; VAR_12 < (VAR_6->num_kn + VAR_8); VAR_12++) {
  FUNC_4(&VAR_9[VAR_12 - VAR_8], VAR_10);
  VAR_13 = FUNC_3(VAR_5, VAR_10, 17, VAR_12 + VAR_6->start_node,
     VAR_2, VAR_0);
  if (VAR_13)
   return VAR_13;
 }

 return 0;
}
