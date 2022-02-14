
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int status; int pretimeout; int timeout; } ;
struct sprd_wdt {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sprd_wdt*,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 struct sprd_wdt* FUNC_5 (struct watchdog_device*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct watchdog_device *VAR_5)
{
 struct sprd_wdt *VAR_6 = FUNC_5(VAR_5);
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_5->timeout, VAR_5->pretimeout);
 if (VAR_8)
  return VAR_8;

 FUNC_4(VAR_6->base);
 VAR_7 = FUNC_0(VAR_6->base + VAR_1);
 VAR_7 |= VAR_0 | VAR_2 | VAR_3;
 FUNC_6(VAR_7, VAR_6->base + VAR_1);
 FUNC_3(VAR_6->base);
 FUNC_1(VAR_4, &VAR_5->status);

 return 0;
}
