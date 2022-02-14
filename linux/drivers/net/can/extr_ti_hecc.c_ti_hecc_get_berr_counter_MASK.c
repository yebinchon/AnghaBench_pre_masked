
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_hecc_priv {int dummy; } ;
struct net_device {int dummy; } ;
struct can_berr_counter {void* rxerr; void* txerr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct ti_hecc_priv*,int ) ;
 struct ti_hecc_priv* FUNC_1 (struct net_device const*) ;

__attribute__((used)) static int FUNC_2(const struct net_device *VAR_2,
        struct can_berr_counter *VAR_3)
{
 struct ti_hecc_priv *VAR_4 = FUNC_1(VAR_2);

 VAR_3->txerr = FUNC_0(VAR_4, VAR_1);
 VAR_3->rxerr = FUNC_0(VAR_4, VAR_0);

 return 0;
}
