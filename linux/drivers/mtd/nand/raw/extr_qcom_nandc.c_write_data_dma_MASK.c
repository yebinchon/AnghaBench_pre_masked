
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qcom_nand_controller {TYPE_1__* props; } ;
struct TYPE_2__ {scalar_t__ is_bam; } ;


 int FUNC_0 (struct qcom_nand_controller*,int,int,int const*,int,int) ;
 int FUNC_1 (struct qcom_nand_controller*,int,int const*,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct qcom_nand_controller *VAR_0, int VAR_1,
     const u8 *VAR_2, int VAR_3, unsigned int VAR_4)
{
 if (VAR_0->props->is_bam)
  return FUNC_1(VAR_0, 0, VAR_2, VAR_3, VAR_4);

 return FUNC_0(VAR_0, 0, VAR_1, VAR_2, VAR_3, 0);
}
