
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nand_sdr_timings {int dummy; } ;
struct nand_data_interface {int dummy; } ;
struct nand_chip {int dummy; } ;


 scalar_t__ FUNC_0 (struct nand_sdr_timings const*) ;
 int VAR_0 ;
 int FUNC_1 (struct nand_sdr_timings const*) ;
 struct nand_sdr_timings* FUNC_2 (struct nand_data_interface const*) ;
 int FUNC_3 (struct nand_chip*,struct nand_sdr_timings const*) ;
 int FUNC_4 (struct nand_chip*) ;

__attribute__((used)) static int FUNC_5(struct nand_chip *VAR_1, int VAR_2,
          const struct nand_data_interface *VAR_3)
{
 const struct nand_sdr_timings *VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 if (VAR_2 == VAR_0)
  return 0;

 FUNC_3(VAR_1, VAR_4);


 FUNC_4(VAR_1);

 return 0;
}
