
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ofdpa_port {int vlan_bitmap; int dev; int pport; } ;
typedef enum rocker_of_dpa_table_id { ____Placeholder_rocker_of_dpa_table_id } rocker_of_dpa_table_id ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ofdpa_port*,int,int ,int ,int ,int,int,int ) ;
 int FUNC_5 (struct ofdpa_port*,int,int ) ;
 int FUNC_6 (struct ofdpa_port*,int,int*) ;
 int FUNC_7 (struct ofdpa_port*,int,int ) ;
 int FUNC_8 (struct ofdpa_port*,int,int ,int) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct ofdpa_port *VAR_2, int VAR_3,
      u16 VAR_4)
{
 enum rocker_of_dpa_table_id VAR_5 =
   VAR_1;
 u32 VAR_6 = VAR_2->pport;
 __be16 VAR_7 = FUNC_1(VAR_4);
 __be16 VAR_8 = FUNC_1(0xffff);
 __be16 VAR_9;
 bool VAR_10;
 bool VAR_11 = !(VAR_3 & VAR_0);
 int VAR_12;

 VAR_9 = FUNC_6(VAR_2, VAR_4, &VAR_10);

 if (VAR_11 &&
     FUNC_9(FUNC_3(VAR_9), VAR_2->vlan_bitmap))
  return 0;
 else if (!VAR_11 &&
   !FUNC_9(FUNC_3(VAR_9), VAR_2->vlan_bitmap))
  return 0;

 FUNC_0(FUNC_3(VAR_9), VAR_2->vlan_bitmap);

 if (VAR_11) {
  VAR_12 = FUNC_5(VAR_2, VAR_3,
            VAR_9);
  if (VAR_12) {
   FUNC_2(VAR_2->dev, "Error (%d) port ctrl vlan add\n", VAR_12);
   goto err_vlan_add;
  }
 }

 VAR_12 = FUNC_8(VAR_2, VAR_3,
     VAR_9, VAR_10);
 if (VAR_12) {
  FUNC_2(VAR_2->dev, "Error (%d) port VLAN l2 groups\n", VAR_12);
  goto err_vlan_l2_groups;
 }

 VAR_12 = FUNC_7(VAR_2, VAR_3,
       VAR_9);
 if (VAR_12) {
  FUNC_2(VAR_2->dev, "Error (%d) port VLAN l2 flood group\n", VAR_12);
  goto err_flood_group;
 }

 VAR_12 = FUNC_4(VAR_2, VAR_3,
      VAR_6, VAR_7, VAR_8,
      VAR_5, VAR_10, VAR_9);
 if (VAR_12)
  FUNC_2(VAR_2->dev, "Error (%d) port VLAN table\n", VAR_12);

 return 0;

err_vlan_add:
err_vlan_l2_groups:
err_flood_group:
 FUNC_0(FUNC_3(VAR_9), VAR_2->vlan_bitmap);
 return VAR_12;
}
