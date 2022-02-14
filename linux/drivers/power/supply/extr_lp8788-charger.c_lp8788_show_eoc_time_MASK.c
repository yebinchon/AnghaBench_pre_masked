
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct lp8788_charger {int lp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct lp8788_charger* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,size_t*) ;
 int FUNC_2 (char*,int ,char*,char const* const) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
    struct device_attribute *VAR_5, char *VAR_6)
{
 struct lp8788_charger *VAR_7 = FUNC_0(VAR_4);
 static const char * const VAR_8[] = {
  "400ms", "5min", "10min", "15min",
  "20min", "25min", "30min", "No timeout"
 };
 u8 VAR_9;

 FUNC_1(VAR_7->lp, VAR_0, &VAR_9);
 VAR_9 = (VAR_9 & VAR_1) >> VAR_2;

 return FUNC_2(VAR_6, VAR_3, "End Of Charge Time: %s\n",
   VAR_8[VAR_9]);
}
