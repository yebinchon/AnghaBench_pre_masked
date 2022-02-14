
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8366_vlan_mc {scalar_t__ fid; scalar_t__ untag; scalar_t__ member; scalar_t__ priority; scalar_t__ vid; } ;
struct realtek_smi {int num_vlan_mc; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_vlan_mc ) (struct realtek_smi*,int,struct rtl8366_vlan_mc*) ;} ;


 int FUNC_0 (struct realtek_smi*,int) ;
 int FUNC_1 (struct realtek_smi*,int) ;
 int FUNC_2 (struct realtek_smi*,int,struct rtl8366_vlan_mc*) ;

int FUNC_3(struct realtek_smi *VAR_0)
{
 struct rtl8366_vlan_mc VAR_1;
 int VAR_2;
 int VAR_3;

 FUNC_0(VAR_0, 0);
 FUNC_1(VAR_0, 0);


 VAR_1.vid = 0;
 VAR_1.priority = 0;
 VAR_1.member = 0;
 VAR_1.untag = 0;
 VAR_1.fid = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0->num_vlan_mc; VAR_3++) {
  VAR_2 = VAR_0->ops->set_vlan_mc(VAR_0, VAR_3, &VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
