
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_device {struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct hl_device*,int ,int) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_2(struct hl_device *VAR_4, u32 VAR_5)
{
 struct goya_device *VAR_6 = VAR_4->asic_specific;
 int VAR_7;

 if (!(VAR_6->hw_cap_initialized & VAR_1))
  return;

 if (VAR_5 & ~VAR_2) {
  FUNC_0(1, "asid %u is too big\n", VAR_5);
  return;
 }


 for (VAR_7 = 0 ; VAR_7 < VAR_0 ; VAR_7++)
  FUNC_1(VAR_4, VAR_3[VAR_7], VAR_5);
}
