
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_vlan_rdc {int rdc_num; int vlan_pref; } ;
struct niu_parent {int * flow_key; int * tcam_key; } ;
struct niu_classifier {int num_alt_mac_mappings; struct niu_altmac_rdc* alt_mac_mappings; struct niu_vlan_rdc* vlan_mappings; int h2_init; int h1_init; } ;
struct niu_altmac_rdc {int mac_pref; int rdc_num; int alt_mac_num; } ;
struct niu {int port; struct niu_classifier clas; struct niu_parent* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct niu*) ;
 int FUNC_1 (struct niu*,int ,int ,int ) ;
 int FUNC_2 (struct niu*,int,int ) ;
 int FUNC_3 (struct niu*) ;
 int FUNC_4 (struct niu*,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct niu*,int) ;
 int FUNC_7 (struct niu*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct niu *VAR_5)
{
 struct niu_parent *VAR_6 = VAR_5->parent;
 struct niu_classifier *VAR_7 = &VAR_5->clas;
 int VAR_8, VAR_9;

 FUNC_5(VAR_3, VAR_7->h1_init);
 FUNC_5(VAR_4, VAR_7->h2_init);

 VAR_9 = FUNC_0(VAR_5);
 if (VAR_9)
  return VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  struct niu_vlan_rdc *VAR_10 = &VAR_7->vlan_mappings[VAR_8];

  FUNC_7(VAR_5, VAR_8, VAR_5->port,
          VAR_10->vlan_pref, VAR_10->rdc_num);
 }

 for (VAR_8 = 0; VAR_8 < VAR_7->num_alt_mac_mappings; VAR_8++) {
  struct niu_altmac_rdc *VAR_11 = &VAR_7->alt_mac_mappings[VAR_8];

  VAR_9 = FUNC_1(VAR_5, VAR_11->alt_mac_num,
      VAR_11->rdc_num, VAR_11->mac_pref);
  if (VAR_9)
   return VAR_9;
 }

 for (VAR_8 = VAR_1; VAR_8 <= VAR_0; VAR_8++) {
  int VAR_12 = VAR_8 - VAR_1;

  VAR_9 = FUNC_4(VAR_5, VAR_8, VAR_6->tcam_key[VAR_12]);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_2(VAR_5, VAR_8, VAR_6->flow_key[VAR_12]);
  if (VAR_9)
   return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_5);
 if (VAR_9)
  return VAR_9;

 FUNC_6(VAR_5, 1);

 return 0;
}
