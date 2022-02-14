
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bq27xxx_device_info {int unseal_key; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bq27xxx_device_info*,int ,int ,int) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct bq27xxx_device_info *VAR_2)
{
 int VAR_3;

 if (VAR_2->unseal_key == 0) {
  FUNC_1(VAR_2->dev, "unseal failed due to missing key\n");
  return -VAR_1;
 }

 VAR_3 = FUNC_0(VAR_2, VAR_0, (u16)(VAR_2->unseal_key >> 16), 0);
 if (VAR_3 < 0)
  goto out;

 VAR_3 = FUNC_0(VAR_2, VAR_0, (u16)VAR_2->unseal_key, 0);
 if (VAR_3 < 0)
  goto out;

 return 0;

out:
 FUNC_1(VAR_2->dev, "bus error on unseal: %d\n", VAR_3);
 return VAR_3;
}
