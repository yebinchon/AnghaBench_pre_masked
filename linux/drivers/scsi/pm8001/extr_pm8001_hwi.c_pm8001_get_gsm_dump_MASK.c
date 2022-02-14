
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {int fatal_forensic_shift_offset; scalar_t__ chip_id; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 scalar_t__ VAR_5 ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (struct pm8001_hba_info*,int) ;
 int FUNC_3 (struct pm8001_hba_info*,int,int) ;
 int FUNC_4 (struct pm8001_hba_info*,int) ;
 int FUNC_5 (char*,char*,int) ;

ssize_t
FUNC_6(struct device *VAR_6, u32 VAR_7, char *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0;
 u32 VAR_13, VAR_14, VAR_15;
 u32 VAR_16, VAR_17, VAR_18;
 char *VAR_19;
 struct Scsi_Host *VAR_20 = FUNC_1(VAR_6);
 struct sas_ha_struct *VAR_21 = FUNC_0(VAR_20);
 struct pm8001_hba_info *VAR_22 = VAR_21->lldd_ha;

 VAR_19 = VAR_8;
 VAR_18 = VAR_22->fatal_forensic_shift_offset;


 if ((VAR_7 > 0x100000) || (VAR_18 & 3) ||
  ((VAR_18 + VAR_7) > 0x1000000))
   return -VAR_0;

 if (VAR_22->chip_id == VAR_5)
  VAR_12 = 2;
 else
  VAR_12 = 1;

 VAR_14 = VAR_18 & 0xFFFF0000;
 VAR_11 = VAR_18 & 0x0000FFFF;
 VAR_18 = VAR_14;

 VAR_10 = VAR_7 & 3;
 VAR_15 = VAR_7 >> 2;

 for (VAR_13 = 0; VAR_13 < VAR_15; VAR_13++) {
  if ((VAR_14 + VAR_11) & 0xFFFF0000) {
   if (VAR_22->chip_id == VAR_5)
    VAR_16 = ((VAR_18 + VAR_11) &
      VAR_3);
   else
    VAR_16 = (((VAR_18 + VAR_11) &
      VAR_3) >>
      VAR_4);

   if (VAR_22->chip_id == VAR_5) {
    VAR_17 = VAR_2;
    if (-1 == FUNC_2(VAR_22,
      (VAR_17 + VAR_16)))
     return -VAR_1;
   } else {
    VAR_17 = 0;
    if (-1 == FUNC_4(VAR_22,
      (VAR_17 + VAR_16)))
     return -VAR_1;
   }
   VAR_18 = (VAR_18 + VAR_11) &
      0xFFFF0000;
   VAR_14 = 0;
   VAR_11 = VAR_11 & 0x0000FFFF;
  }
  VAR_9 = FUNC_3(VAR_22, VAR_12, (VAR_14 + VAR_11) &
      0x0000FFFF);
  VAR_19 += FUNC_5(VAR_19, "%08x ", VAR_9);
  VAR_11 += 4;
 }
 if (VAR_10 != 0) {
  VAR_9 = FUNC_3(VAR_22, VAR_12, (VAR_14 + VAR_11) &
      0x0000FFFF);

  VAR_19 += FUNC_5(VAR_19, "%08x ", VAR_9);
 }

 if (-1 == FUNC_2(VAR_22, 0))
   return -VAR_1;
 VAR_22->fatal_forensic_shift_offset += 1024;

 if (VAR_22->fatal_forensic_shift_offset >= 0x100000)
  VAR_22->fatal_forensic_shift_offset = 0;
 return VAR_19 - VAR_8;
}
