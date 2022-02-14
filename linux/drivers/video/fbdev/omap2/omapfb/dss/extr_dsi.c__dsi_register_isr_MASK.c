
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dsi_isr_data {void* arg; scalar_t__ mask; int * isr; } ;
typedef int * omap_dsi_isr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(omap_dsi_isr_t VAR_2, void *VAR_3, u32 VAR_4,
  struct dsi_isr_data *VAR_5, unsigned VAR_6)
{
 struct dsi_isr_data *VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_0(VAR_2 == ((void*)0));


 VAR_8 = -1;
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_7 = &VAR_5[VAR_9];

  if (VAR_7->isr == VAR_2 && VAR_7->arg == VAR_3 &&
    VAR_7->mask == VAR_4) {
   return -VAR_1;
  }

  if (VAR_7->isr == ((void*)0) && VAR_8 == -1)
   VAR_8 = VAR_9;
 }

 if (VAR_8 == -1)
  return -VAR_0;

 VAR_7 = &VAR_5[VAR_8];
 VAR_7->isr = VAR_2;
 VAR_7->arg = VAR_3;
 VAR_7->mask = VAR_4;

 return 0;
}
