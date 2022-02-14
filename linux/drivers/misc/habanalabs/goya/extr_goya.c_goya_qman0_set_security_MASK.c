
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct hl_device *VAR_4, bool VAR_5)
{
 struct goya_device *VAR_6 = VAR_4->asic_specific;

 if (!(VAR_6->hw_cap_initialized & VAR_0))
  return;

 if (VAR_5)
  FUNC_1(VAR_3, VAR_1);
 else
  FUNC_1(VAR_3, VAR_2);

 FUNC_0(VAR_3);
}
