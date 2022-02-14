
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct sunxi_pinctrl_desc {size_t* irq_bank_map; } ;



__attribute__((used)) static inline u32 FUNC_0(const struct sunxi_pinctrl_desc *VAR_0, u8 VAR_1)
{
 if (!VAR_0->irq_bank_map)
  return VAR_1;
 else
  return VAR_0->irq_bank_map[VAR_1];
}
