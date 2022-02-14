
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intc_mask_reg {unsigned long dist_reg; scalar_t__* enum_ids; int reg_width; } ;
struct intc_desc_int {int dummy; } ;
struct TYPE_2__ {unsigned int nr_mask_regs; struct intc_mask_reg* mask_regs; } ;
struct intc_desc {TYPE_1__ hw; } ;
typedef scalar_t__ intc_enum ;


 unsigned int FUNC_0 (scalar_t__*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (unsigned int,unsigned int,int ,int ,int,int) ;
 int FUNC_2 (struct intc_desc_int*,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct intc_desc *VAR_2,
       struct intc_desc_int *VAR_3,
       intc_enum VAR_4)
{
 struct intc_mask_reg *VAR_5 = VAR_2->hw.mask_regs;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10, VAR_11;

 for (VAR_6 = 0; VAR_5 && VAR_4 && VAR_6 < VAR_2->hw.nr_mask_regs; VAR_6++) {
  VAR_5 = VAR_2->hw.mask_regs + VAR_6;





  if (!VAR_5->dist_reg)
   continue;

  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5->enum_ids); VAR_7++) {
   if (VAR_5->enum_ids[VAR_7] != VAR_4)
    continue;

   VAR_8 = VAR_1;
   VAR_9 = VAR_0;
   VAR_10 = VAR_5->dist_reg;
   VAR_11 = VAR_5->dist_reg;

   VAR_8 += (VAR_5->reg_width >> 3) - 1;
   return FUNC_1(VAR_8, VAR_9,
     FUNC_2(VAR_3, VAR_10),
     FUNC_2(VAR_3, VAR_11),
     1,
     (VAR_5->reg_width - 1) - VAR_7);
  }
 }





 return 0;
}
