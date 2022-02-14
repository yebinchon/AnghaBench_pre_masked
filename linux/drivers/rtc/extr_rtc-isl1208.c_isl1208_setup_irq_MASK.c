
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int *,int ,int,int ,struct i2c_client*) ;
 int FUNC_3 (int) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_2(&VAR_4->dev, VAR_5, ((void*)0),
     VAR_3,
     VAR_1 | VAR_0,
     VAR_2.driver.name,
     VAR_4);
 if (!VAR_6) {
  FUNC_1(&VAR_4->dev, 1);
  FUNC_3(VAR_5);
 } else {
  FUNC_0(&VAR_4->dev,
   "Unable to request irq %d, no alarm support\n",
   VAR_5);
 }
 return VAR_6;
}
