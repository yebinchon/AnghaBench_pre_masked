
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct ni903x_wdt {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 struct ni903x_wdt* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_3(struct watchdog_device *VAR_6)
{
 struct ni903x_wdt *VAR_7 = FUNC_2(VAR_6);
 u8 VAR_8, VAR_9, VAR_10, VAR_11;
 u32 VAR_12;

 VAR_8 = FUNC_0(VAR_7->io_base + VAR_0);
 VAR_8 |= VAR_1;
 FUNC_1(VAR_8, VAR_7->io_base + VAR_0);

 VAR_11 = FUNC_0(VAR_7->io_base + VAR_4);
 VAR_10 = FUNC_0(VAR_7->io_base + VAR_3);
 VAR_9 = FUNC_0(VAR_7->io_base + VAR_2);

 VAR_12 = (VAR_11 << 16) | (VAR_10 << 8) | VAR_9;

 return VAR_12 / (1000000000 / VAR_5);
}
