
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phylink_link_state {scalar_t__ interface; int pause; int duplex; int speed; } ;
struct dsa_switch {struct b53_device* priv; } ;
struct b53_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* serdes_config ) (struct b53_device*,int,unsigned int,struct phylink_link_state const*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct b53_device*,int,int ,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct b53_device*,int,unsigned int,struct phylink_link_state const*) ;

void FUNC_3(struct dsa_switch *VAR_3, int VAR_4,
       unsigned int VAR_5,
       const struct phylink_link_state *VAR_6)
{
 struct b53_device *VAR_7 = VAR_3->priv;

 if (VAR_5 == VAR_1)
  return;

 if (VAR_5 == VAR_0) {
  FUNC_0(VAR_7, VAR_4, VAR_6->speed,
          VAR_6->duplex, VAR_6->pause);
  return;
 }

 if ((FUNC_1(VAR_6->interface) ||
      VAR_6->interface == VAR_2) &&
      VAR_7->ops->serdes_config)
  VAR_7->ops->serdes_config(VAR_7, VAR_4, VAR_5, VAR_6);
}
