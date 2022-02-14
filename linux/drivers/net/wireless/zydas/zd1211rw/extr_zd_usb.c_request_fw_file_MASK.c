
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,char const*) ;
 int FUNC_1 (struct device*,char*,char const*,int) ;
 int FUNC_2 (struct firmware const**,char const*,struct device*) ;

__attribute__((used)) static int FUNC_3(
 const struct firmware **VAR_0, const char *VAR_1, struct device *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2, "fw name %s\n", VAR_1);

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_1(VAR_2,
         "Could not load firmware file %s. Error number %d\n",
         VAR_1, VAR_3);
 return VAR_3;
}
