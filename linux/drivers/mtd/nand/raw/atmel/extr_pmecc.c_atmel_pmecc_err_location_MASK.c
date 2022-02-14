
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct atmel_pmecc_user {int* lmu; int * smu; struct atmel_pmecc* pmecc; } ;
struct TYPE_2__ {scalar_t__ errloc; } ;
struct atmel_pmecc {int dev; TYPE_1__ regs; } ;
typedef int s16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct atmel_pmecc_user*) ;
 int FUNC_3 (struct atmel_pmecc_user*) ;
 int FUNC_4 (scalar_t__,int,int,int ,int) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct atmel_pmecc_user *VAR_9)
{
 int VAR_10 = FUNC_2(VAR_9);
 int VAR_11 = VAR_10 == 512 ? 13 : 14;
 struct atmel_pmecc *VAR_12 = VAR_9->pmecc;
 int VAR_13 = FUNC_3(VAR_9);
 int VAR_14, VAR_15, VAR_16, VAR_17 = 0;
 int VAR_18 = (2 * VAR_13) + 1;
 s16 *VAR_19 = VAR_9->smu;
 u32 VAR_20;

 FUNC_5(VAR_7, VAR_12->regs.errloc + VAR_1);

 for (VAR_16 = 0; VAR_16 <= VAR_9->lmu[VAR_13 + 1] >> 1; VAR_16++) {
  FUNC_6(VAR_19[(VAR_13 + 1) * VAR_18 + VAR_16],
          VAR_12->regs.errloc + FUNC_0(VAR_16));
  VAR_17++;
 }

 VAR_20 = (VAR_17 - 1) << 16;
 if (VAR_10 == 1024)
  VAR_20 |= 1;

 FUNC_5(VAR_20, VAR_12->regs.errloc + VAR_0);
 FUNC_5((VAR_10 * 8) + (VAR_11 * VAR_13),
        VAR_12->regs.errloc + VAR_2);

 VAR_14 = FUNC_4(VAR_12->regs.errloc +
      VAR_3,
      VAR_20, VAR_20 & VAR_6, 0,
      VAR_5 * 1000);
 if (VAR_14) {
  FUNC_1(VAR_12->dev,
   "PMECC: Timeout to calculate error location.\n");
  return VAR_14;
 }

 VAR_15 = (VAR_20 & VAR_8) >> 8;

 if (VAR_15 == VAR_9->lmu[VAR_13 + 1] >> 1)
  return VAR_17 - 1;





 return -VAR_4;
}
