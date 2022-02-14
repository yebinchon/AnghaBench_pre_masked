
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_subop {int dummy; } ;
struct nand_chip {int dummy; } ;
struct marvell_nfc_op {int rdy_delay_ns; int rdy_timeout_ms; int cle_ale_delay_ns; int * ndcb; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nand_chip*,struct nand_subop const*,struct marvell_nfc_op*) ;
 int FUNC_3 (struct nand_chip*) ;
 int FUNC_4 (struct nand_chip*,struct marvell_nfc_op*) ;
 int FUNC_5 (struct nand_chip*) ;
 int FUNC_6 (struct nand_chip*,int ) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_1,
        const struct nand_subop *VAR_2)
{
 struct marvell_nfc_op VAR_3;
 int VAR_4;

 FUNC_2(VAR_1, VAR_2, &VAR_3);
 VAR_3.ndcb[0] |= FUNC_0(VAR_0);

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4)
  return VAR_4;

 FUNC_4(VAR_1, &VAR_3);
 VAR_4 = FUNC_5(VAR_1);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_3.cle_ale_delay_ns);

 VAR_4 = FUNC_6(VAR_1, VAR_3.rdy_timeout_ms);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_3.rdy_delay_ns);

 return 0;
}
