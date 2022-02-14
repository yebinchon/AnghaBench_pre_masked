
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct dsa_switch {struct b53_device* priv; } ;
struct b53_device {int vlan_enabled; TYPE_1__* ports; } ;
struct TYPE_2__ {scalar_t__ pvid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct b53_device*) ;
 int FUNC_2 (struct b53_device*,int ,int) ;
 int FUNC_3 (struct b53_device*,int ,int ,scalar_t__*) ;
 int FUNC_4 (struct b53_device*,int ,int ,scalar_t__) ;

int FUNC_5(struct dsa_switch *VAR_1, int VAR_2, bool VAR_3)
{
 struct b53_device *VAR_4 = VAR_1->priv;
 u16 VAR_5, VAR_6;

 FUNC_3(VAR_4, VAR_0, FUNC_0(VAR_2), &VAR_5);
 VAR_6 = VAR_5;
 if (!VAR_3) {



  VAR_4->ports[VAR_2].pvid = VAR_5;
  VAR_6 = FUNC_1(VAR_4);
 } else {

  VAR_6 = VAR_4->ports[VAR_2].pvid;
 }

 if (VAR_5 != VAR_6)
  FUNC_4(VAR_4, VAR_0, FUNC_0(VAR_2),
       VAR_6);

 FUNC_2(VAR_4, VAR_4->vlan_enabled, VAR_3);

 return 0;
}
