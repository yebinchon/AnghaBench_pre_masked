
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtsx_chip {int max_lun; int* lun2card; scalar_t__ ic_version; int adma_mode; scalar_t__ hw_bypass_sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ,int) ;

void FUNC_3(struct rtsx_chip *VAR_13)
{
 u32 VAR_14 = 0;

 int VAR_15;


 VAR_14 = VAR_10 | VAR_9;


 for (VAR_15 = 0; VAR_15 <= VAR_13->max_lun; VAR_15++) {
  FUNC_0(FUNC_1(VAR_13), "lun2card[%d] = 0x%02x\n",
   VAR_15, VAR_13->lun2card[VAR_15]);

  if (VAR_13->lun2card[VAR_15] & VAR_11)
   VAR_14 |= VAR_12;
  if (VAR_13->lun2card[VAR_15] & VAR_7)
   VAR_14 |= VAR_8;
  if (VAR_13->lun2card[VAR_15] & VAR_3)
   VAR_14 |= VAR_4;
 }
 if (VAR_13->hw_bypass_sd)
  VAR_14 &= ~((u32)VAR_8);


 if (VAR_13->ic_version >= VAR_2)
  VAR_14 |= VAR_1;



 if (!VAR_13->adma_mode)
  VAR_14 |= VAR_0;


 FUNC_2(VAR_13, VAR_6, VAR_14);

 FUNC_0(FUNC_1(VAR_13), "RTSX_BIER: 0x%08x\n", VAR_14);
}
