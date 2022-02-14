
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sama5d4_wdt {int mr; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct device_node*,char*,char const**) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_5, struct sama5d4_wdt *VAR_6)
{
 const char *VAR_7;

 VAR_6->mr = VAR_1;

 if (!FUNC_1(VAR_5, "atmel,watchdog-type", &VAR_7) &&
     !FUNC_2(VAR_7, "software"))
  VAR_6->mr |= VAR_2;
 else
  VAR_6->mr |= VAR_4;

 if (FUNC_0(VAR_5, "atmel,idle-halt"))
  VAR_6->mr |= VAR_3;

 if (FUNC_0(VAR_5, "atmel,dbg-halt"))
  VAR_6->mr |= VAR_0;

 return 0;
}
