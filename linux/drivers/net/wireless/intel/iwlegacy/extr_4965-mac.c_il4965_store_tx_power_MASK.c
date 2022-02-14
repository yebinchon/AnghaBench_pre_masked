
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char const*) ;
 struct il_priv* FUNC_2 (struct device*) ;
 int FUNC_3 (struct il_priv*,unsigned long,int) ;
 int FUNC_4 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct il_priv *VAR_4 = FUNC_2(VAR_0);
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_4(VAR_2, 10, &VAR_5);
 if (VAR_6)
  FUNC_1("%s is not in decimal form.\n", VAR_2);
 else {
  VAR_6 = FUNC_3(VAR_4, VAR_5, 0);
  if (VAR_6)
   FUNC_0("failed setting tx power (0x%08x).\n", VAR_6);
  else
   VAR_6 = VAR_3;
 }
 return VAR_6;
}
