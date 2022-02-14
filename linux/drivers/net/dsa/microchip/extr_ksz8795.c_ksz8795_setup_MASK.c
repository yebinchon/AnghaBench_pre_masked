
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_table {int dummy; } ;
struct ksz_device {int host_mask; int * regmap; int vlan_cache; int num_vlans; int dev; } ;
struct dsa_switch {int dev; struct ksz_device* priv; } ;
struct alu_struct {int is_static; int is_override; int port_forward; int mac; } ;
typedef int alu ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int VAR_19 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dsa_switch*) ;
 int FUNC_4 (struct ksz_device*,int) ;
 int FUNC_5 (struct ksz_device*) ;
 int FUNC_6 (struct ksz_device*,int ,struct alu_struct*) ;
 int FUNC_7 (struct ksz_device*,int ,int ,int) ;
 int FUNC_8 (struct ksz_device*) ;
 int FUNC_9 (struct alu_struct*,int ,int) ;
 int FUNC_10 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_11(struct dsa_switch *VAR_20)
{
 struct ksz_device *VAR_21 = VAR_20->priv;
 struct alu_struct VAR_22;
 int VAR_23, VAR_24 = 0;

 VAR_21->vlan_cache = FUNC_1(VAR_21->dev, sizeof(struct vlan_table),
           VAR_21->num_vlans, VAR_4);
 if (!VAR_21->vlan_cache)
  return -VAR_3;

 VAR_24 = FUNC_5(VAR_21);
 if (VAR_24) {
  FUNC_0(VAR_20->dev, "failed to reset switch\n");
  return VAR_24;
 }

 FUNC_7(VAR_21, VAR_16, VAR_10, 1);


 FUNC_7(VAR_21, VAR_14, VAR_11, 1);


 FUNC_10(VAR_21->regmap[0], VAR_7,
      VAR_9, VAR_9);





 FUNC_10(VAR_21->regmap[0], VAR_8,
      VAR_17 | VAR_6,
      VAR_17 | VAR_6);

 FUNC_3(VAR_20);

 FUNC_7(VAR_21, VAR_8, VAR_5, 1);

 FUNC_7(VAR_21, VAR_16, VAR_13, 0);

 FUNC_7(VAR_21, VAR_15, VAR_12, 0);


 FUNC_10(VAR_21->regmap[1], VAR_16,
      VAR_1,
      (VAR_2 *
      VAR_0) / 100);

 for (VAR_23 = 0; VAR_23 < VAR_18; VAR_23++)
  FUNC_4(VAR_21, VAR_23);


 FUNC_9(&VAR_22, 0, sizeof(VAR_22));
 FUNC_2(VAR_22.mac, VAR_19);
 VAR_22.is_static = 1;
 VAR_22.is_override = 1;
 VAR_22.port_forward = VAR_21->host_mask;

 FUNC_6(VAR_21, 0, &VAR_22);

 FUNC_8(VAR_21);

 return 0;
}
