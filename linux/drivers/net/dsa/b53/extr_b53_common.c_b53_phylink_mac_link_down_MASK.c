
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {struct b53_device* priv; } ;
struct b53_device {TYPE_1__* ops; } ;
typedef int phy_interface_t ;
struct TYPE_2__ {int (* serdes_link_set ) (struct b53_device*,int,unsigned int,int ,int) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct b53_device*,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b53_device*,int,unsigned int,int ,int) ;

void FUNC_3(struct dsa_switch *VAR_2, int VAR_3,
          unsigned int VAR_4,
          phy_interface_t VAR_5)
{
 struct b53_device *VAR_6 = VAR_2->priv;

 if (VAR_4 == VAR_1)
  return;

 if (VAR_4 == VAR_0) {
  FUNC_0(VAR_6, VAR_3, 0);
  return;
 }

 if (FUNC_1(VAR_5) &&
     VAR_6->ops->serdes_link_set)
  VAR_6->ops->serdes_link_set(VAR_6, VAR_3, VAR_4, VAR_5, 0);
}
