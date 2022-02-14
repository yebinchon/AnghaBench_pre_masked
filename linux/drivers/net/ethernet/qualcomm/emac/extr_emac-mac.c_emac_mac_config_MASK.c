
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct net_device {unsigned int mtu; int dev_addr; } ;
struct emac_adapter {unsigned int rxbuf_size; scalar_t__ base; struct net_device* netdev; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_1 (struct emac_adapter*) ;
 int FUNC_2 (struct emac_adapter*) ;
 int FUNC_3 (struct emac_adapter*) ;
 int FUNC_4 (struct emac_adapter*) ;
 int FUNC_5 (struct emac_adapter*,int ) ;
 unsigned int FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct emac_adapter *VAR_12)
{
 struct net_device *VAR_13 = VAR_12->netdev;
 unsigned int VAR_14;
 u32 VAR_15;

 FUNC_5(VAR_12, VAR_13->dev_addr);

 VAR_14 = VAR_13->mtu + VAR_7 + VAR_6 + VAR_11;
 VAR_12->rxbuf_size = VAR_13->mtu > VAR_3 ?
  FUNC_0(VAR_14, 8) : VAR_3;

 FUNC_2(VAR_12);

 FUNC_7(VAR_13->mtu + VAR_7 + VAR_11 + VAR_6,
        VAR_12->base + VAR_4);

 FUNC_4(VAR_12);
 FUNC_3(VAR_12);
 FUNC_1(VAR_12);

 VAR_15 = FUNC_6(VAR_12->base + VAR_1);
 VAR_15 &= ~(VAR_0 | VAR_8);
 VAR_15 |= VAR_9;
 FUNC_7(VAR_15, VAR_12->base + VAR_1);
 FUNC_7(0, VAR_12->base + VAR_2);
 FUNC_7(VAR_10, VAR_12->base + VAR_5);
}
