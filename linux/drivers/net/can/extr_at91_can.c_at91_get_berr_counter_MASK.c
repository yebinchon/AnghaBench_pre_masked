
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct can_berr_counter {int rxerr; int txerr; } ;
struct at91_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct at91_priv const*,int ) ;
 struct at91_priv* FUNC_1 (struct net_device const*) ;

__attribute__((used)) static int FUNC_2(const struct net_device *VAR_1,
  struct can_berr_counter *VAR_2)
{
 const struct at91_priv *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4 = FUNC_0(VAR_3, VAR_0);

 VAR_2->rxerr = VAR_4 & 0xff;
 VAR_2->txerr = VAR_4 >> 16;

 return 0;
}
