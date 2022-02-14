
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rss; } ;
struct TYPE_5__ {int pkt_info; } ;
union fm10k_rx_desc {TYPE_3__ d; TYPE_2__ w; } ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct fm10k_ring {TYPE_1__* netdev; } ;
struct TYPE_4__ {int features; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct fm10k_ring *VAR_5,
     union fm10k_rx_desc *VAR_6,
     struct sk_buff *VAR_7)
{
 u16 VAR_8;

 if (!(VAR_5->netdev->features & VAR_2))
  return;

 VAR_8 = FUNC_1(VAR_6->w.pkt_info) & VAR_1;
 if (!VAR_8)
  return;

 FUNC_3(VAR_7, FUNC_2(VAR_6->d.rss),
       (FUNC_0(VAR_8) & VAR_0) ?
       VAR_4 : VAR_3);
}
