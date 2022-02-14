
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ethtool_eee {int eee_active; int eee_enabled; } ;
struct dsa_switch {struct b53_device* priv; } ;
struct b53_device {TYPE_1__* ports; } ;
struct TYPE_2__ {struct ethtool_eee eee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct b53_device*,int ,int ,int*) ;
 scalar_t__ FUNC_2 (struct b53_device*) ;
 scalar_t__ FUNC_3 (struct b53_device*) ;

int FUNC_4(struct dsa_switch *VAR_3, int VAR_4, struct ethtool_eee *VAR_5)
{
 struct b53_device *VAR_6 = VAR_3->priv;
 struct ethtool_eee *VAR_7 = &VAR_6->ports[VAR_4].eee;
 u16 VAR_8;

 if (FUNC_2(VAR_6) || FUNC_3(VAR_6))
  return -VAR_2;

 FUNC_1(VAR_6, VAR_1, VAR_0, &VAR_8);
 VAR_5->eee_enabled = VAR_7->eee_enabled;
 VAR_5->eee_active = !!(VAR_8 & FUNC_0(VAR_4));

 return 0;
}
