
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
typedef int s16 ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_5, int *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_4[VAR_3].addr);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = (s16)VAR_7;


 if (VAR_7 == 0)
  *VAR_6 = VAR_2;

 if (*VAR_6 == VAR_2) {

  if (VAR_7 > 0)
   *VAR_6 = VAR_0;
  else if (VAR_7 < 0)
   *VAR_6 = VAR_1;
 }

 return 0;
}
