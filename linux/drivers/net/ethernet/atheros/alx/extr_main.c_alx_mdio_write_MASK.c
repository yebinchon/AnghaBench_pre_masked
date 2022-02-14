
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int prtad; } ;
struct alx_hw {TYPE_1__ mdio; } ;
struct alx_priv {struct alx_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alx_hw*,int,int ,int ) ;
 int FUNC_1 (struct alx_hw*,int ,int ) ;
 struct alx_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
     int VAR_3, int VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct alx_priv *VAR_7 = FUNC_2(VAR_2);
 struct alx_hw *VAR_8 = &VAR_7->hw;

 if (VAR_3 != VAR_8->mdio.prtad)
  return -VAR_0;

 if (VAR_4 == VAR_1)
  return FUNC_1(VAR_8, VAR_5, VAR_6);

 return FUNC_0(VAR_8, VAR_4, VAR_5, VAR_6);
}
