
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;
struct altera_tse_private {int mac_dev; } ;


 int FUNC_0 (int,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct altera_tse_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_2, int VAR_3, int VAR_4,
     u16 VAR_5)
{
 struct net_device *VAR_6 = VAR_2->priv;
 struct altera_tse_private *VAR_7 = FUNC_1(VAR_6);


 FUNC_0((VAR_3 & 0x1f), VAR_7->mac_dev,
  FUNC_2(VAR_1));


 FUNC_0(VAR_5, VAR_7->mac_dev, FUNC_2(VAR_0) + VAR_4 * 4);
 return 0;
}
