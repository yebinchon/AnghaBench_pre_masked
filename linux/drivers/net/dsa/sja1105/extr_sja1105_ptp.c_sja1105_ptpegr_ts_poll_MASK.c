
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct sja1105_regs {int * ptpegr_ts; } ;
struct sja1105_private {TYPE_1__* info; } ;
struct TYPE_2__ {int ptp_ts_bits; int ptpegr_ts_bytes; struct sja1105_regs* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sja1105_private*,int ,int ,int *,int ) ;
 int FUNC_1 (int *,scalar_t__*,int,int,int ) ;
 int FUNC_2 (int,int) ;

int FUNC_3(struct sja1105_private *VAR_2, int VAR_3, u64 *VAR_4)
{
 const struct sja1105_regs *VAR_5 = VAR_2->info->regs;
 int VAR_6, VAR_7;
 int VAR_8 = 10;
 u8 VAR_9[8];
 u64 VAR_10;
 int VAR_11;

 do {
  VAR_11 = FUNC_0(VAR_2, VAR_1,
       VAR_5->ptpegr_ts[VAR_3],
       VAR_9,
       VAR_2->info->ptpegr_ts_bytes);
  if (VAR_11 < 0)
   return VAR_11;

  FUNC_1(VAR_9, &VAR_10, 0, 0,
          VAR_2->info->ptpegr_ts_bytes);
  if (VAR_10)
   break;

  FUNC_2(10, 50);
 } while (--VAR_8);

 if (!VAR_8)
  return -VAR_0;




 VAR_7 = (VAR_2->info->ptpegr_ts_bytes - 4) * 8;



 VAR_7 += 32 - VAR_2->info->ptp_ts_bits;
 VAR_6 = VAR_7 + VAR_2->info->ptp_ts_bits - 1;

 *VAR_4 = 0;

 FUNC_1(VAR_9, VAR_4, VAR_6, VAR_7,
         VAR_2->info->ptpegr_ts_bytes);

 return 0;
}
