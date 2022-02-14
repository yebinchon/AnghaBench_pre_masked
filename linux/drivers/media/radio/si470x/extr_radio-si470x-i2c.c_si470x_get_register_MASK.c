
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct si470x_device {int * registers; TYPE_1__* client; } ;
struct i2c_msg {int len; void* buf; int flags; int addr; } ;
typedef int __be16 ;
struct TYPE_2__ {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct si470x_device *VAR_3, int VAR_4)
{
 __be16 VAR_5[VAR_2];
 struct i2c_msg VAR_6[1] = {
  {
   .addr = VAR_3->client->addr,
   .flags = VAR_1,
   .len = sizeof(u16) * VAR_2,
   .buf = (void *)VAR_5
  },
 };

 if (FUNC_2(VAR_3->client->adapter, VAR_6, 1) != 1)
  return -VAR_0;

 VAR_3->registers[VAR_4] = FUNC_1(VAR_5[FUNC_0(VAR_4)]);

 return 0;
}
