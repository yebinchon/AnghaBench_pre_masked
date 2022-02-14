
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtllib_device {TYPE_1__* dev; } ;
struct TYPE_5__ {int trans_start; } ;
struct TYPE_4__ {unsigned int num_tx_queues; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct rtllib_device *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->dev->num_tx_queues; VAR_2++)
  FUNC_0(VAR_1->dev, VAR_2)->trans_start = VAR_0;

 FUNC_1(VAR_1->dev);
}
