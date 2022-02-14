
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; int name; } ;
typedef enum pt1_fe_clk { ____Placeholder_pt1_fe_clk } pt1_fe_clk ;


 int FUNC_0 (int**) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct i2c_client*,int const*,int) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int** VAR_4 ;
 int** VAR_5 ;
 int** VAR_6 ;
 int** VAR_7 ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_8, enum pt1_fe_clk VAR_9)
{
 int VAR_10;
 bool VAR_11;
 const u8 (*VAR_12)[2];
 int VAR_13, VAR_14;

 VAR_11 = !FUNC_4(VAR_8->name, VAR_3,
     FUNC_3(VAR_3));
 if (VAR_11) {
  struct i2c_msg VAR_15[2];
  u8 VAR_16, VAR_17;

  VAR_16 = 0x07;
  VAR_15[0].addr = VAR_8->addr;
  VAR_15[0].flags = 0;
  VAR_15[0].len = 1;
  VAR_15[0].buf = &VAR_16;

  VAR_15[1].addr = VAR_8->addr;
  VAR_15[1].flags = VAR_1;
  VAR_15[1].len = 1;
  VAR_15[1].buf = &VAR_17;
  VAR_10 = FUNC_2(VAR_8->adapter, VAR_15, 2);
  if (VAR_10 < 0)
   return VAR_10;
  if (VAR_17 != 0x41)
   return -VAR_0;
 }


 if (VAR_9 == VAR_2) {
  if (VAR_11) {
   VAR_12 = VAR_4;
   VAR_14 = FUNC_0(VAR_4);
  } else {
   VAR_12 = VAR_6;
   VAR_14 = FUNC_0(VAR_6);
  }
 } else {
  if (VAR_11) {
   VAR_12 = VAR_5;
   VAR_14 = FUNC_0(VAR_5);
  } else {
   VAR_12 = VAR_7;
   VAR_14 = FUNC_0(VAR_7);
  }
 }

 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_10 = FUNC_1(VAR_8, VAR_12[VAR_13], 2);
  if (VAR_10 < 0)
   return VAR_10;
 }
 return 0;
}
