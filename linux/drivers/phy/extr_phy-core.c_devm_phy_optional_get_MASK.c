
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 struct phy* FUNC_2 (struct device*,char const*) ;

struct phy *FUNC_3(struct device *VAR_1, const char *VAR_2)
{
 struct phy *VAR_3 = FUNC_2(VAR_1, VAR_2);

 if (FUNC_0(VAR_3) && (FUNC_1(VAR_3) == -VAR_0))
  VAR_3 = ((void*)0);

 return VAR_3;
}
