
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans_pcie {int debug_rfkill; int mutex; } ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int FUNC_1 (struct iwl_trans*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline bool FUNC_3(struct iwl_trans *VAR_2)
{
 struct iwl_trans_pcie *VAR_3 = FUNC_0(VAR_2);

 FUNC_2(&VAR_3->mutex);

 if (VAR_3->debug_rfkill == 1)
  return 1;

 return !(FUNC_1(VAR_2, VAR_0) &
  VAR_1);
}
