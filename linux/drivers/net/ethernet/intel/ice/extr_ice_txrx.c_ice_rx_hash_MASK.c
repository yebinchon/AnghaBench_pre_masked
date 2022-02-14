
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rxdid; } ;
union ice_32b_rx_flex_desc {TYPE_2__ wb; } ;
typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ice_ring {TYPE_1__* netdev; } ;
struct ice_32b_rx_flex_desc_nic {int rss_hash; } ;
struct TYPE_3__ {int features; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ice_ring *VAR_2, union ice_32b_rx_flex_desc *VAR_3,
     struct sk_buff *VAR_4, u8 VAR_5)
{
 struct ice_32b_rx_flex_desc_nic *VAR_6;
 u32 VAR_7;

 if (!(VAR_2->netdev->features & VAR_1))
  return;

 if (VAR_3->wb.rxdid != VAR_0)
  return;

 VAR_6 = (struct ice_32b_rx_flex_desc_nic *)VAR_3;
 VAR_7 = FUNC_1(VAR_6->rss_hash);
 FUNC_2(VAR_4, VAR_7, FUNC_0(VAR_5));
}
