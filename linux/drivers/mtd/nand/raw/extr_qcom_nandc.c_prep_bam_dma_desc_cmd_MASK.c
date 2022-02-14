
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_nand_controller {int cmd_chan; struct bam_transaction* bam_txn; } ;
struct bam_transaction {size_t bam_ce_pos; size_t bam_ce_start; size_t cmd_sgl_pos; int * cmd_sgl; struct bam_cmd_element* bam_ce; } ;
struct bam_cmd_element {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct bam_cmd_element*,int ,int ,int ) ;
 int FUNC_1 (struct bam_cmd_element*,int ,int ,int ) ;
 int FUNC_2 (struct qcom_nand_controller*,int) ;
 int FUNC_3 (struct qcom_nand_controller*,int ,int) ;
 int FUNC_4 (struct qcom_nand_controller*,int *) ;
 int FUNC_5 (int *,struct bam_cmd_element*,int) ;

__attribute__((used)) static int FUNC_6(struct qcom_nand_controller *VAR_6, bool VAR_7,
     int VAR_8, const void *VAR_9,
     int VAR_10, unsigned int VAR_11)
{
 int VAR_12;
 int VAR_13, VAR_14;
 struct bam_cmd_element *VAR_15;
 struct bam_transaction *VAR_16 = VAR_6->bam_txn;

 VAR_15 = &VAR_16->bam_ce[VAR_16->bam_ce_pos];


 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  if (VAR_7)
   FUNC_0(&VAR_15[VAR_13],
        FUNC_2(VAR_6, VAR_8 + 4 * VAR_13),
        VAR_0,
        FUNC_4(VAR_6,
           (__le32 *)VAR_9 + VAR_13));
  else
   FUNC_1(&VAR_15[VAR_13],
      FUNC_2(VAR_6, VAR_8 + 4 * VAR_13),
      VAR_1,
      *((__le32 *)VAR_9 + VAR_13));
 }

 VAR_16->bam_ce_pos += VAR_10;


 if (VAR_11 & VAR_4) {
  VAR_15 = &VAR_16->bam_ce[VAR_16->bam_ce_start];
  VAR_12 = (VAR_16->bam_ce_pos -
    VAR_16->bam_ce_start) *
    sizeof(struct bam_cmd_element);
  FUNC_5(&VAR_16->cmd_sgl[VAR_16->cmd_sgl_pos],
      VAR_15, VAR_12);
  VAR_16->cmd_sgl_pos++;
  VAR_16->bam_ce_start = VAR_16->bam_ce_pos;

  if (VAR_11 & VAR_5) {
   VAR_14 = FUNC_3(VAR_6, VAR_6->cmd_chan,
           VAR_3 |
           VAR_2);
   if (VAR_14)
    return VAR_14;
  }
 }

 return 0;
}
