
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8366_vlan_4k {int untag; int member; } ;
struct realtek_smi {TYPE_1__* ops; int dev; } ;
struct dsa_switch {struct realtek_smi* priv; } ;
struct TYPE_2__ {int (* get_vlan_4k ) (struct realtek_smi*,int,struct rtl8366_vlan_4k*) ;int (* is_vlan_valid ) (struct realtek_smi*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (struct realtek_smi*,int,int ,int ,int) ;
 int FUNC_2 (struct realtek_smi*,int) ;
 int FUNC_3 (struct realtek_smi*,int,struct rtl8366_vlan_4k*) ;

int FUNC_4(struct dsa_switch *VAR_1, int VAR_2, bool VAR_3)
{
 struct realtek_smi *VAR_4 = VAR_1->priv;
 struct rtl8366_vlan_4k VAR_5;
 int VAR_6;


 if (!VAR_4->ops->is_vlan_valid(VAR_4, VAR_2 + 1))
  return -VAR_0;

 FUNC_0(VAR_4->dev, "%s filtering on port %d\n",
   VAR_3 ? "enable" : "disable",
   VAR_2);





 VAR_6 = VAR_4->ops->get_vlan_4k(VAR_4, VAR_2 + 1, &VAR_5);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_1(VAR_4, VAR_2 + 1,
          VAR_5.member,
          VAR_5.untag,
          1);
 if (VAR_6)
  return VAR_6;

 return 0;
}
