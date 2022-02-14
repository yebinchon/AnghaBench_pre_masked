
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fec_enet_private {int num_rx_queues; TYPE_2__** rx_queue; } ;
struct TYPE_3__ {int reg_desc_active; } ;
struct TYPE_4__ {TYPE_1__ bd; } ;


 struct fec_enet_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct fec_enet_private *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_rx_queues; VAR_2++)
  FUNC_1(0, VAR_1->rx_queue[VAR_2]->bd.reg_desc_active);
}
