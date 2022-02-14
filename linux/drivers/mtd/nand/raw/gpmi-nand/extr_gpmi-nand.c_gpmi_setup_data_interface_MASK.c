
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nand_sdr_timings {int tRC_min; } ;
struct nand_data_interface {int dummy; } ;
struct nand_chip {int dummy; } ;
struct TYPE_2__ {int must_apply_timings; } ;
struct gpmi_nand_data {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpmi_nand_data*) ;
 scalar_t__ FUNC_1 (struct nand_sdr_timings const*) ;
 int FUNC_2 (struct nand_sdr_timings const*) ;
 int FUNC_3 (struct gpmi_nand_data*,struct nand_sdr_timings const*) ;
 struct gpmi_nand_data* FUNC_4 (struct nand_chip*) ;
 struct nand_sdr_timings* FUNC_5 (struct nand_data_interface const*) ;

__attribute__((used)) static int FUNC_6(struct nand_chip *VAR_1, int VAR_2,
         const struct nand_data_interface *VAR_3)
{
 struct gpmi_nand_data *VAR_4 = FUNC_4(VAR_1);
 const struct nand_sdr_timings *VAR_5;


 VAR_5 = FUNC_5(VAR_3);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);


 if (VAR_5->tRC_min <= 25000 && !FUNC_0(VAR_4))
  return -VAR_0;


 if (VAR_2 < 0)
  return 0;


 FUNC_3(VAR_4, VAR_5);

 VAR_4->hw.must_apply_timings = 1;

 return 0;
}
