
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct watchdog_device {unsigned int timeout; } ;
struct sp805_wdt {int rate; int load_val; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sp805_wdt* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_2, unsigned int VAR_3)
{
 struct sp805_wdt *VAR_4 = FUNC_3(VAR_2);
 u64 VAR_5, VAR_6;

 VAR_6 = VAR_4->rate;







 VAR_5 = FUNC_0(VAR_6, 2) * VAR_3 - 1;

 VAR_5 = (VAR_5 > VAR_0) ? VAR_0 : VAR_5;
 VAR_5 = (VAR_5 < VAR_1) ? VAR_1 : VAR_5;

 FUNC_1(&VAR_4->lock);
 VAR_4->load_val = VAR_5;

 VAR_2->timeout = FUNC_0((VAR_5 + 1) * 2 + (VAR_6 / 2), VAR_6);
 FUNC_2(&VAR_4->lock);

 return 0;
}
