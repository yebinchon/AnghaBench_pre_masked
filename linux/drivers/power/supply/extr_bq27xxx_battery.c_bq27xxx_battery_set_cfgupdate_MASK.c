
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq27xxx_device_info {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bq27xxx_device_info*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static inline int FUNC_2(struct bq27xxx_device_info *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1, 1);
 if (VAR_2 < 0 && VAR_2 != -VAR_0)
  FUNC_1(VAR_1->dev, "bus error on set_cfgupdate: %d\n", VAR_2);

 return VAR_2;
}
