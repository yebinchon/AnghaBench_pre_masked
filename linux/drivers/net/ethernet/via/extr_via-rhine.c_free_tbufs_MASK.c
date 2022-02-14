
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rhine_private {int ** tx_buf; TYPE_3__** tx_skbuff; scalar_t__* tx_skbuff_dma; TYPE_2__* tx_ring; } ;
struct TYPE_4__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int len; } ;
struct TYPE_5__ {void* addr; void* desc_length; scalar_t__ tx_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct device*,scalar_t__,int ,int ) ;
 struct rhine_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device* VAR_3)
{
 struct rhine_private *VAR_4 = FUNC_3(VAR_3);
 struct device *VAR_5 = VAR_3->dev.parent;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_4->tx_ring[VAR_6].tx_status = 0;
  VAR_4->tx_ring[VAR_6].desc_length = FUNC_0(VAR_1);
  VAR_4->tx_ring[VAR_6].addr = FUNC_0(0xBADF00D0);
  if (VAR_4->tx_skbuff[VAR_6]) {
   if (VAR_4->tx_skbuff_dma[VAR_6]) {
    FUNC_2(VAR_5,
       VAR_4->tx_skbuff_dma[VAR_6],
       VAR_4->tx_skbuff[VAR_6]->len,
       VAR_0);
   }
   FUNC_1(VAR_4->tx_skbuff[VAR_6]);
  }
  VAR_4->tx_skbuff[VAR_6] = ((void*)0);
  VAR_4->tx_buf[VAR_6] = ((void*)0);
 }
}
