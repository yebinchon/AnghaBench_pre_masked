
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct sky2_port {size_t rx_next; size_t port; TYPE_4__* hw; TYPE_3__* netdev; TYPE_1__* rx_ring; } ;
struct sk_buff {int csum; int ip_summed; } ;
struct TYPE_8__ {int flags; TYPE_2__* pdev; } ;
struct TYPE_7__ {int features; int name; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct sk_buff* skb; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int * VAR_5 ;
 int FUNC_5 (TYPE_4__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct sky2_port *VAR_6, u32 VAR_7)
{

 FUNC_0(VAR_6->hw->flags & VAR_4);






 if (FUNC_4((u16)(VAR_7 >> 16) == (u16)VAR_7)) {
  struct sk_buff *VAR_8 = VAR_6->rx_ring[VAR_6->rx_next].skb;
  VAR_8->ip_summed = VAR_1;
  VAR_8->csum = FUNC_3(VAR_7);
 } else {
  FUNC_2(&VAR_6->hw->pdev->dev,
      "%s: receive checksum problem (status = %#x)\n",
      VAR_6->netdev->name, VAR_7);





  VAR_6->netdev->features &= ~VAR_2;
  FUNC_5(VAR_6->hw, FUNC_1(VAR_5[VAR_6->port], VAR_3),
        VAR_0);
 }
}
