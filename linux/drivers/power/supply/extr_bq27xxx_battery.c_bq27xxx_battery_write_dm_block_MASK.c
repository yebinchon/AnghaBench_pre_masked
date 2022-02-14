
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq27xxx_dm_buf {int dirty; int data; int block; int class; } ;
struct bq27xxx_device_info {int opts; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (struct bq27xxx_dm_buf*) ;
 int FUNC_2 (struct bq27xxx_device_info*) ;
 int FUNC_3 (struct bq27xxx_device_info*) ;
 int FUNC_4 (struct bq27xxx_device_info*,int ,int ,int) ;
 int FUNC_5 (struct bq27xxx_device_info*,int ,int ,int ) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int FUNC_7(struct bq27xxx_device_info *VAR_7,
       struct bq27xxx_dm_buf *VAR_8)
{
 bool VAR_9 = VAR_7->opts & VAR_6;
 int VAR_10;

 if (!VAR_8->dirty)
  return 0;

 if (VAR_9) {
  VAR_10 = FUNC_2(VAR_7);
  if (VAR_10 < 0)
   return VAR_10;
 }

 VAR_10 = FUNC_4(VAR_7, VAR_3, 0, 1);
 if (VAR_10 < 0)
  goto out;

 VAR_10 = FUNC_4(VAR_7, VAR_2, VAR_8->class, 1);
 if (VAR_10 < 0)
  goto out;

 VAR_10 = FUNC_4(VAR_7, VAR_0, VAR_8->block, 1);
 if (VAR_10 < 0)
  goto out;

 FUNC_0(1);

 VAR_10 = FUNC_5(VAR_7, VAR_4, VAR_8->data, VAR_5);
 if (VAR_10 < 0)
  goto out;

 VAR_10 = FUNC_4(VAR_7, VAR_1,
       FUNC_1(VAR_8), 1);
 if (VAR_10 < 0)
  goto out;






 if (VAR_9) {
  FUNC_0(1);
  VAR_10 = FUNC_3(VAR_7);
  if (VAR_10 < 0)
   return VAR_10;
 } else {
  FUNC_0(100);
 }

 VAR_8->dirty = 0;

 return 0;

out:
 if (VAR_9)
  FUNC_3(VAR_7);

 FUNC_6(VAR_7->dev, "bus error writing chip memory: %d\n", VAR_10);
 return VAR_10;
}
