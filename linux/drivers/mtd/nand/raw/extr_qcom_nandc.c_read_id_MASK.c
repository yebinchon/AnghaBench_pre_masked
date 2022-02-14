
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_chip {int dummy; } ;
struct qcom_nand_host {struct nand_chip chip; } ;
struct qcom_nand_controller {TYPE_1__* props; } ;
struct TYPE_2__ {scalar_t__ is_bam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct qcom_nand_controller* FUNC_0 (struct nand_chip*) ;
 int FUNC_1 (struct qcom_nand_controller*,int ,int) ;
 int FUNC_2 (struct qcom_nand_controller*,int ,int,int ) ;
 int FUNC_3 (struct qcom_nand_controller*,int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct qcom_nand_host *VAR_9, int VAR_10)
{
 struct nand_chip *VAR_11 = &VAR_9->chip;
 struct qcom_nand_controller *VAR_12 = FUNC_0(VAR_11);

 if (VAR_10 == -1)
  return 0;

 FUNC_1(VAR_12, VAR_6, VAR_8);
 FUNC_1(VAR_12, VAR_1, VAR_10);
 FUNC_1(VAR_12, VAR_2, 0);
 FUNC_1(VAR_12, VAR_5,
        VAR_12->props->is_bam ? 0 : VAR_0);
 FUNC_1(VAR_12, VAR_4, 1);

 FUNC_3(VAR_12, VAR_6, 4, VAR_3);
 FUNC_3(VAR_12, VAR_4, 1, VAR_3);

 FUNC_2(VAR_12, VAR_7, 1, VAR_3);

 return 0;
}
