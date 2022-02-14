
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3_omap {scalar_t__ utmi_otg_offset; int base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct dwc3_omap *VAR_1)
{
 return FUNC_0(VAR_1->base, VAR_0 +
       VAR_1->utmi_otg_offset);
}
