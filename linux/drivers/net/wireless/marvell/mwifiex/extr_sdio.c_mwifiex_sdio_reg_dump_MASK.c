
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdio_mmc_card {int func; TYPE_1__* reg; } ;
struct mwifiex_adapter {struct sdio_mmc_card* card; } ;
typedef int buf ;
struct TYPE_2__ {int func1_dump_reg_start; int func1_dump_reg_end; int* func1_spec_reg_table; int func1_spec_reg_num; int func1_scratch_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_3 (struct mwifiex_adapter*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int*) ;
 int FUNC_6 (int ,int,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_9(struct mwifiex_adapter *VAR_2, char *VAR_3)
{
 char *VAR_4 = VAR_3;
 struct sdio_mmc_card *VAR_5 = VAR_2->card;
 int VAR_6 = 0;
 u8 VAR_7, VAR_8, VAR_9, VAR_10 = 0, VAR_11 = 0;
 u8 VAR_12, VAR_13, VAR_14;
 char VAR_15[256], *VAR_16;

 if (!VAR_4)
  return 0;

 FUNC_2(VAR_2, VAR_0, "SDIO register dump start\n");

 FUNC_3(VAR_2);

 FUNC_4(VAR_5->func);

 for (VAR_7 = 0; VAR_7 < 5; VAR_7++) {
  FUNC_1(VAR_15, 0, sizeof(VAR_15));
  VAR_16 = VAR_15;

  switch (VAR_7) {
  case 0:

   VAR_8 = VAR_7;
   VAR_13 = 0;
   VAR_14 = 9;
   break;
  case 1:

   VAR_8 = VAR_7;
   VAR_13 = VAR_5->reg->func1_dump_reg_start;
   VAR_14 = VAR_5->reg->func1_dump_reg_end;
   break;
  case 2:
   VAR_10 = 0;
   VAR_8 = 1;
   VAR_13 = VAR_5->reg->func1_spec_reg_table[VAR_10++];
   VAR_11 = VAR_5->reg->func1_spec_reg_num;
   VAR_14 = VAR_5->reg->func1_spec_reg_table[VAR_11-1];
   break;
  default:

   if (VAR_7 == 4)
    FUNC_0(100);
   VAR_8 = 1;
   VAR_13 = VAR_5->reg->func1_scratch_reg;
   VAR_14 = VAR_13 + VAR_1;
  }

  if (VAR_7 != 2)
   VAR_16 += FUNC_8(VAR_16, "SDIO Func%d (%#x-%#x): ",
           VAR_8, VAR_13, VAR_14);
  else
   VAR_16 += FUNC_8(VAR_16, "SDIO Func%d: ", VAR_8);

  for (VAR_12 = VAR_13; VAR_12 <= VAR_14;) {
   if (VAR_8 == 0)
    VAR_9 = FUNC_5(VAR_5->func, VAR_12, &VAR_6);
   else
    VAR_9 = FUNC_6(VAR_5->func, VAR_12, &VAR_6);

   if (VAR_7 == 2)
    VAR_16 += FUNC_8(VAR_16, "(%#x) ", VAR_12);
   if (!VAR_6) {
    VAR_16 += FUNC_8(VAR_16, "%02x ", VAR_9);
   } else {
    VAR_16 += FUNC_8(VAR_16, "ERR");
    break;
   }

   if (VAR_7 == 2 && VAR_12 < VAR_14)
    VAR_12 = VAR_5->reg->func1_spec_reg_table[VAR_10++];
   else
    VAR_12++;
  }

  FUNC_2(VAR_2, VAR_0, "%s\n", VAR_15);
  VAR_4 += FUNC_8(VAR_4, "%s\n", VAR_15);
 }

 FUNC_7(VAR_5->func);

 FUNC_2(VAR_2, VAR_0, "SDIO register dump end\n");

 return VAR_4 - VAR_3;
}
