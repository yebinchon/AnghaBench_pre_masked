
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qlcnic_host_tx_ring {scalar_t__ producer; scalar_t__ sw_consumer; scalar_t__ num_desc; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline u32 FUNC_1(struct qlcnic_host_tx_ring *VAR_0)
{
 if (FUNC_0(VAR_0->producer < VAR_0->sw_consumer))
  return VAR_0->sw_consumer - VAR_0->producer;
 else
  return VAR_0->sw_consumer + VAR_0->num_desc -
    VAR_0->producer;
}
