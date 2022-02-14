
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct atl1c_tpd_ring {scalar_t__ next_to_use; scalar_t__ count; int next_to_clean; } ;
struct atl1c_adapter {struct atl1c_tpd_ring* tpd_ring; } ;
typedef enum atl1c_trans_queue { ____Placeholder_atl1c_trans_queue } atl1c_trans_queue ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline u16 FUNC_1(struct atl1c_adapter *VAR_0, enum atl1c_trans_queue VAR_1)
{
 struct atl1c_tpd_ring *VAR_2 = &VAR_0->tpd_ring[VAR_1];
 u16 VAR_3 = 0;
 u16 VAR_4 = 0;

 VAR_4 = FUNC_0(&VAR_2->next_to_clean);
 VAR_3 = VAR_2->next_to_use;

 return (u16)(VAR_4 > VAR_3) ?
  (VAR_4 - VAR_3 - 1) :
  (VAR_2->count + VAR_4 - VAR_3 - 1);
}
