
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdat_wdt {unsigned int period; } ;
struct watchdog_device {unsigned int timeout; } ;


 int VAR_0 ;
 struct wdat_wdt* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (struct wdat_wdt*,int ,unsigned int,int *) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1,
    unsigned int VAR_2)
{
 struct wdat_wdt *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4;
 int VAR_5;

 VAR_4 = VAR_2 * 1000 / VAR_3->period;
 VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_4, ((void*)0));
 if (!VAR_5)
  VAR_1->timeout = VAR_2;
 return VAR_5;
}
