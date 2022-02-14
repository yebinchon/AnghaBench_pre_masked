
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned long timeout; } ;
struct cdns_wdt {unsigned long prescaler; unsigned short ctrl_clksel; int io_lock; scalar_t__ rst; int clk; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned long VAR_3 ;
 unsigned short VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (struct cdns_wdt*,int ,unsigned int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct cdns_wdt* FUNC_4 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_13)
{
 struct cdns_wdt *VAR_14 = FUNC_4(VAR_13);
 unsigned int VAR_15 = 0;
 unsigned short VAR_16;
 unsigned long VAR_17 = FUNC_1(VAR_14->clk);





 VAR_16 = (VAR_13->timeout * (VAR_17 / VAR_14->prescaler)) /
   VAR_3 + 1;

 if (VAR_16 > VAR_2)
  VAR_16 = VAR_2;

 FUNC_2(&VAR_14->io_lock);
 FUNC_0(VAR_14, VAR_8,
     VAR_12);

 VAR_16 = (VAR_16 << 2) & VAR_0;


 VAR_15 = VAR_16 | VAR_4 | VAR_14->ctrl_clksel;
 FUNC_0(VAR_14, VAR_1, VAR_15);
 VAR_15 = VAR_11 | VAR_10 |
        VAR_12;


 if (VAR_14->rst) {
  VAR_15 |= VAR_9;
  VAR_15 &= ~VAR_7;
 } else {
  VAR_15 &= ~VAR_9;
  VAR_15 |= VAR_7;
 }
 FUNC_0(VAR_14, VAR_8, VAR_15);
 FUNC_0(VAR_14, VAR_6,
     VAR_5);
 FUNC_3(&VAR_14->io_lock);

 return 0;
}
