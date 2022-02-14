
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sxgbe_priv_data {int dummy; } ;
struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;


 int VAR_0 ;
 struct sxgbe_priv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sxgbe_priv_data*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_1, int VAR_2, int VAR_3,
        u16 VAR_4)
{
 struct net_device *VAR_5 = VAR_1->priv;
 struct sxgbe_priv_data *VAR_6 = FUNC_0(VAR_5);

 return FUNC_1(VAR_6, VAR_0, VAR_2, VAR_3,
     VAR_4);
}
