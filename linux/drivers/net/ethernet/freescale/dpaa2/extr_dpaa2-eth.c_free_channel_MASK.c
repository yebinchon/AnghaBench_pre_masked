
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa2_eth_priv {int dummy; } ;
struct dpaa2_eth_channel {int dpcon; } ;


 int FUNC_0 (struct dpaa2_eth_priv*,int ) ;
 int FUNC_1 (struct dpaa2_eth_channel*) ;

__attribute__((used)) static void FUNC_2(struct dpaa2_eth_priv *VAR_0,
    struct dpaa2_eth_channel *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->dpcon);
 FUNC_1(VAR_1);
}
