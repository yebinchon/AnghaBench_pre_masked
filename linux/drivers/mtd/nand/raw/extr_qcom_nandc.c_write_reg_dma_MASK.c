
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qcom_nand_controller {TYPE_1__* props; struct nandc_regs* regs; } ;
struct nandc_regs {int erased_cw_detect_cfg_clr; int erased_cw_detect_cfg_set; } ;
struct TYPE_2__ {scalar_t__ is_bam; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct qcom_nand_controller*,int) ;
 void* FUNC_1 (struct nandc_regs*,int) ;
 int FUNC_2 (struct qcom_nand_controller*,int,int,void*,int,int) ;
 int FUNC_3 (struct qcom_nand_controller*,int,int,void*,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct qcom_nand_controller *VAR_9, int VAR_10,
    int VAR_11, unsigned int VAR_12)
{
 bool VAR_13 = 0;
 struct nandc_regs *VAR_14 = VAR_9->regs;
 void *VAR_15;

 VAR_15 = FUNC_1(VAR_14, VAR_10);

 if (VAR_10 == VAR_5) {
  if (VAR_12 & VAR_6)
   VAR_15 = &VAR_14->erased_cw_detect_cfg_set;
  else
   VAR_15 = &VAR_14->erased_cw_detect_cfg_clr;
 }

 if (VAR_10 == VAR_7)
  VAR_12 |= VAR_0;

 if (VAR_10 == VAR_2 || VAR_10 == VAR_1)
  VAR_10 = FUNC_0(VAR_9, VAR_1);

 if (VAR_10 == VAR_4 || VAR_10 == VAR_3)
  VAR_10 = FUNC_0(VAR_9, VAR_3);

 if (VAR_9->props->is_bam)
  return FUNC_3(VAR_9, 0, VAR_10, VAR_15,
          VAR_11, VAR_12);

 if (VAR_10 == VAR_8)
  VAR_13 = 1;

 return FUNC_2(VAR_9, 0, VAR_10, VAR_15,
     VAR_11 * sizeof(u32), VAR_13);
}
