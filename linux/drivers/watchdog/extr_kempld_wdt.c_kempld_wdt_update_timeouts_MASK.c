
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kempld_wdt_stage {int dummy; } ;
struct TYPE_2__ {unsigned int timeout; } ;
struct kempld_wdt_data {unsigned int pretimeout; TYPE_1__ wdd; struct kempld_wdt_stage* stage; struct kempld_device_data* pld; } ;
struct kempld_device_data {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct kempld_device_data*) ;
 int FUNC_1 (struct kempld_device_data*) ;
 unsigned int FUNC_2 (struct kempld_wdt_data*,struct kempld_wdt_stage*) ;

__attribute__((used)) static void FUNC_3(struct kempld_wdt_data *VAR_2)
{
 struct kempld_device_data *VAR_3 = VAR_2->pld;
 struct kempld_wdt_stage *VAR_4;
 struct kempld_wdt_stage *VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_4 = &VAR_2->stage[VAR_0];
 VAR_5 = &VAR_2->stage[VAR_1];

 FUNC_0(VAR_3);
 VAR_6 = FUNC_2(VAR_2, VAR_4);
 VAR_7 = FUNC_2(VAR_2, VAR_5);
 FUNC_1(VAR_3);

 if (VAR_6)
  VAR_2->pretimeout = VAR_7;
 else
  VAR_2->pretimeout = 0;

 VAR_2->wdd.timeout = VAR_6 + VAR_7;
}
