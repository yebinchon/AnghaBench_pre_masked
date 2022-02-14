
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct atl1c_tpd_ring {int next_to_use; } ;
struct atl1c_tpd_desc {int dummy; } ;
struct atl1c_adapter {int hw; struct atl1c_tpd_ring* tpd_ring; } ;
typedef enum atl1c_trans_queue { ____Placeholder_atl1c_trans_queue } atl1c_trans_queue ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct atl1c_adapter *VAR_3, struct sk_buff *VAR_4,
      struct atl1c_tpd_desc *VAR_5, enum atl1c_trans_queue VAR_6)
{
 struct atl1c_tpd_ring *VAR_7 = &VAR_3->tpd_ring[VAR_6];
 u16 VAR_8;

 VAR_8 = VAR_6 == VAR_2 ? VAR_1 : VAR_0;
 FUNC_0(&VAR_3->hw, VAR_8, VAR_7->next_to_use);
}
