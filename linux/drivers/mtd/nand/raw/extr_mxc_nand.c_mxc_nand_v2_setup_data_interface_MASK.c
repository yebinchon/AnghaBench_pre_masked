
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nand_sdr_timings {int tRC_min; int tCLS_min; int tCLH_min; int tCS_min; int tCH_min; int tWP_min; int tALS_min; int tALH_min; int tDS_min; int tDH_min; int tWC_min; int tWH_min; int tRR_min; int tRP_min; int tREH_min; } ;
struct nand_data_interface {int dummy; } ;
struct nand_chip {int dummy; } ;
struct mxc_nand_host {int dev; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nand_sdr_timings const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,char*,...) ;
 struct mxc_nand_host* FUNC_4 (struct nand_chip*) ;
 struct nand_sdr_timings* FUNC_5 (struct nand_data_interface const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct nand_chip *VAR_5, int VAR_6,
     const struct nand_data_interface *VAR_7)
{
 struct mxc_nand_host *VAR_8 = FUNC_4(VAR_5);
 int VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13;
 const struct nand_sdr_timings *VAR_14;
 u16 VAR_15;

 VAR_14 = FUNC_5(VAR_7);
 if (FUNC_0(VAR_14))
  return -VAR_1;

 VAR_15 = FUNC_6(VAR_3);

 VAR_9 = VAR_14->tRC_min / 1000;
 VAR_12 = 1000000000 / VAR_9;







 if (VAR_9 < 30) {
  VAR_13 = FUNC_1(VAR_8->clk, VAR_12);
  VAR_15 |= VAR_4;
  VAR_10 = 1000000000 / (VAR_13 / 1000);
 } else {
  VAR_12 *= 2;
  VAR_13 = FUNC_1(VAR_8->clk, VAR_12);
  VAR_15 &= ~VAR_4;
  VAR_10 = 1000000000 / (VAR_13 / 1000 / 2);
 }





 if (VAR_14->tCLS_min > VAR_10 - 1000 ||
     VAR_14->tCLH_min > VAR_10 - 2000 ||
     VAR_14->tCS_min > VAR_10 - 1000 ||
     VAR_14->tCH_min > VAR_10 - 2000 ||
     VAR_14->tWP_min > VAR_10 - 1500 ||
     VAR_14->tALS_min > VAR_10 ||
     VAR_14->tALH_min > VAR_10 - 3000 ||
     VAR_14->tDS_min > VAR_10 ||
     VAR_14->tDH_min > VAR_10 - 5000 ||
     VAR_14->tWC_min > 2 * VAR_10 ||
     VAR_14->tWH_min > VAR_10 - 2500 ||
     VAR_14->tRR_min > 6 * VAR_10 ||
     VAR_14->tRP_min > 3 * VAR_10 / 2 ||
     VAR_14->tRC_min > 2 * VAR_10 ||
     VAR_14->tREH_min > (VAR_10 / 2) - 2500) {
  FUNC_3(VAR_8->dev, "Timing out of bounds\n");
  return -VAR_0;
 }

 if (VAR_6 == VAR_2)
  return 0;

 VAR_11 = FUNC_2(VAR_8->clk, VAR_12);
 if (VAR_11)
  return VAR_11;

 FUNC_7(VAR_15, VAR_3);

 FUNC_3(VAR_8->dev, "Setting rate to %ldHz, %s mode\n", VAR_13,
  VAR_15 & VAR_4 ? "One cycle (EDO)" :
  "normal");

 return 0;
}
