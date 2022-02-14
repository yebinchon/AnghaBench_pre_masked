
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {scalar_t__ pldm; struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hl_device*,int) ;

__attribute__((used)) static void FUNC_1(struct hl_device *VAR_2)
{
 struct goya_device *VAR_3 = VAR_2->asic_specific;
 int VAR_4;

 if (VAR_2->pldm)
  return;

 if (VAR_3->hw_cap_initialized & VAR_0)
  return;



 for (VAR_4 = 0 ; VAR_4 < VAR_1 ; VAR_4++)
  FUNC_0(VAR_2, VAR_4);

 VAR_3->hw_cap_initialized |= VAR_0;
}
