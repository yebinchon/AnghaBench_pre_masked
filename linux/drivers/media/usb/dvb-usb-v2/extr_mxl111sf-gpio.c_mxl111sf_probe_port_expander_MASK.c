
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mxl111sf_state {int port_expander_addr; void* gpio_port_expander; TYPE_1__* d; } ;
struct i2c_msg {int* buf; int len; int addr; int flags; } ;
struct TYPE_2__ {int i2c_adap; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct mxl111sf_state *VAR_3)
{
 int VAR_4;
 u8 VAR_5 = 1;
 u8 VAR_6 = 0;
 struct i2c_msg VAR_7[] = {
  { .flags = 0, .buf = &VAR_5, .len = 1 },
  { .flags = VAR_0, .buf = &VAR_6, .len = 1 },
 };

 FUNC_1("()");

 VAR_7[0].addr = 0x70 >> 1;
 VAR_7[1].addr = 0x70 >> 1;


 VAR_4 = FUNC_0(&VAR_3->d->i2c_adap, VAR_7, 2);
 if (VAR_4 == 2) {
  VAR_3->port_expander_addr = VAR_7[0].addr;
  VAR_3->gpio_port_expander = VAR_1;
  FUNC_1("found port expander at 0x%02x",
     VAR_3->port_expander_addr);
  return 0;
 }

 VAR_7[0].addr = 0x40 >> 1;
 VAR_7[1].addr = 0x40 >> 1;

 VAR_4 = FUNC_0(&VAR_3->d->i2c_adap, VAR_7, 2);
 if (VAR_4 == 2) {
  VAR_3->port_expander_addr = VAR_7[0].addr;
  VAR_3->gpio_port_expander = VAR_1;
  FUNC_1("found port expander at 0x%02x",
     VAR_3->port_expander_addr);
  return 0;
 }
 VAR_3->port_expander_addr = 0xff;
 VAR_3->gpio_port_expander = VAR_2;
 FUNC_1("using hardware gpio");
 return 0;
}
