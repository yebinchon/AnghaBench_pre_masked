
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int txretrycount; void* last_packet_rate; void* CurrentShowTxate; } ;
struct rtllib_device {TYPE_1__ softmac_stats; } ;
struct r8192_priv {struct rtllib_device* rtllib; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_2(VAR_3);
 struct rtllib_device *VAR_5 = VAR_4->rtllib;

 VAR_5->softmac_stats.CurrentShowTxate = FUNC_0(VAR_3,
       VAR_0);

 VAR_5->softmac_stats.last_packet_rate = FUNC_0(VAR_3,
       VAR_1);

 VAR_5->softmac_stats.txretrycount = FUNC_1(VAR_3,
       VAR_2);
}
