
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int sram_base_address; } ;
struct hl_device {TYPE_1__ asic_prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct hl_device *VAR_30, u32 VAR_31, int VAR_32)
{
 u32 VAR_33, VAR_34;
 u32 VAR_35, VAR_36;
 u32 VAR_37, VAR_38;
 u64 VAR_39;
 u32 VAR_40 = VAR_32 * (VAR_29 - VAR_27);

 VAR_33 = FUNC_2(VAR_0 + VAR_7);
 VAR_34 = FUNC_3(VAR_0 + VAR_7);
 VAR_35 = FUNC_2(VAR_0 + VAR_8);
 VAR_36 = FUNC_3(VAR_0 + VAR_8);

 VAR_37 =
  FUNC_2(VAR_0 + VAR_6);
 VAR_38 =
  FUNC_3(VAR_0 + VAR_6);

 VAR_39 = VAR_30->asic_prop.sram_base_address + VAR_31;

 FUNC_0(VAR_25 + VAR_40, FUNC_2(VAR_39));
 FUNC_0(VAR_24 + VAR_40, FUNC_3(VAR_39));
 FUNC_0(VAR_28 + VAR_40, FUNC_1(VAR_5));
 FUNC_0(VAR_27 + VAR_40, 0);
 FUNC_0(VAR_26 + VAR_40, 0);
 FUNC_0(VAR_11 + VAR_40, 0x10C0);
 FUNC_0(VAR_10 + VAR_40, 0x10C4);
 FUNC_0(VAR_12 + VAR_40, 0x10C8);
 FUNC_0(VAR_9 + VAR_40, 0x10CC);

 FUNC_0(VAR_14 + VAR_40, VAR_33);
 FUNC_0(VAR_13 + VAR_40, VAR_34);
 FUNC_0(VAR_16 + VAR_40, VAR_35);
 FUNC_0(VAR_15 + VAR_40, VAR_36);

 FUNC_0(VAR_17 + VAR_40, 0x00080008);

 FUNC_0(VAR_20 + VAR_40, VAR_37);
 FUNC_0(VAR_19 + VAR_40, VAR_38);

 FUNC_0(VAR_22 + VAR_40,
   VAR_1 + VAR_32);

 FUNC_0(VAR_21 + VAR_40, VAR_3);

 FUNC_0(VAR_23 + VAR_40, VAR_4);

 FUNC_0(VAR_18 + VAR_40, VAR_2);
}
