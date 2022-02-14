
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
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
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct hl_device *VAR_20)
{
 u32 VAR_21, VAR_22;
 u32 VAR_23, VAR_24;
 u32 VAR_25, VAR_26;
 u64 VAR_27;

 VAR_21 = FUNC_1(VAR_0 + VAR_18);
 VAR_22 = FUNC_2(VAR_0 + VAR_18);
 VAR_23 = FUNC_1(VAR_0 + VAR_19);
 VAR_24 = FUNC_2(VAR_0 + VAR_19);

 VAR_25 =
  FUNC_1(VAR_0 + VAR_6);
 VAR_26 =
  FUNC_2(VAR_0 + VAR_6);

 VAR_27 = VAR_20->asic_prop.sram_base_address +
    VAR_5;

 FUNC_0(VAR_8, VAR_21);
 FUNC_0(VAR_7, VAR_22);
 FUNC_0(VAR_10, VAR_23);
 FUNC_0(VAR_9, VAR_24);


 FUNC_0(VAR_11, 0x00140014);

 FUNC_0(VAR_14, VAR_25);
 FUNC_0(VAR_13, VAR_26);

 FUNC_0(VAR_16, VAR_4);

 FUNC_0(VAR_15, VAR_2);

 FUNC_0(VAR_17, VAR_3);

 FUNC_0(VAR_12, VAR_1);
}
