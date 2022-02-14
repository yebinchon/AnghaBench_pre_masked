
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ar5523 {TYPE_1__* rx_cmd_urb; int rx_cmd_buf; int dev; } ;
struct TYPE_3__ {int transfer_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct ar5523 *VAR_3)
{
 VAR_3->rx_cmd_urb = FUNC_1(0, VAR_2);
 if (!VAR_3->rx_cmd_urb)
  return -VAR_1;

 VAR_3->rx_cmd_buf = FUNC_0(VAR_3->dev, VAR_0,
         VAR_2,
         &VAR_3->rx_cmd_urb->transfer_dma);
 if (!VAR_3->rx_cmd_buf) {
  FUNC_2(VAR_3->rx_cmd_urb);
  return -VAR_1;
 }
 return 0;
}
