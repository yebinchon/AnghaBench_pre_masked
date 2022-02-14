
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct kempld_wdt_stage {scalar_t__ mask; } ;
struct kempld_wdt_data {unsigned int pretimeout; struct kempld_wdt_stage* stage; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct kempld_wdt_data*,struct kempld_wdt_stage*,int ) ;
 int FUNC_1 (struct kempld_wdt_data*,struct kempld_wdt_stage*,unsigned int) ;
 struct kempld_wdt_data* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_3,
     unsigned int VAR_4)
{
 struct kempld_wdt_data *VAR_5 = FUNC_2(VAR_3);
 struct kempld_wdt_stage *VAR_6;
 struct kempld_wdt_stage *VAR_7;
 int VAR_8;

 VAR_7 = &VAR_5->stage[VAR_2];
 VAR_6 = &VAR_5->stage[VAR_1];

 if (VAR_6->mask && VAR_5->pretimeout > 0)
  VAR_4 = VAR_5->pretimeout;

 VAR_8 = FUNC_0(VAR_5, VAR_7,
      VAR_0);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_5, VAR_7,
      VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_3->timeout = VAR_4;
 return 0;
}
