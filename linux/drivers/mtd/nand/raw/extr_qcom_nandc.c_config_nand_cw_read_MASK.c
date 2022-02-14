
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_nand_controller {TYPE_1__* props; } ;
struct TYPE_2__ {scalar_t__ is_bam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qcom_nand_controller*,int ,int,int ) ;
 int FUNC_1 (struct qcom_nand_controller*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct qcom_nand_controller *VAR_6, bool VAR_7)
{
 if (VAR_6->props->is_bam)
  FUNC_1(VAR_6, VAR_5, 4,
         VAR_0);

 FUNC_1(VAR_6, VAR_3, 1, VAR_0);
 FUNC_1(VAR_6, VAR_2, 1, VAR_0);

 if (VAR_7) {
  FUNC_0(VAR_6, VAR_4, 2, 0);
  FUNC_0(VAR_6, VAR_1, 1,
        VAR_0);
 } else {
  FUNC_0(VAR_6, VAR_4, 1, VAR_0);
 }
}
