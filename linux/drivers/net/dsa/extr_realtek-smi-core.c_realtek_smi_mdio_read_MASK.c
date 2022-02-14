
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct realtek_smi {TYPE_1__* ops; } ;
struct mii_bus {struct realtek_smi* priv; } ;
struct TYPE_2__ {int (* phy_read ) (struct realtek_smi*,int,int) ;} ;


 int FUNC_0 (struct realtek_smi*,int,int) ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_0, int VAR_1, int VAR_2)
{
 struct realtek_smi *VAR_3 = VAR_0->priv;

 return VAR_3->ops->phy_read(VAR_3, VAR_1, VAR_2);
}
