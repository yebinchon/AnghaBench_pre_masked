
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w1_slave {int dev; } ;
struct TYPE_2__ {int read; } ;
struct bq27xxx_device_info {char* name; TYPE_1__ bus; int chip; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bq27xxx_device_info*) ;
 int FUNC_1 (int *,struct bq27xxx_device_info*) ;
 struct bq27xxx_device_info* FUNC_2 (int *,int,int ) ;

__attribute__((used)) static int FUNC_3(struct w1_slave *VAR_4)
{
 struct bq27xxx_device_info *VAR_5;

 VAR_5 = FUNC_2(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 FUNC_1(&VAR_4->dev, VAR_5);

 VAR_5->dev = &VAR_4->dev;
 VAR_5->chip = VAR_0;
 VAR_5->name = "bq27000-battery";
 VAR_5->bus.read = VAR_3;

 return FUNC_0(VAR_5);
}
