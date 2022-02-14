
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, struct sk_buff *VAR_1)
{
 VAR_0->stats.tx_errors++;
 FUNC_0(VAR_1);
}
