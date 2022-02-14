
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wsm_configuration {TYPE_1__* txPowerRange; void* supportedRateMask; int dot11FrequencyBandsSupported; int dot11StationId; } ;
struct wsm_buf {int dummy; } ;
struct cw1200_common {int dummy; } ;
struct TYPE_2__ {void* stepping; void* max_power_level; void* min_power_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct wsm_buf*,int ,int ) ;
 void* FUNC_2 (struct wsm_buf*) ;
 int FUNC_3 (struct wsm_buf*) ;
 int FUNC_4 (struct wsm_buf*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct cw1200_common *VAR_3,
         struct wsm_configuration *VAR_4,
         struct wsm_buf *VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5);
 if (FUNC_0(VAR_7 != VAR_2))
  return -VAR_0;

 FUNC_1(VAR_5, VAR_4->dot11StationId, VAR_1);
 VAR_4->dot11FrequencyBandsSupported = FUNC_3(VAR_5);
 FUNC_4(VAR_5, 1);
 VAR_4->supportedRateMask = FUNC_2(VAR_5);
 for (VAR_6 = 0; VAR_6 < 2; ++VAR_6) {
  VAR_4->txPowerRange[VAR_6].min_power_level = FUNC_2(VAR_5);
  VAR_4->txPowerRange[VAR_6].max_power_level = FUNC_2(VAR_5);
  VAR_4->txPowerRange[VAR_6].stepping = FUNC_2(VAR_5);
 }
 return 0;

underflow:
 FUNC_0(1);
 return -VAR_0;
}
