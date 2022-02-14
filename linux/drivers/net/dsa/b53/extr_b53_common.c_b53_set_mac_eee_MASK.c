
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ethtool_eee {int eee_enabled; } ;
struct dsa_switch {struct b53_device* priv; } ;
struct b53_device {TYPE_1__* ports; } ;
struct TYPE_2__ {struct ethtool_eee eee; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch*,int,int ) ;
 scalar_t__ FUNC_1 (struct b53_device*) ;
 scalar_t__ FUNC_2 (struct b53_device*) ;

int FUNC_3(struct dsa_switch *VAR_1, int VAR_2, struct ethtool_eee *VAR_3)
{
 struct b53_device *VAR_4 = VAR_1->priv;
 struct ethtool_eee *VAR_5 = &VAR_4->ports[VAR_2].eee;

 if (FUNC_1(VAR_4) || FUNC_2(VAR_4))
  return -VAR_0;

 VAR_5->eee_enabled = VAR_3->eee_enabled;
 FUNC_0(VAR_1, VAR_2, VAR_3->eee_enabled);

 return 0;
}
