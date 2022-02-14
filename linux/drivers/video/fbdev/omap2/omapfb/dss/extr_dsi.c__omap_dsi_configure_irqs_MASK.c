
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;
struct dsi_reg {int dummy; } ;
struct dsi_isr_data {int mask; int * isr; } ;


 int FUNC_0 (struct platform_device*,struct dsi_reg const) ;
 int FUNC_1 (struct platform_device*,struct dsi_reg const,int) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_0,
  struct dsi_isr_data *VAR_1,
  unsigned VAR_2, u32 VAR_3,
  const struct dsi_reg VAR_4,
  const struct dsi_reg VAR_5)
{
 struct dsi_isr_data *VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_7 = VAR_3;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_6 = &VAR_1[VAR_9];

  if (VAR_6->isr == ((void*)0))
   continue;

  VAR_7 |= VAR_6->mask;
 }

 VAR_8 = FUNC_0(VAR_0, VAR_4);

 FUNC_1(VAR_0, VAR_5, (VAR_7 ^ VAR_8) & VAR_7);
 FUNC_1(VAR_0, VAR_4, VAR_7);


 FUNC_0(VAR_0, VAR_4);
 FUNC_0(VAR_0, VAR_5);
}
