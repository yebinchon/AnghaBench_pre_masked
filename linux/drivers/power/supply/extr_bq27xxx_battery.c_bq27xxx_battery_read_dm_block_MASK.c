
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct bq27xxx_dm_buf {int has_data; int dirty; int data; int block; int class; } ;
struct bq27xxx_device_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct bq27xxx_dm_buf*) ;
 int FUNC_2 (struct bq27xxx_device_info*,int ,int) ;
 int FUNC_3 (struct bq27xxx_device_info*,int ,int ,int ) ;
 int FUNC_4 (struct bq27xxx_device_info*,int ,int ,int) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static int FUNC_6(struct bq27xxx_device_info *VAR_6,
      struct bq27xxx_dm_buf *VAR_7)
{
 int VAR_8;

 VAR_7->has_data = 0;

 VAR_8 = FUNC_4(VAR_6, VAR_2, VAR_7->class, 1);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_4(VAR_6, VAR_0, VAR_7->block, 1);
 if (VAR_8 < 0)
  goto out;

 FUNC_0(1);

 VAR_8 = FUNC_3(VAR_6, VAR_3, VAR_7->data, VAR_4);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_2(VAR_6, VAR_1, 1);
 if (VAR_8 < 0)
  goto out;

 if ((u8)VAR_8 != FUNC_1(VAR_7)) {
  VAR_8 = -VAR_5;
  goto out;
 }

 VAR_7->has_data = 1;
 VAR_7->dirty = 0;

 return 0;

out:
 FUNC_5(VAR_6->dev, "bus error reading chip memory: %d\n", VAR_8);
 return VAR_8;
}
