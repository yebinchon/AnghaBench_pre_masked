
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_pinctrl {int dummy; } ;
struct intel_padgroup {int reg_num; } ;
struct intel_community {int padcfglock_offset; scalar_t__ regs; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct intel_padgroup* FUNC_1 (struct intel_community*,unsigned int) ;
 struct intel_community* FUNC_2 (struct intel_pinctrl*,unsigned int) ;
 unsigned int FUNC_3 (struct intel_padgroup const*,unsigned int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct intel_pinctrl *VAR_4, unsigned int VAR_5)
{
 struct intel_community *VAR_6;
 const struct intel_padgroup *VAR_7;
 unsigned int VAR_8, VAR_9;
 u32 VAR_10;
 int VAR_11 = VAR_3;

 VAR_6 = FUNC_2(VAR_4, VAR_5);
 if (!VAR_6)
  return VAR_1;
 if (!VAR_6->padcfglock_offset)
  return VAR_3;

 VAR_7 = FUNC_1(VAR_6, VAR_5);
 if (!VAR_7)
  return VAR_1;

 VAR_9 = FUNC_3(VAR_7, VAR_5);






 VAR_8 = VAR_6->padcfglock_offset + 0 + VAR_7->reg_num * 8;
 VAR_10 = FUNC_4(VAR_6->regs + VAR_8);
 if (VAR_10 & FUNC_0(VAR_9))
  VAR_11 |= VAR_0;

 VAR_8 = VAR_6->padcfglock_offset + 4 + VAR_7->reg_num * 8;
 VAR_10 = FUNC_4(VAR_6->regs + VAR_8);
 if (VAR_10 & FUNC_0(VAR_9))
  VAR_11 |= VAR_2;

 return VAR_11;
}
