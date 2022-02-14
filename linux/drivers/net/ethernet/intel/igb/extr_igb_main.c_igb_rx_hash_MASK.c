
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rss; } ;
struct TYPE_7__ {TYPE_2__ hi_dword; } ;
struct TYPE_8__ {TYPE_3__ lower; } ;
union e1000_adv_rx_desc {TYPE_4__ wb; } ;
struct sk_buff {int dummy; } ;
struct igb_ring {TYPE_1__* netdev; } ;
struct TYPE_5__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct igb_ring *VAR_2,
          union e1000_adv_rx_desc *VAR_3,
          struct sk_buff *VAR_4)
{
 if (VAR_2->netdev->features & VAR_0)
  FUNC_1(VAR_4,
        FUNC_0(VAR_3->wb.lower.hi_dword.rss),
        VAR_1);
}
