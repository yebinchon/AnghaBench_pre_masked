
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct hns3_nic_priv {TYPE_1__* ring_data; } ;
struct hns3_enet_ring {int dummy; } ;
struct TYPE_2__ {struct hns3_enet_ring* ring; } ;


 int FUNC_0 (struct hns3_enet_ring*) ;

__attribute__((used)) static void FUNC_1(struct hns3_nic_priv *VAR_0, u32 VAR_1,
      u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 for (VAR_4 = VAR_1; VAR_4 <= VAR_2; VAR_4++) {
  struct hns3_enet_ring *VAR_5 = VAR_0->ring_data[VAR_4].ring;

  FUNC_0(VAR_5);
 }
}
