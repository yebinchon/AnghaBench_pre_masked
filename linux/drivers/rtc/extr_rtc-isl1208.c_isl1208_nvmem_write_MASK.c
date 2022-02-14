
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isl1208_state {TYPE_2__* rtc; } ;
struct i2c_client {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct i2c_client*,scalar_t__,void*,size_t) ;
 struct i2c_client* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, unsigned int VAR_2, void *VAR_3,
          size_t VAR_4)
{
 struct isl1208_state *VAR_5 = VAR_1;
 struct i2c_client *VAR_6 = FUNC_1(VAR_5->rtc->dev.parent);
 int VAR_7;


 if (!VAR_4)
  return VAR_4;
 VAR_7 = FUNC_0(VAR_6, VAR_0 + VAR_2, VAR_3,
       VAR_4);

 return VAR_7 == 0 ? VAR_4 : VAR_7;
}
