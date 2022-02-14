
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int val; int addr; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  FUNC_1(VAR_2, VAR_0[VAR_3].addr,
    VAR_0[VAR_3].val);

 return 0;
}
