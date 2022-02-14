
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_nic_ring_data {struct hnae_ring* ring; } ;
struct hnae_ring {int next_to_clean; scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct hns_nic_ring_data *VAR_1)
{
 struct hnae_ring *VAR_2 = VAR_1->ring;
 int VAR_3 = FUNC_0(VAR_2->io_base + VAR_0);

 if (VAR_3 == VAR_2->next_to_clean)
  return 1;
 else
  return 0;
}
