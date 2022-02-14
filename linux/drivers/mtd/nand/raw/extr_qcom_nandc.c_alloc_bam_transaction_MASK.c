
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_nand_controller {unsigned int max_cwperpage; int dev; } ;
struct bam_transaction {int txn_done; void* data_sgl; void* cmd_sgl; void* bam_ce; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,size_t,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct bam_transaction *
FUNC_2(struct qcom_nand_controller *VAR_4)
{
 struct bam_transaction *VAR_5;
 size_t VAR_6;
 unsigned int VAR_7 = VAR_4->max_cwperpage;
 void *VAR_8;

 VAR_6 =
  sizeof(*VAR_5) + VAR_7 *
  ((sizeof(*VAR_5->bam_ce) * VAR_1) +
  (sizeof(*VAR_5->cmd_sgl) * VAR_2) +
  (sizeof(*VAR_5->data_sgl) * VAR_3));

 VAR_8 = FUNC_0(VAR_4->dev, VAR_6, VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_5 = VAR_8;
 VAR_8 += sizeof(*VAR_5);

 VAR_5->bam_ce = VAR_8;
 VAR_8 +=
  sizeof(*VAR_5->bam_ce) * VAR_1 * VAR_7;

 VAR_5->cmd_sgl = VAR_8;
 VAR_8 +=
  sizeof(*VAR_5->cmd_sgl) * VAR_2 * VAR_7;

 VAR_5->data_sgl = VAR_8;

 FUNC_1(&VAR_5->txn_done);

 return VAR_5;
}
