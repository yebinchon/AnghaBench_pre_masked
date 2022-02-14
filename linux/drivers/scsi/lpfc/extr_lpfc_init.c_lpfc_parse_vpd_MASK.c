
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int pport_name_sta; } ;
struct lpfc_hba {int* SerialNumber; int* ModelDesc; int* ModelName; int* ProgramType; int* Port; TYPE_1__ sli4_hba; int sli_rev; int vpd_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int ,int ,int ,int ) ;

int
FUNC_1(struct lpfc_hba *VAR_9, uint8_t *VAR_10, int VAR_11)
{
 uint8_t VAR_12, VAR_13;
 int VAR_14;
 int VAR_15, VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 0;

 if (!VAR_10)
  return 0;


 FUNC_0(VAR_9, VAR_0, VAR_1,
   "0455 Vital Product Data: x%x x%x x%x x%x\n",
   (uint32_t) VAR_10[0], (uint32_t) VAR_10[1], (uint32_t) VAR_10[2],
   (uint32_t) VAR_10[3]);
 while (!VAR_17 && (VAR_18 < (VAR_11 - 4))) {
  switch (VAR_10[VAR_18]) {
  case 0x82:
  case 0x91:
   VAR_18 += 1;
   VAR_12 = VAR_10[VAR_18];
   VAR_18 += 1;
   VAR_13 = VAR_10[VAR_18];
   VAR_18 += 1;
   VAR_15 = ((((unsigned short)VAR_13) << 8) + VAR_12);
   VAR_18 += VAR_15;
   break;
  case 0x90:
   VAR_18 += 1;
   VAR_12 = VAR_10[VAR_18];
   VAR_18 += 1;
   VAR_13 = VAR_10[VAR_18];
   VAR_18 += 1;
   VAR_14 = ((((unsigned short)VAR_13) << 8) + VAR_12);
   if (VAR_14 > VAR_11 - VAR_18)
    VAR_14 = VAR_11 - VAR_18;
   while (VAR_14 > 0) {

   if ((VAR_10[VAR_18] == 'S') && (VAR_10[VAR_18+1] == 'N')) {
    VAR_18 += 2;
    VAR_15 = VAR_10[VAR_18];
    VAR_18 += 1;
    VAR_16 = 0;
    VAR_14 -= (3+VAR_15);
    while(VAR_15--) {
     VAR_9->SerialNumber[VAR_16++] = VAR_10[VAR_18++];
     if (VAR_16 == 31)
      break;
    }
    VAR_9->SerialNumber[VAR_16] = 0;
    continue;
   }
   else if ((VAR_10[VAR_18] == 'V') && (VAR_10[VAR_18+1] == '1')) {
    VAR_9->vpd_flag |= VAR_5;
    VAR_18 += 2;
    VAR_15 = VAR_10[VAR_18];
    VAR_18 += 1;
    VAR_16 = 0;
    VAR_14 -= (3+VAR_15);
    while(VAR_15--) {
     VAR_9->ModelDesc[VAR_16++] = VAR_10[VAR_18++];
     if (VAR_16 == 255)
      break;
    }
    VAR_9->ModelDesc[VAR_16] = 0;
    continue;
   }
   else if ((VAR_10[VAR_18] == 'V') && (VAR_10[VAR_18+1] == '2')) {
    VAR_9->vpd_flag |= VAR_6;
    VAR_18 += 2;
    VAR_15 = VAR_10[VAR_18];
    VAR_18 += 1;
    VAR_16 = 0;
    VAR_14 -= (3+VAR_15);
    while(VAR_15--) {
     VAR_9->ModelName[VAR_16++] = VAR_10[VAR_18++];
     if (VAR_16 == 79)
      break;
    }
    VAR_9->ModelName[VAR_16] = 0;
    continue;
   }
   else if ((VAR_10[VAR_18] == 'V') && (VAR_10[VAR_18+1] == '3')) {
    VAR_9->vpd_flag |= VAR_8;
    VAR_18 += 2;
    VAR_15 = VAR_10[VAR_18];
    VAR_18 += 1;
    VAR_16 = 0;
    VAR_14 -= (3+VAR_15);
    while(VAR_15--) {
     VAR_9->ProgramType[VAR_16++] = VAR_10[VAR_18++];
     if (VAR_16 == 255)
      break;
    }
    VAR_9->ProgramType[VAR_16] = 0;
    continue;
   }
   else if ((VAR_10[VAR_18] == 'V') && (VAR_10[VAR_18+1] == '4')) {
    VAR_9->vpd_flag |= VAR_7;
    VAR_18 += 2;
    VAR_15 = VAR_10[VAR_18];
    VAR_18 += 1;
    VAR_16 = 0;
    VAR_14 -= (3+VAR_15);
    while(VAR_15--) {
     if ((VAR_9->sli_rev == VAR_4) &&
         (VAR_9->sli4_hba.pport_name_sta ==
          VAR_2)) {
      VAR_16++;
      VAR_18++;
     } else
      VAR_9->Port[VAR_16++] = VAR_10[VAR_18++];
     if (VAR_16 == 19)
      break;
    }
    if ((VAR_9->sli_rev != VAR_4) ||
        (VAR_9->sli4_hba.pport_name_sta ==
         VAR_3))
     VAR_9->Port[VAR_16] = 0;
    continue;
   }
   else {
    VAR_18 += 2;
    VAR_15 = VAR_10[VAR_18];
    VAR_18 += 1;
    VAR_18 += VAR_15;
    VAR_14 -= (3 + VAR_15);
   }
  }
  VAR_17 = 0;
  break;
  case 0x78:
   VAR_17 = 1;
   break;
  default:
   VAR_18 ++;
   break;
  }
 }

 return(1);
}
