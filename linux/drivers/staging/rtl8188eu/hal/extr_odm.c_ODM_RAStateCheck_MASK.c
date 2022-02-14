
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct odm_rate_adapt {scalar_t__ HighRSSIThresh; scalar_t__ LowRSSIThresh; } ;
struct odm_dm_struct {struct odm_rate_adapt RateAdaptive; } ;
typedef scalar_t__ s32 ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct odm_dm_struct*,int,char*) ;
 int FUNC_1 (struct odm_dm_struct*,int ,int ,char*) ;

bool FUNC_2(struct odm_dm_struct *VAR_2, s32 VAR_3, bool VAR_4, u8 *VAR_5)
{
 struct odm_rate_adapt *VAR_6 = &VAR_2->RateAdaptive;
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
