
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_device {struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hl_device*) ;
 int FUNC_2 (struct hl_device*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct hl_device *VAR_5)
{
 struct goya_device *VAR_6 = VAR_5->asic_specific;
 u32 VAR_7, VAR_8;

 if (VAR_6->hw_cap_initialized & VAR_1)
  return;

 VAR_7 = FUNC_3(VAR_0 + VAR_4);
 VAR_8 = FUNC_4(VAR_0 + VAR_4);

 FUNC_0(VAR_3, VAR_7);
 FUNC_0(VAR_2, VAR_8);

 FUNC_2(VAR_5);
 FUNC_1(VAR_5);

 VAR_6->hw_cap_initialized |= VAR_1;
}
