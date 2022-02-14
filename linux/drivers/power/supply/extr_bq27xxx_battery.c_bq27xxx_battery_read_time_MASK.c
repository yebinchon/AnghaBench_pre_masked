
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bq27xxx_device_info {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bq27xxx_device_info*,int ,int) ;
 int FUNC_1 (int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct bq27xxx_device_info *VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, 0);
 if (VAR_3 < 0) {
  FUNC_1(VAR_1->dev, "error reading time register %02x: %d\n",
   VAR_2, VAR_3);
  return VAR_3;
 }

 if (VAR_3 == 65535)
  return -VAR_0;

 return VAR_3 * 60;
}
