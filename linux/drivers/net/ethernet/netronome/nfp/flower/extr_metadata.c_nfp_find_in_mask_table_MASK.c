
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_mask_id_table {int mask_id; int ref_cnt; } ;
struct nfp_app {int dummy; } ;


 int VAR_0 ;
 struct nfp_mask_id_table* FUNC_0 (struct nfp_app*,char*,int ) ;

__attribute__((used)) static int
FUNC_1(struct nfp_app *VAR_1, char *VAR_2, u32 VAR_3)
{
 struct nfp_mask_id_table *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->ref_cnt++;


 return VAR_4->mask_id;
}
