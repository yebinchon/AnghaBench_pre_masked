
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int cd_factor; } ;
struct cpcap_battery_ddata {int vendor; TYPE_1__ config; } ;
typedef int s64 ;
typedef int s32 ;
typedef int s16 ;




 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct cpcap_battery_ddata *VAR_1,
        s32 VAR_2, s32 VAR_3,
        s16 VAR_4, u32 VAR_5)
{
 s64 VAR_6;
 u64 VAR_7;
 int VAR_8;
 u32 VAR_9;

 if (!VAR_5)
  return 0;

 switch (VAR_1->vendor) {
 case 129:
  VAR_9 = 95374;
  break;
 case 128:
  VAR_9 = 91501;
  break;
 default:
  return -VAR_0;
 }

 VAR_6 = VAR_3;
 VAR_6 = VAR_6 - ((s64)VAR_2 * VAR_4);
 VAR_9 = (VAR_9 * VAR_1->config.cd_factor) / 1000;

 if (VAR_6 >= 0)
  VAR_7 = VAR_6;
 else
  VAR_7 = VAR_6 * -1;

 VAR_7 = VAR_7 * VAR_9;
 FUNC_0(VAR_7, VAR_5);
 VAR_8 = VAR_7;

 if (VAR_6 >= 0)
  return -VAR_8;
 else
  return VAR_8;
}
