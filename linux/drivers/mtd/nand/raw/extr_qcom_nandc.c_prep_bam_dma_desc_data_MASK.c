
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_nand_controller {int tx_chan; struct bam_transaction* bam_txn; } ;
struct bam_transaction {size_t rx_sgl_pos; size_t tx_sgl_pos; int * data_sgl; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct qcom_nand_controller*,int ,int ) ;
 int FUNC_1 (int *,void const*,int) ;

__attribute__((used)) static int FUNC_2(struct qcom_nand_controller *VAR_2, bool VAR_3,
      const void *VAR_4,
      int VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 struct bam_transaction *VAR_8 = VAR_2->bam_txn;

 if (VAR_3) {
  FUNC_1(&VAR_8->data_sgl[VAR_8->rx_sgl_pos],
      VAR_4, VAR_5);
  VAR_8->rx_sgl_pos++;
 } else {
  FUNC_1(&VAR_8->data_sgl[VAR_8->tx_sgl_pos],
      VAR_4, VAR_5);
  VAR_8->tx_sgl_pos++;





  if (!(VAR_6 & VAR_1)) {
   VAR_7 = FUNC_0(VAR_2, VAR_2->tx_chan,
           VAR_0);
   if (VAR_7)
    return VAR_7;
  }
 }

 return 0;
}
