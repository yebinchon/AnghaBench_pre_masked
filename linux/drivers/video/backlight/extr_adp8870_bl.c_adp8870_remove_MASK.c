
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct adp8870_bl {TYPE_3__* bl; TYPE_1__* pdata; scalar_t__ led; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct TYPE_4__ {scalar_t__ en_ambl_sens; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;
 int FUNC_1 (struct i2c_client*) ;
 struct adp8870_bl* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3)
{
 struct adp8870_bl *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_3, VAR_0, VAR_1);

 if (VAR_4->led)
  FUNC_1(VAR_3);

 if (VAR_4->pdata->en_ambl_sens)
  FUNC_3(&VAR_4->bl->dev.kobj,
   &VAR_2);

 return 0;
}
