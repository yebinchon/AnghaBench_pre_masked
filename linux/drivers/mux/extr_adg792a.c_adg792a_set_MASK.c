
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mux_control {TYPE_2__* chip; } ;
struct i2c_client {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {int controllers; TYPE_1__ dev; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 unsigned int FUNC_4 (struct mux_control*) ;
 struct i2c_client* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct mux_control *VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_5(VAR_2->chip->dev.parent);
 u8 VAR_5;

 if (VAR_2->chip->controllers == 1) {

  if (VAR_3 == VAR_1)
   VAR_5 = VAR_0;
  else
   VAR_5 = FUNC_2(VAR_3);
 } else {
  unsigned int VAR_6 = FUNC_4(VAR_2);

  if (VAR_3 == VAR_1)
   VAR_5 = FUNC_0(VAR_6);
  else
   VAR_5 = FUNC_1(VAR_6, VAR_3);
 }

 return FUNC_3(VAR_4, VAR_5, 0);
}
