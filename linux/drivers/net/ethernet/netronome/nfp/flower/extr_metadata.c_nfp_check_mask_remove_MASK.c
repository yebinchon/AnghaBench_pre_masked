
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nfp_mask_id_table {int link; int ref_cnt; int mask_id; } ;
struct nfp_app {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfp_mask_id_table*) ;
 int FUNC_2 (struct nfp_app*,int ) ;
 struct nfp_mask_id_table* FUNC_3 (struct nfp_app*,char*,int ) ;

__attribute__((used)) static bool
FUNC_4(struct nfp_app *VAR_1, char *VAR_2, u32 VAR_3,
        u8 *VAR_4, u8 *VAR_5)
{
 struct nfp_mask_id_table *VAR_6;

 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (!VAR_6)
  return 0;

 *VAR_5 = VAR_6->mask_id;
 VAR_6->ref_cnt--;
 if (!VAR_6->ref_cnt) {
  FUNC_0(&VAR_6->link);
  FUNC_2(VAR_1, *VAR_5);
  FUNC_1(VAR_6);
  if (VAR_4)
   *VAR_4 |= VAR_0;
 }

 return 1;
}
