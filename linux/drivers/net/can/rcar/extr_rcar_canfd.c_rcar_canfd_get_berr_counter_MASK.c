
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_canfd_channel {int base; int channel; } ;
struct net_device {int dummy; } ;
struct can_berr_counter {int rxerr; int txerr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct rcar_canfd_channel* FUNC_3 (struct net_device const*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(const struct net_device *VAR_0,
           struct can_berr_counter *VAR_1)
{
 struct rcar_canfd_channel *VAR_2 = FUNC_3(VAR_0);
 u32 VAR_3, VAR_4 = VAR_2->channel;


 VAR_3 = FUNC_4(VAR_2->base, FUNC_0(VAR_4));
 VAR_1->txerr = FUNC_2(VAR_3);
 VAR_1->rxerr = FUNC_1(VAR_3);
 return 0;
}
