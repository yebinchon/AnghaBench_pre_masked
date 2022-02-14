
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_subop {int dummy; } ;
struct nand_chip {int dummy; } ;
struct marvell_nfc_op {int rdy_delay_ns; int rdy_timeout_ms; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*,struct nand_subop const*,struct marvell_nfc_op*) ;
 int FUNC_2 (struct nand_chip*,int ) ;

__attribute__((used)) static int FUNC_3(struct nand_chip *VAR_0,
       const struct nand_subop *VAR_1)
{
 struct marvell_nfc_op VAR_2;
 int VAR_3;

 FUNC_1(VAR_0, VAR_1, &VAR_2);

 VAR_3 = FUNC_2(VAR_0, VAR_2.rdy_timeout_ms);
 FUNC_0(VAR_2.rdy_delay_ns);

 return VAR_3;
}
