
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_chip {int dummy; } ;
struct qcom_nand_host {struct nand_chip chip; } ;
struct qcom_nand_controller {int vld; int cmd1; int buf_count; int data_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct qcom_nand_controller*,int) ;
 struct qcom_nand_controller* FUNC_1 (struct nand_chip*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct qcom_nand_controller*,int ,int ,int,int) ;
 int FUNC_4 (struct qcom_nand_controller*,int ,int) ;
 int FUNC_5 (struct qcom_nand_controller*,int ,int ,int,int ) ;
 int FUNC_6 (struct qcom_nand_controller*,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct qcom_nand_host *VAR_31)
{
 struct nand_chip *VAR_32 = &VAR_31->chip;
 struct qcom_nand_controller *VAR_33 = FUNC_1(VAR_32);






 FUNC_4(VAR_33, VAR_20, VAR_23 | VAR_24 | VAR_7);
 FUNC_4(VAR_33, VAR_8, 0);
 FUNC_4(VAR_33, VAR_9, 0);
 FUNC_4(VAR_33, VAR_12, 0 << VAR_3
     | 512 << VAR_28
     | 5 << VAR_22
     | 0 << VAR_27);
 FUNC_4(VAR_33, VAR_13, 7 << VAR_21
     | 0 << VAR_2
     | 17 << VAR_0
     | 1 << VAR_1
     | 2 << VAR_30
     | 0 << VAR_29
     | 1 << VAR_4);
 FUNC_4(VAR_33, VAR_18, 1 << VAR_5);


 FUNC_4(VAR_33, VAR_16,
        (VAR_33->vld & ~VAR_26));
 FUNC_4(VAR_33, VAR_14,
        (VAR_33->cmd1 & ~(0xFF << VAR_25))
        | VAR_11 << VAR_25);

 FUNC_4(VAR_33, VAR_19, 1);

 FUNC_4(VAR_33, VAR_15, VAR_33->cmd1);
 FUNC_4(VAR_33, VAR_17, VAR_33->vld);
 FUNC_3(VAR_33, 0, 0, 512, 1);

 FUNC_6(VAR_33, VAR_16, 1, 0);
 FUNC_6(VAR_33, VAR_14, 1, VAR_10);

 VAR_33->buf_count = 512;
 FUNC_2(VAR_33->data_buffer, 0xff, VAR_33->buf_count);

 FUNC_0(VAR_33, 0);

 FUNC_5(VAR_33, VAR_6, VAR_33->data_buffer,
        VAR_33->buf_count, 0);


 FUNC_6(VAR_33, VAR_15, 1, 0);
 FUNC_6(VAR_33, VAR_17, 1, VAR_10);

 return 0;
}
