
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int pause_time; int current_mode; int* high_water; int* low_water; } ;
struct TYPE_4__ {int (* fc_autoneg ) (struct ixgbe_hw*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_3__ fc; TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int) ;
 int VAR_12 ;
 int FUNC_6 (struct ixgbe_hw*,char*) ;




 int FUNC_7 (struct ixgbe_hw*) ;

s32 FUNC_8(struct ixgbe_hw *VAR_13)
{
 u32 VAR_14, VAR_15;
 u32 VAR_16;
 u32 VAR_17, VAR_18;
 int VAR_19;


 if (!VAR_13->fc.pause_time)
  return VAR_1;


 for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++) {
  if ((VAR_13->fc.current_mode & 128) &&
      VAR_13->fc.high_water[VAR_19]) {
   if (!VAR_13->fc.low_water[VAR_19] ||
       VAR_13->fc.low_water[VAR_19] >= VAR_13->fc.high_water[VAR_19]) {
    FUNC_6(VAR_13, "Invalid water mark configuration\n");
    return VAR_1;
   }
  }
 }


 VAR_13->mac.ops.fc_autoneg(VAR_13);


 VAR_14 = FUNC_3(VAR_13, VAR_8);
 VAR_14 &= ~(VAR_11 | VAR_10);

 VAR_15 = FUNC_3(VAR_13, VAR_2);
 VAR_15 &= ~(VAR_3 | VAR_4);
 switch (VAR_13->fc.current_mode) {
 case 130:




  break;
 case 129:
  VAR_14 |= VAR_10;
  break;
 case 128:




  VAR_15 |= VAR_3;
  break;
 case 131:

  VAR_14 |= VAR_10;
  VAR_15 |= VAR_3;
  break;
 default:
  FUNC_6(VAR_13, "Flow control param set incorrectly\n");
  return VAR_0;
 }


 VAR_14 |= VAR_9;
 FUNC_5(VAR_13, VAR_8, VAR_14);
 FUNC_5(VAR_13, VAR_2, VAR_15);


 for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++) {
  if ((VAR_13->fc.current_mode & 128) &&
      VAR_13->fc.high_water[VAR_19]) {
   VAR_17 = (VAR_13->fc.low_water[VAR_19] << 10) | VAR_6;
   FUNC_5(VAR_13, FUNC_1(VAR_19), VAR_17);
   VAR_18 = (VAR_13->fc.high_water[VAR_19] << 10) | VAR_5;
  } else {
   FUNC_5(VAR_13, FUNC_1(VAR_19), 0);







   VAR_18 = FUNC_3(VAR_13, FUNC_4(VAR_19)) - 24576;
  }

  FUNC_5(VAR_13, FUNC_0(VAR_19), VAR_18);
 }


 VAR_16 = VAR_13->fc.pause_time * 0x00010001;
 for (VAR_19 = 0; VAR_19 < (VAR_12 / 2); VAR_19++)
  FUNC_5(VAR_13, FUNC_2(VAR_19), VAR_16);

 FUNC_5(VAR_13, VAR_7, VAR_13->fc.pause_time / 2);

 return 0;
}
