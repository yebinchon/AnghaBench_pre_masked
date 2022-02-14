
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq27xxx_device_info {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bq27xxx_device_info*,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct bq27xxx_device_info *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0, 0);
 if (VAR_2 < 0)
  FUNC_1(VAR_1->dev, "error reading cycle count total\n");

 return VAR_2;
}
