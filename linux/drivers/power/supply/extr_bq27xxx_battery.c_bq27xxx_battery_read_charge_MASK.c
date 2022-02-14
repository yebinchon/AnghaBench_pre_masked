
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bq27xxx_device_info {int opts; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bq27xxx_device_info*,int ,int) ;
 int FUNC_1 (int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct bq27xxx_device_info *VAR_3, u8 VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4, 0);
 if (VAR_5 < 0) {
  FUNC_1(VAR_3->dev, "error reading charge register %02x: %d\n",
   VAR_4, VAR_5);
  return VAR_5;
 }

 if (VAR_3->opts & VAR_1)
  VAR_5 *= VAR_0 / VAR_2;
 else
  VAR_5 *= 1000;

 return VAR_5;
}
