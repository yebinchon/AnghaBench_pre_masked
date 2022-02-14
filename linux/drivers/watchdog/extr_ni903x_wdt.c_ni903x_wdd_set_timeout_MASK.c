
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {unsigned int timeout; } ;
struct ni903x_wdt {scalar_t__ io_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,scalar_t__) ;
 struct ni903x_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_4,
      unsigned int VAR_5)
{
 struct ni903x_wdt *VAR_6 = FUNC_1(VAR_4);
 u32 VAR_7 = VAR_5 * (1000000000 / VAR_0);

 FUNC_0(((0x00FF0000 & VAR_7) >> 16), VAR_6->io_base + VAR_3);
 FUNC_0(((0x0000FF00 & VAR_7) >> 8), VAR_6->io_base + VAR_2);
 FUNC_0((0x000000FF & VAR_7), VAR_6->io_base + VAR_1);

 VAR_4->timeout = VAR_5;

 return 0;
}
