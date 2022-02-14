
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sd {TYPE_1__* sensor; } ;
struct TYPE_2__ {int i2c_len; } ;


 int FUNC_0 (struct sd*,int *,int) ;
 int FUNC_1 (struct sd*,int *,int) ;

int FUNC_2(struct sd *VAR_0, u8 VAR_1, u16 VAR_2)
{
 if (VAR_0->sensor->i2c_len == 2) {
  u16 VAR_3[2] = { VAR_1, VAR_2 };
  return FUNC_1(VAR_0, VAR_3, 1);
 } else {
  u8 VAR_4[2] = { VAR_1, VAR_2 };
  return FUNC_0(VAR_0, VAR_4, 1);
 }
}
