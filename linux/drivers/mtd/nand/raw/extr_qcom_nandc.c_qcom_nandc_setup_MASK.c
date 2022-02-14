
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qcom_nand_controller {int vld; void* cmd1; TYPE_1__* props; } ;
struct TYPE_2__ {scalar_t__ is_bam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct qcom_nand_controller*,int ) ;
 void* FUNC_1 (struct qcom_nand_controller*,int ) ;
 int FUNC_2 (struct qcom_nand_controller*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct qcom_nand_controller *VAR_8)
{
 u32 VAR_9;


 FUNC_2(VAR_8, VAR_7, 0);
 FUNC_2(VAR_8, FUNC_0(VAR_8, VAR_4),
      VAR_5);


 if (VAR_8->props->is_bam) {
  VAR_9 = FUNC_1(VAR_8, VAR_2);
  FUNC_2(VAR_8, VAR_2, VAR_9 | VAR_0);
 } else {
  FUNC_2(VAR_8, VAR_6, VAR_1);
 }


 VAR_8->cmd1 = FUNC_1(VAR_8, FUNC_0(VAR_8, VAR_3));
 VAR_8->vld = VAR_5;

 return 0;
}
