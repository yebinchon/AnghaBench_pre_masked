
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {unsigned int timeout; } ;
struct kempld_wdt_stage {int mask; } ;
struct kempld_wdt_data {unsigned int pretimeout; struct kempld_wdt_stage* stage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct kempld_wdt_data*,struct kempld_wdt_stage*,int ) ;
 int FUNC_1 (struct kempld_wdt_data*,struct kempld_wdt_stage*,unsigned int) ;
 struct kempld_wdt_data* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_5,
     unsigned int VAR_6)
{
 struct kempld_wdt_data *VAR_7 = FUNC_2(VAR_5);
 struct kempld_wdt_stage *VAR_8;
 u8 VAR_9 = VAR_1;
 int VAR_10;

 VAR_8 = &VAR_7->stage[VAR_4];

 if (!VAR_8->mask)
  return -VAR_3;

 if (VAR_6 > VAR_5->timeout)
  return -VAR_2;

 if (VAR_6 > 0)
  VAR_9 = VAR_0;

 VAR_10 = FUNC_0(VAR_7, VAR_8,
      VAR_9);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_1(VAR_7, VAR_8,
      VAR_5->timeout - VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_7->pretimeout = VAR_6;
 return 0;
}
