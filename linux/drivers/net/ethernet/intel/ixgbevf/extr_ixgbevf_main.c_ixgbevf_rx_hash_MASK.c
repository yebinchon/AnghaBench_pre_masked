
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int rss; } ;
struct TYPE_8__ {int pkt_info; } ;
struct TYPE_9__ {TYPE_2__ hs_rss; } ;
struct TYPE_11__ {TYPE_4__ hi_dword; TYPE_3__ lo_dword; } ;
struct TYPE_12__ {TYPE_5__ lower; } ;
union ixgbe_adv_rx_desc {TYPE_6__ wb; } ;
typedef unsigned long u16 ;
struct sk_buff {int dummy; } ;
struct ixgbevf_ring {TYPE_1__* netdev; } ;
struct TYPE_7__ {int features; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct ixgbevf_ring *VAR_5,
       union ixgbe_adv_rx_desc *VAR_6,
       struct sk_buff *VAR_7)
{
 u16 VAR_8;

 if (!(VAR_5->netdev->features & VAR_2))
  return;

 VAR_8 = FUNC_0(VAR_6->wb.lower.lo_dword.hs_rss.pkt_info) &
     VAR_1;

 if (!VAR_8)
  return;

 FUNC_2(VAR_7, FUNC_1(VAR_6->wb.lower.hi_dword.rss),
       (VAR_0 & (1ul << VAR_8)) ?
       VAR_4 : VAR_3);
}
