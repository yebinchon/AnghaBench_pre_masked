
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {int max_tbs; } ;
struct iwl_trans {int dummy; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 scalar_t__ FUNC_1 (struct iwl_trans*,void*,int) ;

__attribute__((used)) static u32 FUNC_2(struct iwl_trans *VAR_0, void *VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->max_tbs; VAR_4++)
  VAR_3 += FUNC_1(VAR_0, VAR_1, VAR_4);

 return VAR_3;
}
