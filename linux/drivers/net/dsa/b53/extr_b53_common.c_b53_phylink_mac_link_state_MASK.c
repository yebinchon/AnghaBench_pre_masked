
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phylink_link_state {scalar_t__ interface; } ;
struct dsa_switch {struct b53_device* priv; } ;
struct b53_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* serdes_link_state ) (struct b53_device*,int,struct phylink_link_state*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct b53_device*,int,struct phylink_link_state*) ;

int FUNC_2(struct dsa_switch *VAR_2, int VAR_3,
          struct phylink_link_state *VAR_4)
{
 struct b53_device *VAR_5 = VAR_2->priv;
 int VAR_6 = -VAR_0;

 if ((FUNC_0(VAR_4->interface) ||
      VAR_4->interface == VAR_1) &&
      VAR_5->ops->serdes_link_state)
  VAR_6 = VAR_5->ops->serdes_link_state(VAR_5, VAR_3, VAR_4);

 return VAR_6;
}
