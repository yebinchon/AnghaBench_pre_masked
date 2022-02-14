
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lp855x {TYPE_2__* dev; scalar_t__ supply; TYPE_3__* bl; } ;
struct i2c_client {int dummy; } ;
struct TYPE_4__ {scalar_t__ brightness; } ;
struct TYPE_6__ {TYPE_1__ props; } ;
struct TYPE_5__ {int kobj; } ;


 int FUNC_0 (TYPE_3__*) ;
 struct lp855x* FUNC_1 (struct i2c_client*) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1)
{
 struct lp855x *VAR_2 = FUNC_1(VAR_1);

 VAR_2->bl->props.brightness = 0;
 FUNC_0(VAR_2->bl);
 if (VAR_2->supply)
  FUNC_2(VAR_2->supply);
 FUNC_3(&VAR_2->dev->kobj, &VAR_0);

 return 0;
}
