
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct stmfx {int * vdd; int map; } ;
struct i2c_client {int addr; int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int,int ,int ) ;
 int * FUNC_5 (int *,char*) ;
 struct stmfx* FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (int ,int ,int *,int ) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct stmfx*) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_6)
{
 struct stmfx *VAR_7 = FUNC_6(VAR_6);
 u32 VAR_8;
 u8 VAR_9[2];
 int VAR_10;

 VAR_7->vdd = FUNC_5(&VAR_6->dev, "vdd");
 VAR_10 = FUNC_2(VAR_7->vdd);
 if (VAR_10 == -VAR_1) {
  VAR_7->vdd = ((void*)0);
 } else if (VAR_10 == -VAR_2) {
  return VAR_10;
 } else if (VAR_10) {
  FUNC_3(&VAR_6->dev, "Failed to get VDD regulator: %d\n", VAR_10);
  return VAR_10;
 }

 if (VAR_7->vdd) {
  VAR_10 = FUNC_10(VAR_7->vdd);
  if (VAR_10) {
   FUNC_3(&VAR_6->dev, "VDD enable failed: %d\n", VAR_10);
   return VAR_10;
  }
 }

 VAR_10 = FUNC_8(VAR_7->map, VAR_3, &VAR_8);
 if (VAR_10) {
  FUNC_3(&VAR_6->dev, "Error reading chip ID: %d\n", VAR_10);
  goto err;
 }
 if (FUNC_1(VAR_4, ~VAR_8) != (VAR_6->addr << 1)) {
  FUNC_3(&VAR_6->dev, "Unknown chip ID: %#x\n", VAR_8);
  VAR_10 = -VAR_0;
  goto err;
 }

 VAR_10 = FUNC_7(VAR_7->map, VAR_5,
          VAR_9, FUNC_0(VAR_9));
 if (VAR_10) {
  FUNC_3(&VAR_6->dev, "Error reading FW version: %d\n", VAR_10);
  goto err;
 }

 FUNC_4(&VAR_6->dev, "STMFX id: %#x, fw version: %x.%02x\n",
   VAR_8, VAR_9[0], VAR_9[1]);

 VAR_10 = FUNC_11(VAR_7);
 if (VAR_10) {
  FUNC_3(&VAR_6->dev, "Failed to reset chip: %d\n", VAR_10);
  goto err;
 }

 return 0;

err:
 if (VAR_7->vdd)
  return FUNC_9(VAR_7->vdd);

 return VAR_10;
}
