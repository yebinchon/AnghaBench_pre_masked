
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {int fh_mask; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_trans*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct iwl_trans *VAR_1, u32 VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_1, VAR_0, ~VAR_2);
 VAR_3->fh_mask = VAR_2;
}
