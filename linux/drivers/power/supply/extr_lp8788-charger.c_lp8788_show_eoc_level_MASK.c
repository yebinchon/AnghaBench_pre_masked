
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp8788_charger {int lp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct lp8788_charger* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (char*,int ,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_5,
    struct device_attribute *VAR_6, char *VAR_7)
{
 struct lp8788_charger *VAR_8 = FUNC_0(VAR_5);
 static const char * const VAR_9[] = {
   "25mA", "49mA", "75mA", "98mA"
 };
 static const char * const VAR_10[] = {
   "5%", "10%", "15%", "20%"
 };
 const char *VAR_11;
 u8 VAR_12;
 u8 VAR_13;

 FUNC_1(VAR_8->lp, VAR_0, &VAR_12);

 VAR_13 = VAR_12 & VAR_3;
 VAR_12 = (VAR_12 & VAR_1) >> VAR_2;
 VAR_11 = VAR_13 ? VAR_9[VAR_12] : VAR_10[VAR_12];

 return FUNC_2(VAR_7, VAR_4, "End Of Charge Level: %s\n", VAR_11);
}
