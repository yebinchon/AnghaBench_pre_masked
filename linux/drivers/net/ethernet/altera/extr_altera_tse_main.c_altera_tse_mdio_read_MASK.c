
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;
struct altera_tse_private {int mac_dev; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct altera_tse_private* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_2, int VAR_3, int VAR_4)
{
 struct net_device *VAR_5 = VAR_2->priv;
 struct altera_tse_private *VAR_6 = FUNC_2(VAR_5);


 FUNC_1((VAR_3 & 0x1f), VAR_6->mac_dev,
  FUNC_3(VAR_1));


 return FUNC_0(VAR_6->mac_dev,
         FUNC_3(VAR_0) + VAR_4 * 4) & 0xffff;
}
