
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcauart {int net_dev; } ;
struct TYPE_2__ {int tx_dropped; int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 struct qcauart* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct qcauart *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->net_dev, "Transmit timeout at %ld, latency %ld\n",
      VAR_0, FUNC_0(VAR_1));
 VAR_1->stats.tx_errors++;
 VAR_1->stats.tx_dropped++;
}
