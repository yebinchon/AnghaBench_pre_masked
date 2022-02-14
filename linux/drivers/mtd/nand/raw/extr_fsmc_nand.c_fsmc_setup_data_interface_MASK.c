
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_sdr_timings {int dummy; } ;
struct nand_data_interface {int dummy; } ;
struct nand_chip {int dummy; } ;
struct fsmc_nand_timings {int dummy; } ;
struct fsmc_nand_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct nand_sdr_timings const*) ;
 int VAR_0 ;
 int FUNC_1 (struct nand_sdr_timings const*) ;
 int FUNC_2 (struct fsmc_nand_data*,struct nand_sdr_timings const*,struct fsmc_nand_timings*) ;
 int FUNC_3 (struct fsmc_nand_data*,struct fsmc_nand_timings*) ;
 struct nand_sdr_timings* FUNC_4 (struct nand_data_interface const*) ;
 struct fsmc_nand_data* FUNC_5 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_1, int VAR_2,
         const struct nand_data_interface *VAR_3)
{
 struct fsmc_nand_data *VAR_4 = FUNC_5(VAR_1);
 struct fsmc_nand_timings VAR_5;
 const struct nand_sdr_timings *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_3);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = FUNC_2(VAR_4, VAR_6, &VAR_5);
 if (VAR_7)
  return VAR_7;

 if (VAR_2 == VAR_0)
  return 0;

 FUNC_3(VAR_4, &VAR_5);

 return 0;
}
