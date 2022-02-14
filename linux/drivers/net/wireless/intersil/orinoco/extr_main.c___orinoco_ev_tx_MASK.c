
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct hermes {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hermes*,int ,int ) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2, struct hermes *VAR_3)
{
 VAR_2->stats.tx_packets++;

 FUNC_1(VAR_2);

 FUNC_0(VAR_3, VAR_1, VAR_0);
}
