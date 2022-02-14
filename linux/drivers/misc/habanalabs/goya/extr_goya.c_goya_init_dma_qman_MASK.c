
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_device {struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
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
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct hl_device *VAR_29, int VAR_30,
  dma_addr_t VAR_31)
{
 struct goya_device *VAR_32 = VAR_29->asic_specific;
 u32 VAR_33, VAR_34;
 u32 VAR_35, VAR_36;
 u32 VAR_37, VAR_38;
 u32 VAR_39 = VAR_30 * (VAR_25 - VAR_23);

 VAR_33 = FUNC_2(VAR_0 + VAR_27);
 VAR_34 = FUNC_3(VAR_0 + VAR_27);
 VAR_35 = FUNC_2(VAR_0 + VAR_28);
 VAR_36 = FUNC_3(VAR_0 + VAR_28);

 VAR_37 =
  FUNC_2(VAR_0 + VAR_26);
 VAR_38 =
  FUNC_3(VAR_0 + VAR_26);

 FUNC_0(VAR_20 + VAR_39, FUNC_2(VAR_31));
 FUNC_0(VAR_19 + VAR_39, FUNC_3(VAR_31));

 FUNC_0(VAR_24 + VAR_39, FUNC_1(VAR_2));
 FUNC_0(VAR_23 + VAR_39, 0);
 FUNC_0(VAR_22 + VAR_39, 0);

 FUNC_0(VAR_9 + VAR_39, VAR_33);
 FUNC_0(VAR_8 + VAR_39, VAR_34);
 FUNC_0(VAR_11 + VAR_39, VAR_35);
 FUNC_0(VAR_10 + VAR_39, VAR_36);
 FUNC_0(VAR_15 + VAR_39, VAR_37);
 FUNC_0(VAR_14 + VAR_39, VAR_38);
 FUNC_0(VAR_17 + VAR_39,
   VAR_1 + VAR_30);


 FUNC_0(VAR_21 + VAR_39, 0x00020002);
 FUNC_0(VAR_12 + VAR_39, 0x00080008);

 if (VAR_32->hw_cap_initialized & VAR_3)
  FUNC_0(VAR_18 + VAR_39, VAR_7);
 else
  FUNC_0(VAR_18 + VAR_39, VAR_6);

 FUNC_0(VAR_16 + VAR_39, VAR_5);
 FUNC_0(VAR_13 + VAR_39, VAR_4);
}
