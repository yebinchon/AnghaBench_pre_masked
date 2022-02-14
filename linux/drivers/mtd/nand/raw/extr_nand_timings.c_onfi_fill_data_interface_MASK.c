
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct onfi_params {unsigned long long tPROG; unsigned long long tBERS; unsigned long long tR; unsigned long tCCS; } ;
struct nand_sdr_timings {unsigned long long tPROG_max; unsigned long long tBERS_max; unsigned long long tR_max; unsigned long tCCS_min; } ;
struct TYPE_4__ {struct nand_sdr_timings sdr; } ;
struct nand_data_interface {TYPE_2__ timings; } ;
struct TYPE_3__ {struct onfi_params* onfi; } ;
struct nand_chip {TYPE_1__ parameters; struct nand_data_interface data_interface; } ;
typedef enum nand_data_interface_type { ____Placeholder_nand_data_interface_type } nand_data_interface_type ;


 int FUNC_0 (struct nand_data_interface*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 struct nand_data_interface* VAR_3 ;

int FUNC_1(struct nand_chip *VAR_4,
        enum nand_data_interface_type VAR_5,
        int VAR_6)
{
 struct nand_data_interface *VAR_7 = &VAR_4->data_interface;
 struct onfi_params *VAR_8 = VAR_4->parameters.onfi;

 if (VAR_5 != VAR_1)
  return -VAR_0;

 if (VAR_6 < 0 || VAR_6 >= FUNC_0(VAR_3))
  return -VAR_0;

 *VAR_7 = VAR_3[VAR_6];






 if (VAR_8) {
  struct nand_sdr_timings *VAR_9 = &VAR_7->timings.sdr;


  VAR_9->tPROG_max = 1000000ULL * VAR_8->tPROG;
  VAR_9->tBERS_max = 1000000ULL * VAR_8->tBERS;
  VAR_9->tR_max = 1000000ULL * VAR_8->tR;


  VAR_9->tCCS_min = 1000UL * VAR_8->tCCS;
 } else {
  struct nand_sdr_timings *VAR_10 = &VAR_7->timings.sdr;
  VAR_10->tPROG_max = 1000000ULL * VAR_2;
  VAR_10->tBERS_max = 1000000ULL * VAR_2;
  VAR_10->tR_max = 1000000ULL * 200000000ULL;


  VAR_10->tCCS_min = 1000UL * 500000;
 }

 return 0;
}
