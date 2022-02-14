
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct atl1c_tpd_ring {scalar_t__ next_to_use; scalar_t__ count; } ;
struct atl1c_tpd_desc {int dummy; } ;
struct atl1c_adapter {struct atl1c_tpd_ring* tpd_ring; } ;
typedef enum atl1c_trans_queue { ____Placeholder_atl1c_trans_queue } atl1c_trans_queue ;


 struct atl1c_tpd_desc* FUNC_0 (struct atl1c_tpd_ring*,scalar_t__) ;
 int FUNC_1 (struct atl1c_tpd_desc*,int ,int) ;

__attribute__((used)) static struct atl1c_tpd_desc *FUNC_2(struct atl1c_adapter *VAR_0,
 enum atl1c_trans_queue VAR_1)
{
 struct atl1c_tpd_ring *VAR_2 = &VAR_0->tpd_ring[VAR_1];
 struct atl1c_tpd_desc *VAR_3;
 u16 VAR_4 = 0;

 VAR_4 = VAR_2->next_to_use;
 if (++VAR_2->next_to_use == VAR_2->count)
  VAR_2->next_to_use = 0;
 VAR_3 = FUNC_0(VAR_2, VAR_4);
 FUNC_1(VAR_3, 0, sizeof(struct atl1c_tpd_desc));
 return VAR_3;
}
