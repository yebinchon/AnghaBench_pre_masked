
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct pcf2127 {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct pcf2127* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1)
{
 struct pcf2127 *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->regmap, VAR_0, VAR_1->timeout);
}
