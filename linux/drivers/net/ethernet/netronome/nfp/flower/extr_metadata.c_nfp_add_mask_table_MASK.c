
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nfp_mask_id_table {int mask_id; unsigned long hash_key; int ref_cnt; int link; } ;
struct nfp_flower_priv {int mask_table; int mask_id_seed; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,unsigned long) ;
 unsigned long FUNC_2 (char*,int ,int ) ;
 struct nfp_mask_id_table* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (struct nfp_app*,int*) ;
 int FUNC_5 (struct nfp_app*,int) ;

__attribute__((used)) static int
FUNC_6(struct nfp_app *VAR_3, char *VAR_4, u32 VAR_5)
{
 struct nfp_flower_priv *VAR_6 = VAR_3->priv;
 struct nfp_mask_id_table *VAR_7;
 unsigned long VAR_8;
 u8 VAR_9;

 if (FUNC_4(VAR_3, &VAR_9))
  return -VAR_0;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7) {
  FUNC_5(VAR_3, VAR_9);
  return -VAR_1;
 }

 FUNC_0(&VAR_7->link);
 VAR_7->mask_id = VAR_9;
 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6->mask_id_seed);
 VAR_7->hash_key = VAR_8;
 VAR_7->ref_cnt = 1;
 FUNC_1(VAR_6->mask_table, &VAR_7->link, VAR_8);

 return VAR_9;
}
