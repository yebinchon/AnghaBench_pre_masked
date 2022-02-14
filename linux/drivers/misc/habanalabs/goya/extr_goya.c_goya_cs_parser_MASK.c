
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {struct goya_device* asic_specific; } ;
struct hl_cs_parser {int ext_queue; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int FUNC_0 (struct hl_device*,struct hl_cs_parser*) ;
 int FUNC_1 (struct hl_device*,struct hl_cs_parser*) ;
 int FUNC_2 (struct hl_device*,struct hl_cs_parser*) ;

int FUNC_3(struct hl_device *VAR_1, struct hl_cs_parser *VAR_2)
{
 struct goya_device *VAR_3 = VAR_1->asic_specific;

 if (!VAR_2->ext_queue)
  return FUNC_1(VAR_1, VAR_2);

 if (VAR_3->hw_cap_initialized & VAR_0)
  return FUNC_0(VAR_1, VAR_2);
 else
  return FUNC_2(VAR_1, VAR_2);
}
