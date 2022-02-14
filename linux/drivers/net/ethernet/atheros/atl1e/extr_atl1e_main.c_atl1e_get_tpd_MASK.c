
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct atl1e_tx_ring {size_t next_to_use; scalar_t__ count; struct atl1e_tpd_desc* desc; } ;
struct atl1e_tpd_desc {int dummy; } ;
struct atl1e_adapter {struct atl1e_tx_ring tx_ring; } ;


 int FUNC_0 (struct atl1e_tpd_desc*,int ,int) ;

__attribute__((used)) static struct atl1e_tpd_desc *FUNC_1(struct atl1e_adapter *VAR_0)
{
 struct atl1e_tx_ring *VAR_1 = &VAR_0->tx_ring;
 u16 VAR_2 = 0;

 VAR_2 = VAR_1->next_to_use;
 if (++VAR_1->next_to_use == VAR_1->count)
  VAR_1->next_to_use = 0;

 FUNC_0(&VAR_1->desc[VAR_2], 0, sizeof(struct atl1e_tpd_desc));
 return &VAR_1->desc[VAR_2];
}
