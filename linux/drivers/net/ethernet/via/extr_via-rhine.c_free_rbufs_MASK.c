
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rhine_private {int ** rx_skbuff; int rx_buf_sz; int * rx_skbuff_dma; TYPE_1__* rx_ring; } ;
struct TYPE_4__ {struct device* parent; } ;
struct net_device {TYPE_2__ dev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int addr; scalar_t__ rx_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 struct rhine_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device* VAR_2)
{
 struct rhine_private *VAR_3 = FUNC_3(VAR_2);
 struct device *VAR_4 = VAR_2->dev.parent;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_3->rx_ring[VAR_5].rx_status = 0;
  VAR_3->rx_ring[VAR_5].addr = FUNC_0(0xBADF00D0);
  if (VAR_3->rx_skbuff[VAR_5]) {
   FUNC_2(VAR_4,
      VAR_3->rx_skbuff_dma[VAR_5],
      VAR_3->rx_buf_sz, VAR_0);
   FUNC_1(VAR_3->rx_skbuff[VAR_5]);
  }
  VAR_3->rx_skbuff[VAR_5] = ((void*)0);
 }
}
