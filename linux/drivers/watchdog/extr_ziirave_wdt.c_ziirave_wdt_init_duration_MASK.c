
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int FUNC_2 (int ,char*,int*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4)
{
 int VAR_5;

 if (!VAR_3) {

  if (!VAR_4->dev.of_node)
   VAR_5 = -VAR_1;
  else
   VAR_5 = FUNC_2(VAR_4->dev.of_node,
         "reset-duration-ms",
         &VAR_3);
  if (VAR_5) {
   FUNC_0(&VAR_4->dev,
    "No reset pulse duration specified, using default\n");
   return 0;
  }
 }

 if (VAR_3 < 1 || VAR_3 > 255)
  return -VAR_0;

 FUNC_0(&VAR_4->dev, "Setting reset duration to %dms",
   VAR_3);

 return FUNC_1(VAR_4, VAR_2,
      VAR_3);
}
