
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt_hi_throughput {int bWAIotBroadcom; int WAIotTH; } ;
struct r8192_priv {TYPE_1__* rtllib; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct rt_hi_throughput* pHTInfo; } ;


 int VAR_0 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1)
{
 struct r8192_priv *VAR_2 = FUNC_0((struct net_device *)VAR_1);
 struct rt_hi_throughput *VAR_3 = VAR_2->rtllib->pHTInfo;

 VAR_3->bWAIotBroadcom = 0;
 VAR_3->WAIotTH = VAR_0;
}
