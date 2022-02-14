
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;


 int VAR_0 ;
 struct power_supply* FUNC_0 (char*) ;
 int FUNC_1 (struct power_supply*) ;
 int FUNC_2 (char*,size_t,char*,char*,unsigned int) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_1, char *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4 = 0;
 int VAR_5 = 0;
 struct power_supply *VAR_6;

 if (!FUNC_4(VAR_1))
  VAR_1 = "gb_power_supply";
 FUNC_3(VAR_2, VAR_1, VAR_3);

 while ((VAR_5 < VAR_3) && (VAR_6 = FUNC_0(VAR_2))) {
  FUNC_1(VAR_6);

  VAR_5 = FUNC_2(VAR_2, VAR_3, "%s_%u", VAR_1, ++VAR_4);
 }
 if (VAR_5 >= VAR_3)
  return -VAR_0;
 return VAR_4;
}
