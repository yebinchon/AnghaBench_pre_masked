
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int FUNC_0 (struct hl_device*) ;

int FUNC_1(struct hl_device *VAR_1)
{
 struct goya_device *VAR_2 = VAR_1->asic_specific;

 if (!(VAR_2->hw_cap_initialized & VAR_0))
  return 0;

 return FUNC_0(VAR_1);
}
