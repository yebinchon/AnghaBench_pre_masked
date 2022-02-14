
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int status; } ;
struct dw_wdt {int rst; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 struct dw_wdt* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_1)
{
 struct dw_wdt *VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2->rst) {
  FUNC_2(VAR_0, &VAR_1->status);
  return 0;
 }

 FUNC_0(VAR_2->rst);
 FUNC_1(VAR_2->rst);

 return 0;
}
