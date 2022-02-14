
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qcom_nand_controller {int reg_read_pos; TYPE_1__* props; void* reg_read_buf; } ;
struct TYPE_2__ {scalar_t__ is_bam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qcom_nand_controller*,int) ;
 int FUNC_1 (struct qcom_nand_controller*,int,int,void*,int,int) ;
 int FUNC_2 (struct qcom_nand_controller*,int,int,void*,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct qcom_nand_controller *VAR_4, int VAR_5,
   int VAR_6, unsigned int VAR_7)
{
 bool VAR_8 = 0;
 void *VAR_9;

 VAR_9 = VAR_4->reg_read_buf + VAR_4->reg_read_pos;
 VAR_4->reg_read_pos += VAR_6;

 if (VAR_5 == VAR_1 || VAR_5 == VAR_0)
  VAR_5 = FUNC_0(VAR_4, VAR_5);

 if (VAR_4->props->is_bam)
  return FUNC_2(VAR_4, 1, VAR_5, VAR_9,
          VAR_6, VAR_7);

 if (VAR_5 == VAR_3 || VAR_5 == VAR_2)
  VAR_8 = 1;

 return FUNC_1(VAR_4, 1, VAR_5, VAR_9,
     VAR_6 * sizeof(u32), VAR_8);
}
