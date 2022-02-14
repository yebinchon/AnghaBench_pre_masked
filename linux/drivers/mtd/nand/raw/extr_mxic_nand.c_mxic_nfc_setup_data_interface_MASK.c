
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_sdr_timings {int tRC_min; } ;
struct nand_data_interface {int dummy; } ;
struct nand_chip {int dummy; } ;
struct mxic_nand_ctlr {scalar_t__ regs; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nand_sdr_timings const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nand_sdr_timings const*) ;
 int FUNC_2 (int ,char*,unsigned long) ;
 int FUNC_3 (struct mxic_nand_ctlr*,unsigned long) ;
 struct mxic_nand_ctlr* FUNC_4 (struct nand_chip*) ;
 struct nand_sdr_timings* FUNC_5 (struct nand_data_interface const*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_4, int VAR_5,
      const struct nand_data_interface *VAR_6)
{
 struct mxic_nand_ctlr *VAR_7 = FUNC_4(VAR_4);
 const struct nand_sdr_timings *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_8 = FUNC_5(VAR_6);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 if (VAR_5 == VAR_2)
  return 0;

 VAR_9 = VAR_3 / (VAR_8->tRC_min / 1000);

 VAR_10 = FUNC_3(VAR_7, VAR_9);
 if (VAR_10)
  FUNC_2(VAR_7->dev, "set freq:%ld failed\n", VAR_9);

 if (VAR_8->tRC_min < 30000)
  FUNC_6(VAR_1, VAR_7->regs + VAR_0);

 return 0;
}
