
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_device {int features; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 struct i2c_device* FUNC_0 (struct i2c_adapter*) ;

__attribute__((used)) static u32 FUNC_1(struct i2c_adapter *VAR_25)
{
 struct i2c_device *VAR_26 = FUNC_0(VAR_25);
 u32 VAR_27 =
  VAR_3 |
  !VAR_2 |
  !VAR_4 |
  ((VAR_26->features & VAR_1) ? VAR_11 : 0) |
  !VAR_6 |
  VAR_13 |
  !VAR_15 |
  !VAR_21 |
  !VAR_16 |
  !VAR_22 |
  !VAR_18 |
  !VAR_24 |
  !VAR_12 |
  !VAR_14 |
  !VAR_20 |
  ((VAR_26->features & VAR_0) ? VAR_17 : 0) |
  VAR_23 |

  VAR_7 |
  VAR_8 |
  VAR_19 |
  VAR_5 |
  !VAR_10 |
  !VAR_9;
 return VAR_27;
}
