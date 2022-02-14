
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ s32 ;
struct TYPE_6__ {scalar_t__ HighRSSIThresh; scalar_t__ LowRSSIThresh; } ;
struct TYPE_7__ {TYPE_1__ RateAdaptive; } ;
typedef TYPE_1__* PODM_RATE_ADAPTIVE ;
typedef TYPE_2__* PDM_ODM_T ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,char*) ;

bool FUNC_2(
 PDM_ODM_T VAR_2,
 s32 VAR_3,
 bool VAR_4,
 u8 *VAR_5
)
{
 PODM_RATE_ADAPTIVE VAR_6 = &VAR_2->RateAdaptive;
 const u8 VAR_7 = 5;
 u8 VAR_8 = VAR_6->HighRSSIThresh;
 u8 VAR_9 = VAR_6->LowRSSIThresh;
 u8 VAR_10;




 switch (*VAR_5) {
 case 130:
 case 131:
  break;

 case 128:
  VAR_8 += VAR_7;
  break;

 case 129:
  VAR_8 += VAR_7;
  VAR_9 += VAR_7;
  break;

 default:
  FUNC_0(VAR_2, 0, ("wrong rssi level setting %d !", *VAR_5));
  break;
 }


 if (VAR_3 > VAR_8)
  VAR_10 = 131;
 else if (VAR_3 > VAR_9)
  VAR_10 = 128;
 else
  VAR_10 = 129;


 if (*VAR_5 != VAR_10 || VAR_4) {
  FUNC_1(VAR_2, VAR_0, VAR_1, ("RSSI Level %d -> %d\n", *VAR_5, VAR_10));
  *VAR_5 = VAR_10;
  return 1;
 }

 return 0;
}
