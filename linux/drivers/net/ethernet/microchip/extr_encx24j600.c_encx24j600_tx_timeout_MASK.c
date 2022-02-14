
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct encx24j600_priv {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_0 ;
 struct encx24j600_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct encx24j600_priv*,int ,struct net_device*,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct encx24j600_priv *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_3, VAR_1, VAR_2, "TX timeout at %ld, latency %ld\n",
    VAR_0, VAR_0 - FUNC_0(VAR_2));

 VAR_2->stats.tx_errors++;
 FUNC_3(VAR_2);
}
