
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct TYPE_3__ {int val; int reg; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_3 = FUNC_2(VAR_1, VAR_0[VAR_2].reg,
           VAR_0[VAR_2].val);
  if (VAR_3)
   return VAR_3;
 }


 FUNC_1(150);

 return 0;
}
