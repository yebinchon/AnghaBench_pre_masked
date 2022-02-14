
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_table {int dummy; } ;
struct ksz_device {int vlan_cache; int num_vlans; int dev; } ;
struct dsa_switch {int dev; struct ksz_device* priv; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (struct ksz_device*,int ,int ,int) ;
 int FUNC_3 (struct dsa_switch*) ;
 int FUNC_4 (struct ksz_device*) ;
 int FUNC_5 (struct ksz_device*,int ,int ,int) ;
 int FUNC_6 (struct ksz_device*) ;

__attribute__((used)) static int FUNC_7(struct dsa_switch *VAR_15)
{
 struct ksz_device *VAR_16 = VAR_15->priv;
 int VAR_17 = 0;

 VAR_16->vlan_cache = FUNC_1(VAR_16->dev, sizeof(struct vlan_table),
           VAR_16->num_vlans, VAR_1);
 if (!VAR_16->vlan_cache)
  return -VAR_0;

 VAR_17 = FUNC_4(VAR_16);
 if (VAR_17) {
  FUNC_0(VAR_15->dev, "failed to reset switch\n");
  return VAR_17;
 }


 FUNC_2(VAR_16, VAR_8, VAR_14,
        1);


 FUNC_5(VAR_16, VAR_3, VAR_9, 0);


 FUNC_5(VAR_16, VAR_4, VAR_10, 1);

 FUNC_3(VAR_15);

 FUNC_5(VAR_16, VAR_4, VAR_2, 1);


 FUNC_5(VAR_16, VAR_5, VAR_12, 1);


 FUNC_5(VAR_16, VAR_6, VAR_11, 1);


 FUNC_5(VAR_16, VAR_7, VAR_13, 1);

 FUNC_6(VAR_16);

 return 0;
}
