
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ sram_base_address; } ;
struct hl_device {TYPE_1__ asic_prop; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_7 ;
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
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct hl_device *VAR_30)
{
 u32 VAR_31, VAR_32;
 u32 VAR_33, VAR_34;
 u32 VAR_35, VAR_36;
 u64 VAR_37;

 VAR_31 = FUNC_2(VAR_0 + VAR_28);
 VAR_32 = FUNC_3(VAR_0 + VAR_28);
 VAR_33 = FUNC_2(VAR_0 + VAR_29);
 VAR_34 = FUNC_3(VAR_0 + VAR_29);

 VAR_35 =
  FUNC_2(VAR_0 + VAR_7);
 VAR_36 =
  FUNC_3(VAR_0 + VAR_7);

 VAR_37 = VAR_30->asic_prop.sram_base_address +
    VAR_2;

 FUNC_0(VAR_24, FUNC_2(VAR_37));
 FUNC_0(VAR_23, FUNC_3(VAR_37));
 FUNC_0(VAR_27, FUNC_1(VAR_3));
 FUNC_0(VAR_26, 0);
 FUNC_0(VAR_25, 0);
 FUNC_0(VAR_10, 0x10C0);
 FUNC_0(VAR_9, 0x10C4);
 FUNC_0(VAR_11, 0x10C8);
 FUNC_0(VAR_8, 0x10CC);

 FUNC_0(VAR_13, VAR_31);
 FUNC_0(VAR_12, VAR_32);
 FUNC_0(VAR_15, VAR_33);
 FUNC_0(VAR_14, VAR_34);


 FUNC_0(VAR_16, 0x00080008);

 FUNC_0(VAR_19, VAR_35);
 FUNC_0(VAR_18, VAR_36);

 FUNC_0(VAR_21, VAR_1);

 FUNC_0(VAR_20, VAR_5);

 FUNC_0(VAR_22, VAR_6);

 FUNC_0(VAR_17, VAR_4);
}
