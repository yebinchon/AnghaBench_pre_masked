
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_nand_controller {int dev; struct bam_transaction* bam_txn; } ;
struct bam_transaction {int dummy; } ;


 int FUNC_0 (int ,struct bam_transaction*) ;

__attribute__((used)) static void FUNC_1(struct qcom_nand_controller *VAR_0)
{
 struct bam_transaction *VAR_1 = VAR_0->bam_txn;

 FUNC_0(VAR_0->dev, VAR_1);
}
