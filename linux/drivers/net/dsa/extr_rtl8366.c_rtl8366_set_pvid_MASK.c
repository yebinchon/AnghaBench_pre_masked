
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8366_vlan_mc {unsigned int vid; scalar_t__ member; int fid; int untag; } ;
struct rtl8366_vlan_4k {scalar_t__ member; int fid; int untag; } ;
struct realtek_smi {int num_vlan_mc; int dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_vlan_mc ) (struct realtek_smi*,int,struct rtl8366_vlan_mc*) ;int (* set_vlan_mc ) (struct realtek_smi*,int,struct rtl8366_vlan_mc*) ;int (* set_mc_index ) (struct realtek_smi*,unsigned int,int) ;int (* get_vlan_4k ) (struct realtek_smi*,unsigned int,struct rtl8366_vlan_4k*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct realtek_smi*,int,int*) ;
 int FUNC_2 (struct realtek_smi*,int,struct rtl8366_vlan_mc*) ;
 int FUNC_3 (struct realtek_smi*,unsigned int,int) ;
 int FUNC_4 (struct realtek_smi*,int,struct rtl8366_vlan_mc*) ;
 int FUNC_5 (struct realtek_smi*,unsigned int,int) ;
 int FUNC_6 (struct realtek_smi*,int,struct rtl8366_vlan_mc*) ;
 int FUNC_7 (struct realtek_smi*,unsigned int,struct rtl8366_vlan_4k*) ;
 int FUNC_8 (struct realtek_smi*,int,struct rtl8366_vlan_mc*) ;
 int FUNC_9 (struct realtek_smi*,unsigned int,int) ;
 int FUNC_10 (struct realtek_smi*,unsigned int,struct rtl8366_vlan_4k*) ;
 int FUNC_11 (struct realtek_smi*,int,struct rtl8366_vlan_mc*) ;

int FUNC_12(struct realtek_smi *VAR_1, unsigned int VAR_2,
       unsigned int VAR_3)
{
 struct rtl8366_vlan_mc VAR_4;
 struct rtl8366_vlan_4k VAR_5;
 int VAR_6;
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_1->num_vlan_mc; VAR_7++) {
  VAR_6 = VAR_1->ops->get_vlan_mc(VAR_1, VAR_7, &VAR_4);
  if (VAR_6)
   return VAR_6;

  if (VAR_3 == VAR_4.vid) {
   VAR_6 = VAR_1->ops->set_vlan_mc(VAR_1, VAR_7, &VAR_4);
   if (VAR_6)
    return VAR_6;

   VAR_6 = VAR_1->ops->set_mc_index(VAR_1, VAR_2, VAR_7);
   return VAR_6;
  }
 }


 for (VAR_7 = 0; VAR_7 < VAR_1->num_vlan_mc; VAR_7++) {
  VAR_6 = VAR_1->ops->get_vlan_mc(VAR_1, VAR_7, &VAR_4);
  if (VAR_6)
   return VAR_6;

  if (VAR_4.vid == 0 && VAR_4.member == 0) {

   VAR_6 = VAR_1->ops->get_vlan_4k(VAR_1, VAR_3, &VAR_5);
   if (VAR_6)
    return VAR_6;

   VAR_4.vid = VAR_3;
   VAR_4.member = VAR_5.member;
   VAR_4.untag = VAR_5.untag;
   VAR_4.fid = VAR_5.fid;
   VAR_6 = VAR_1->ops->set_vlan_mc(VAR_1, VAR_7, &VAR_4);
   if (VAR_6)
    return VAR_6;

   VAR_6 = VAR_1->ops->set_mc_index(VAR_1, VAR_2, VAR_7);
   return VAR_6;
  }
 }


 for (VAR_7 = 0; VAR_7 < VAR_1->num_vlan_mc; VAR_7++) {
  int VAR_8;

  VAR_6 = FUNC_1(VAR_1, VAR_7, &VAR_8);
  if (VAR_6)
   return VAR_6;

  if (!VAR_8) {

   VAR_6 = VAR_1->ops->get_vlan_4k(VAR_1, VAR_3, &VAR_5);
   if (VAR_6)
    return VAR_6;

   VAR_4.vid = VAR_3;
   VAR_4.member = VAR_5.member;
   VAR_4.untag = VAR_5.untag;
   VAR_4.fid = VAR_5.fid;
   VAR_6 = VAR_1->ops->set_vlan_mc(VAR_1, VAR_7, &VAR_4);
   if (VAR_6)
    return VAR_6;

   VAR_6 = VAR_1->ops->set_mc_index(VAR_1, VAR_2, VAR_7);
   return VAR_6;
  }
 }

 FUNC_0(VAR_1->dev,
  "all VLAN member configurations are in use\n");

 return -VAR_0;
}
