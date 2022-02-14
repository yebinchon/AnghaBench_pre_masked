
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
 int FUNC_0 (struct alx_hw*,int,int,int*) ;
 int FUNC_1 (struct alx_hw*,int,int*) ;
 struct alx_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
    int VAR_3, int VAR_4, u16 VAR_5)
{
 struct alx_priv *VAR_6 = FUNC_2(VAR_2);
 struct alx_hw *VAR_7 = &VAR_6->hw;
 u16 VAR_8;
 int VAR_9;

 if (VAR_3 != VAR_7->mdio.prtad)
  return -VAR_0;

 if (VAR_4 == VAR_1)
  VAR_9 = FUNC_1(VAR_7, VAR_5, &VAR_8);
 else
  VAR_9 = FUNC_0(VAR_7, VAR_4, VAR_5, &VAR_8);

 if (VAR_9)
  return VAR_9;
 return VAR_8;
}
