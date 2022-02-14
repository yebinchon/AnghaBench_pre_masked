
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct armada_thermal_priv {char* zone_name; } ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char*,char*) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_1,
     struct armada_thermal_priv *VAR_2)
{
 const char *VAR_3 = FUNC_0(&VAR_1->dev);
 char *VAR_4;

 if (FUNC_1(VAR_3) > VAR_0) {





  VAR_3 = FUNC_4(VAR_3, ':');
  if (!VAR_3)
   VAR_3 = "armada_thermal";
  else
   VAR_3++;
 }


 FUNC_2(VAR_2->zone_name, VAR_3, VAR_0 - 1);
 VAR_2->zone_name[VAR_0 - 1] = '\0';


 do {
  VAR_4 = FUNC_3(VAR_2->zone_name, "-");
  if (VAR_4)
   *VAR_4 = '_';
 } while (VAR_4);
}
