
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hl_device {int dev; struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct hl_device *VAR_5)
{
 struct goya_device *VAR_6 = VAR_5->asic_specific;
 u64 VAR_7;
 u32 VAR_8;

 if (!(VAR_6->hw_cap_initialized & VAR_0))
  return;

 VAR_8 = FUNC_0(VAR_3);
 if (VAR_8 & VAR_1) {
  VAR_7 = VAR_8 & VAR_2;
  VAR_7 <<= 32;
  VAR_7 |= FUNC_0(VAR_4);

  FUNC_2(VAR_5->dev, "MMU page fault on va 0x%llx\n", VAR_7);

  FUNC_1(VAR_3, 0);
 }
}
