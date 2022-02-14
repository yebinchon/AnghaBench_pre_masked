
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct atl1e_tx_ring {scalar_t__ next_to_use; scalar_t__ count; int next_to_clean; } ;
struct atl1e_adapter {struct atl1e_tx_ring tx_ring; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline u16 FUNC_1(struct atl1e_adapter *VAR_0)
{
 struct atl1e_tx_ring *VAR_1 = &VAR_0->tx_ring;
 u16 VAR_2 = 0;
 u16 VAR_3 = 0;

 VAR_3 = FUNC_0(&VAR_1->next_to_clean);
 VAR_2 = VAR_1->next_to_use;

 return (u16)(VAR_3 > VAR_2) ?
  (VAR_3 - VAR_2 - 1) :
  (VAR_1->count + VAR_3 - VAR_2 - 1);
}
