
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct watchdog_device {int dummy; } ;
struct sp805_wdt {int rate; int lock; scalar_t__ load_val; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sp805_wdt* FUNC_4 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_5(struct watchdog_device *VAR_3)
{
 struct sp805_wdt *VAR_4 = FUNC_4(VAR_3);
 u64 VAR_5;

 FUNC_2(&VAR_4->lock);
 VAR_5 = FUNC_1(VAR_4->base + VAR_2);


 if (!(FUNC_1(VAR_4->base + VAR_1) & VAR_0))
  VAR_5 += VAR_4->load_val + 1;
 FUNC_3(&VAR_4->lock);

 return FUNC_0(VAR_5, VAR_4->rate);
}
