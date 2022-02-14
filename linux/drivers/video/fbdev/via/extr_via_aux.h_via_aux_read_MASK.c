
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct via_aux_drv {TYPE_1__* bus; int addr; } ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct TYPE_2__ {int adap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static inline bool FUNC_1(struct via_aux_drv *VAR_1, u8 VAR_2, u8 *VAR_3,
 u8 VAR_4)
{
 struct i2c_msg VAR_5[2] = {
  {.addr = VAR_1->addr, .flags = 0, .len = 1, .buf = &VAR_2},
  {.addr = VAR_1->addr, .flags = VAR_0, .len = VAR_4, .buf = VAR_3} };

 return FUNC_0(VAR_1->bus->adap, VAR_5, 2) == 2;
}
