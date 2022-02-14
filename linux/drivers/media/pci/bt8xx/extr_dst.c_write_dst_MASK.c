
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct dst_state {int i2c; TYPE_1__* config; } ;
struct TYPE_2__ {int demod_address; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct dst_state*) ;
 int FUNC_2 (struct dst_state*) ;
 int FUNC_3 (int ,struct i2c_msg*,int) ;

int FUNC_4(struct dst_state *VAR_0, u8 *VAR_1, u8 VAR_2)
{
 struct i2c_msg VAR_3 = {
  .addr = VAR_0->config->demod_address,
  .flags = 0,
  .buf = VAR_1,
  .len = VAR_2
 };

 int VAR_4;
 u8 VAR_5;

 FUNC_0(1, "writing [ %*ph ]\n", VAR_2, VAR_1);

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  if ((VAR_4 = FUNC_3(VAR_0->i2c, &VAR_3, 1)) < 0) {
   FUNC_0(2, "_write_dst error (err == %i, len == 0x%02x, b0 == 0x%02x)\n",
    VAR_4, VAR_2, VAR_1[0]);
   FUNC_2(VAR_0);
   continue;
  } else
   break;
 }
 if (VAR_5 >= 2) {
  FUNC_0(2, "RDC 8820 RESET\n");
  FUNC_1(VAR_0);

  return -1;
 }

 return 0;
}
