
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tango_nfc {int freq_kHz; } ;
struct tango_chip {void* timing2; void* timing1; } ;
struct nand_sdr_timings {scalar_t__ tRHZ_max; scalar_t__ tREH_min; scalar_t__ tRC_min; scalar_t__ tREA_max; scalar_t__ tWP_min; scalar_t__ tWC_min; scalar_t__ tWB_max; scalar_t__ tCEA_max; } ;
struct nand_data_interface {int dummy; } ;
struct nand_chip {int controller; } ;


 scalar_t__ FUNC_0 (struct nand_sdr_timings const*) ;
 int VAR_0 ;
 int FUNC_1 (struct nand_sdr_timings const*) ;
 void* FUNC_2 (int ,int ,int ,int ) ;
 struct nand_sdr_timings* FUNC_3 (struct nand_data_interface const*) ;
 struct tango_chip* FUNC_4 (struct nand_chip*) ;
 struct tango_nfc* FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct nand_chip *VAR_1, int VAR_2,
        const struct nand_data_interface *VAR_3)
{
 const struct nand_sdr_timings *VAR_4 = FUNC_3(VAR_3);
 struct tango_nfc *VAR_5 = FUNC_5(VAR_1->controller);
 struct tango_chip *VAR_6 = FUNC_4(VAR_1);
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15 = VAR_5->freq_kHz;

 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 if (VAR_2 == VAR_0)
  return 0;

 VAR_7 = FUNC_6(VAR_15, VAR_4->tCEA_max - VAR_4->tREA_max);
 VAR_8 = FUNC_6(VAR_15, VAR_4->tWB_max);
 VAR_9 = FUNC_6(VAR_15, VAR_4->tWC_min);
 VAR_10 = FUNC_6(VAR_15, VAR_4->tWC_min - VAR_4->tWP_min);

 VAR_11 = FUNC_6(VAR_15, VAR_4->tREA_max);
 VAR_12 = FUNC_6(VAR_15, VAR_4->tREH_min);
 VAR_13 = FUNC_6(VAR_15, VAR_4->tRC_min - VAR_4->tREH_min);
 VAR_14 = FUNC_6(VAR_15, VAR_4->tRHZ_max);

 VAR_6->timing1 = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10);
 VAR_6->timing2 = FUNC_2(VAR_11, VAR_12, VAR_13, VAR_14);

 return 0;
}
