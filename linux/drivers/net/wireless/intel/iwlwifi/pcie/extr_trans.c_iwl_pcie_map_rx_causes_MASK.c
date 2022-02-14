
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans_pcie {int shared_vec_mask; } ;
struct iwl_trans {int num_rx_queues; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (struct iwl_trans*,int ,int) ;
 int FUNC_5 (struct iwl_trans*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct iwl_trans *VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_2(VAR_4);
 u32 VAR_6 =
  VAR_5->shared_vec_mask & VAR_1 ? 1 : 0;
 u32 VAR_7, VAR_8;







 VAR_7 = FUNC_0(FUNC_3(0));
 for (VAR_8 = 1; VAR_8 < VAR_4->num_rx_queues; VAR_8++) {
  FUNC_5(VAR_4, FUNC_1(VAR_8),
      FUNC_3(VAR_8 - VAR_6));
  VAR_7 |= FUNC_0(FUNC_3(VAR_8));
 }
 FUNC_4(VAR_4, VAR_0, ~VAR_7);

 VAR_7 = FUNC_3(0);
 if (VAR_5->shared_vec_mask & VAR_2)
  VAR_7 |= VAR_3;
 FUNC_5(VAR_4, FUNC_1(0), VAR_7);

 if (VAR_5->shared_vec_mask & VAR_1)
  FUNC_5(VAR_4, FUNC_1(1), VAR_7);
}
