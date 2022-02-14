
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dsi_isr_data {void* arg; scalar_t__ mask; int * isr; } ;
typedef int * omap_dsi_isr_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(omap_dsi_isr_t VAR_1, void *VAR_2, u32 VAR_3,
  struct dsi_isr_data *VAR_4, unsigned VAR_5)
{
 struct dsi_isr_data *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_6 = &VAR_4[VAR_7];
  if (VAR_6->isr != VAR_1 || VAR_6->arg != VAR_2 ||
    VAR_6->mask != VAR_3)
   continue;

  VAR_6->isr = ((void*)0);
  VAR_6->arg = ((void*)0);
  VAR_6->mask = 0;

  return 0;
 }

 return -VAR_0;
}
