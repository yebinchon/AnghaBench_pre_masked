
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct netsec_priv {TYPE_1__* desc_ring; int phy_addr; int mii_bus; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct netsec_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct netsec_priv*,size_t) ;
 int FUNC_3 (struct netsec_priv*,size_t) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (struct netsec_priv*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5)
{
 struct netsec_priv *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;
 u16 VAR_8;

 FUNC_0(VAR_1);

 VAR_7 = FUNC_2(VAR_6, VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_3);
 if (VAR_7)
  goto err1;


 VAR_8 = FUNC_4(VAR_6->mii_bus, VAR_6->phy_addr, VAR_2) |
  VAR_0;
 FUNC_5(VAR_6->mii_bus, VAR_6->phy_addr, VAR_2, VAR_8);

 VAR_7 = FUNC_6(VAR_6, 1);
 if (VAR_7)
  goto err2;

 FUNC_7(&VAR_6->desc_ring[VAR_4].lock);
 FUNC_7(&VAR_6->desc_ring[VAR_3].lock);

 return 0;
err2:
 FUNC_3(VAR_6, VAR_3);
err1:
 FUNC_3(VAR_6, VAR_4);
 return VAR_7;
}
