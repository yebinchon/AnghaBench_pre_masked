
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct atl1_tpd_ring {scalar_t__ count; int next_to_use; int next_to_clean; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static u16 FUNC_1(struct atl1_tpd_ring *VAR_0)
{
 u16 VAR_1 = FUNC_0(&VAR_0->next_to_clean);
 u16 VAR_2 = FUNC_0(&VAR_0->next_to_use);
 return (VAR_1 > VAR_2) ?
  VAR_1 - VAR_2 - 1 :
  VAR_0->count + VAR_1 - VAR_2 - 1;
}
