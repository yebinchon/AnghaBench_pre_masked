
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; } ;
struct meth_private {int mac_ctrl; int dma_ctrl; } ;
struct TYPE_3__ {int mac_ctrl; int dma_ctrl; } ;
struct TYPE_4__ {TYPE_1__ eth; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct net_device*) ;
 TYPE_2__* VAR_9 ;
 scalar_t__ FUNC_2 (struct meth_private*) ;
 int FUNC_3 (struct net_device*) ;
 struct meth_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int) ;

int FUNC_6(struct net_device *VAR_10)
{
 struct meth_private *VAR_11 = FUNC_4(VAR_10);


 VAR_9->eth.mac_ctrl = VAR_8;
 FUNC_5(1);
 VAR_9->eth.mac_ctrl = 0;
 FUNC_5(25);


 FUNC_1(VAR_10);



 if (FUNC_2(VAR_11) < 0) {
  FUNC_0("Unable to find PHY\n");
  return -VAR_0;
 }


 VAR_11->mac_ctrl = VAR_2 | VAR_3;
 if (VAR_10->flags & VAR_1)
  VAR_11->mac_ctrl |= VAR_4;
 VAR_9->eth.mac_ctrl = VAR_11->mac_ctrl;


 FUNC_3(VAR_10);


 VAR_11->dma_ctrl = (4 << VAR_6) |
    (VAR_7 << VAR_5);
 VAR_9->eth.dma_ctrl = VAR_11->dma_ctrl;

 return 0;
}
