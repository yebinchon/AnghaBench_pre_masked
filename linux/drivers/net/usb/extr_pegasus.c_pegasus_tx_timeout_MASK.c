
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct TYPE_6__ {int tx_urb; } ;
typedef TYPE_2__ pegasus_t ;


 TYPE_2__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_2__*,int ,struct net_device*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 pegasus_t *VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_2, VAR_0, VAR_1, "tx timeout\n");
 FUNC_2(VAR_2->tx_urb);
 VAR_1->stats.tx_errors++;
}
