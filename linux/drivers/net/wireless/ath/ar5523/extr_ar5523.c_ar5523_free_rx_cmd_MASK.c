
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar5523 {TYPE_1__* rx_cmd_urb; int rx_cmd_buf; int dev; } ;
struct TYPE_2__ {int transfer_dma; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct ar5523 *VAR_1)
{
 FUNC_0(VAR_1->dev, VAR_0,
     VAR_1->rx_cmd_buf, VAR_1->rx_cmd_urb->transfer_dma);
 FUNC_1(VAR_1->rx_cmd_urb);
}
