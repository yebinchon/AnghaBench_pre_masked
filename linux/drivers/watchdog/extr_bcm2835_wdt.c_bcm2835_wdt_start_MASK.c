
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct watchdog_device {int timeout; } ;
struct bcm2835_wdt {int lock; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct bcm2835_wdt* FUNC_4 (struct watchdog_device*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct watchdog_device *VAR_6)
{
 struct bcm2835_wdt *VAR_7 = FUNC_4(VAR_6);
 uint32_t VAR_8;
 unsigned long VAR_9;

 FUNC_2(&VAR_7->lock, VAR_9);

 FUNC_5(VAR_0 | (FUNC_0(VAR_6->timeout) &
    VAR_5), VAR_7->base + VAR_4);
 VAR_8 = FUNC_1(VAR_7->base + VAR_1);
 FUNC_5(VAR_0 | (VAR_8 & VAR_2) |
    VAR_3, VAR_7->base + VAR_1);

 FUNC_3(&VAR_7->lock, VAR_9);

 return 0;
}
