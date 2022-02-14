
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int FUNC_0 (struct hl_device*,void*,size_t) ;

__attribute__((used)) static int FUNC_1(struct hl_device *VAR_1, void *VAR_2,
    size_t VAR_3)
{
 struct goya_device *VAR_4 = VAR_1->asic_specific;

 if (!(VAR_4->hw_cap_initialized & VAR_0))
  return 0;

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
