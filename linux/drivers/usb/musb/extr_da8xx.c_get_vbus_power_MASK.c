
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator*) ;
 struct regulator* FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct regulator*) ;

__attribute__((used)) static inline u8 FUNC_4(struct device *VAR_0)
{
 struct regulator *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0, "vbus");
 if (FUNC_0(VAR_1))
  return 255;
 VAR_2 = FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 if (VAR_2 <= 0 || VAR_2 > 510000)
  return 255;
 return VAR_2 / 1000 / 2;
}
