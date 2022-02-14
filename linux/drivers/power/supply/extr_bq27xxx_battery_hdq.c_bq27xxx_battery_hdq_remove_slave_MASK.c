
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_slave {int dev; } ;
struct bq27xxx_device_info {int dummy; } ;


 int FUNC_0 (struct bq27xxx_device_info*) ;
 struct bq27xxx_device_info* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct w1_slave *VAR_0)
{
 struct bq27xxx_device_info *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(VAR_1);
}
