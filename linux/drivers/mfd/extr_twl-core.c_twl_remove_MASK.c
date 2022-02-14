
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl_client {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int ready; struct twl_client* twl_modules; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 unsigned int FUNC_4 () ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_1)
{
 unsigned VAR_2, VAR_3;
 int VAR_4;

 if (FUNC_3())
  VAR_4 = FUNC_1();
 else
  VAR_4 = FUNC_2();

 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = FUNC_4();
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  struct twl_client *VAR_5 = &VAR_0->twl_modules[VAR_2];

  if (VAR_5->client && VAR_5->client != VAR_1)
   FUNC_0(VAR_5->client);
  VAR_5->client = ((void*)0);
 }
 VAR_0->ready = 0;
 return 0;
}
