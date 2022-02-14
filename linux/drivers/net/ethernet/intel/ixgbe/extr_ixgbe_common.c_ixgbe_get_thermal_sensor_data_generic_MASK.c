
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct ixgbe_thermal_sensor_data {TYPE_6__* sensor; } ;
struct TYPE_10__ {scalar_t__ (* read_i2c_byte ) (struct ixgbe_hw*,int ,int ,int *) ;} ;
struct TYPE_11__ {TYPE_4__ ops; } ;
struct TYPE_8__ {scalar_t__ (* read ) (struct ixgbe_hw*,size_t,size_t*) ;} ;
struct TYPE_9__ {TYPE_2__ ops; } ;
struct TYPE_7__ {struct ixgbe_thermal_sensor_data thermal_sensor_data; } ;
struct ixgbe_hw {TYPE_5__ phy; TYPE_3__ eeprom; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;
struct TYPE_12__ {int temp; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,size_t*,size_t*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,size_t,size_t*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,int ,int *) ;

s32 FUNC_4(struct ixgbe_hw *VAR_11)
{
 s32 VAR_12;
 u16 VAR_13;
 u16 VAR_14;
 u16 VAR_15;
 u8 VAR_16;
 u8 VAR_17;
 struct ixgbe_thermal_sensor_data *VAR_18 = &VAR_11->mac.thermal_sensor_data;


 if ((FUNC_0(VAR_11, VAR_8) & VAR_9))
  return VAR_7;

 VAR_12 = FUNC_1(VAR_11, &VAR_14, &VAR_13);
 if (VAR_12)
  return VAR_12;

 VAR_16 = (VAR_14 & VAR_4);
 if (VAR_16 > VAR_6)
  VAR_16 = VAR_6;

 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  u8 VAR_19;
  u8 VAR_20;

  VAR_12 = VAR_11->eeprom.ops.read(VAR_11, (VAR_13 + 1 + VAR_17),
          &VAR_15);
  if (VAR_12)
   return VAR_12;

  VAR_19 = ((VAR_15 & VAR_0) >>
    VAR_1);
  VAR_20 = ((VAR_15 & VAR_2) >>
       VAR_3);

  if (VAR_20 != 0) {
   VAR_12 = VAR_11->phy.ops.read_i2c_byte(VAR_11,
     VAR_10[VAR_19],
     VAR_5,
     &VAR_18->sensor[VAR_17].temp);
   if (VAR_12)
    return VAR_12;
  }
 }

 return 0;
}
