
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hl_device {struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hl_device*,int ,int *,int ,int ,long*) ;

int FUNC_1(struct hl_device *VAR_2, u32 *VAR_3, u16 VAR_4,
    u32 VAR_5, long *VAR_6)
{
 struct goya_device *VAR_7 = VAR_2->asic_specific;

 if (!(VAR_7->hw_cap_initialized & VAR_1)) {
  if (VAR_6)
   *VAR_6 = 0;
  return 0;
 }

 return FUNC_0(VAR_2, VAR_0, VAR_3, VAR_4,
     VAR_5, VAR_6);
}
