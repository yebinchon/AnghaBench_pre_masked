
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (struct i2c_client*,int ,int *) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2)
{
 u32 VAR_3;
 u8 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_0, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_3 = 12500;
 FUNC_1(VAR_2->dev.of_node, "quartz-load-femtofarads",
        &VAR_3);

 switch (VAR_3) {
 default:
  FUNC_0(&VAR_2->dev, "Unknown quartz-load-femtofarads value: %d. Assuming 12500",
    VAR_3);

 case 12500:
  VAR_4 |= VAR_1;
  break;
 case 7000:
  VAR_4 &= ~VAR_1;
  break;
 }

 VAR_5 = FUNC_3(VAR_2, VAR_0, VAR_4);

 return VAR_5;
}
