
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,char const*) ;

__attribute__((used)) static bool FUNC_1(const u8 *VAR_0, struct device *VAR_1, const char *VAR_2)
{
 if (!VAR_0) {
  FUNC_0(VAR_1, "%s: uuid not set\n", VAR_2);
  return 1;
 }
 return 0;
}
