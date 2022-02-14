
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sxgbe_priv_data {TYPE_2__* hw; scalar_t__ ioaddr; } ;
struct net_device {int dummy; } ;
struct mii_bus {struct net_device* priv; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ mii; } ;


 int VAR_0 ;
 struct sxgbe_priv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sxgbe_priv_data*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_1, int VAR_2, int VAR_3)
{
 struct net_device *VAR_4 = VAR_1->priv;
 struct sxgbe_priv_data *VAR_5 = FUNC_0(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_0, VAR_2, VAR_3, 0);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_1(VAR_5->ioaddr + VAR_5->hw->mii.data) & 0xffff;
}
