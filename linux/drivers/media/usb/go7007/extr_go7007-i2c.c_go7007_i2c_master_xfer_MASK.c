
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; scalar_t__ addr; int flags; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct go7007 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct go7007*,scalar_t__,int,int,int,int*) ;
 struct go7007* FUNC_1 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_2,
     struct i2c_msg VAR_3[], int VAR_4)
{
 struct go7007 *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {


  if (VAR_3[VAR_6].len == 2) {
   if (VAR_6 + 1 == VAR_4 || VAR_3[VAR_6].addr != VAR_3[VAR_6 + 1].addr ||
     (VAR_3[VAR_6].flags & VAR_1) ||
     !(VAR_3[VAR_6 + 1].flags & VAR_1) ||
     VAR_3[VAR_6 + 1].len != 1)
    return -VAR_0;
   if (FUNC_0(VAR_5, VAR_3[VAR_6].addr, 1,
     (VAR_3[VAR_6].buf[0] << 8) | VAR_3[VAR_6].buf[1],
     0x01, &VAR_3[VAR_6 + 1].buf[0]) < 0)
    return -VAR_0;
   ++VAR_6;
  } else if (VAR_3[VAR_6].len == 3) {
   if (VAR_3[VAR_6].flags & VAR_1)
    return -VAR_0;
   if (VAR_3[VAR_6].len != 3)
    return -VAR_0;
   if (FUNC_0(VAR_5, VAR_3[VAR_6].addr, 0,
     (VAR_3[VAR_6].buf[0] << 8) | VAR_3[VAR_6].buf[1],
     0x01, &VAR_3[VAR_6].buf[2]) < 0)
    return -VAR_0;
  } else
   return -VAR_0;
 }

 return VAR_4;
}
