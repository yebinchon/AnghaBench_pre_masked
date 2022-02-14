
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_device {struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct hl_device*,int) ;
 int FUNC_2 (struct hl_device*,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct hl_device *VAR_15)
{
 struct goya_device *VAR_16 = VAR_15->asic_specific;
 u32 VAR_17, VAR_18;
 u32 VAR_19 = VAR_14 -
   VAR_13;
 int VAR_20;

 if (VAR_16->hw_cap_initialized & VAR_1)
  return;

 VAR_17 = FUNC_3(VAR_0 + VAR_11);
 VAR_18 = FUNC_4(VAR_0 + VAR_11);

 for (VAR_20 = 0 ; VAR_20 < VAR_10 ; VAR_20++) {
  FUNC_0(VAR_13 + VAR_20 * VAR_19,
    VAR_17);
  FUNC_0(VAR_12 + VAR_20 * VAR_19,
    VAR_18);
 }

 FUNC_2(VAR_15, VAR_2, 0);
 FUNC_2(VAR_15, VAR_3, 1);
 FUNC_2(VAR_15, VAR_4, 2);
 FUNC_2(VAR_15, VAR_5, 3);
 FUNC_2(VAR_15, VAR_6, 4);
 FUNC_2(VAR_15, VAR_7, 5);
 FUNC_2(VAR_15, VAR_8, 6);
 FUNC_2(VAR_15, VAR_9, 7);

 for (VAR_20 = 0 ; VAR_20 < VAR_10 ; VAR_20++)
  FUNC_1(VAR_15, VAR_20);

 VAR_16->hw_cap_initialized |= VAR_1;
}
