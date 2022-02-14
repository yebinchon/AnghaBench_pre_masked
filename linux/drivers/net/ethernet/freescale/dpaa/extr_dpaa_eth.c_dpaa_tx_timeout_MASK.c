
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dpaa_priv {int percpu_priv; } ;
struct TYPE_2__ {int tx_errors; } ;
struct dpaa_percpu_priv {TYPE_1__ stats; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 struct dpaa_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct dpaa_priv const*,int ,struct net_device*,char*,int ) ;
 struct dpaa_percpu_priv* FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2)
{
 struct dpaa_percpu_priv *VAR_3;
 const struct dpaa_priv *VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 VAR_3 = FUNC_4(VAR_4->percpu_priv);

 FUNC_3(VAR_4, VAR_1, VAR_2, "Transmit timeout latency: %u ms\n",
     FUNC_1(VAR_0 - FUNC_0(VAR_2)));

 VAR_3->stats.tx_errors++;
}
