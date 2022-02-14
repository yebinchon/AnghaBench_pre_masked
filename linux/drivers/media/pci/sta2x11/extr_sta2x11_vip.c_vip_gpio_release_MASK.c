
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int,char const*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, int VAR_1, const char *VAR_2)
{
 if (FUNC_2(VAR_1)) {
  FUNC_0(VAR_0, "releasing pin %d (%s)\n", VAR_1, VAR_2);
  FUNC_3(VAR_1);
  FUNC_1(VAR_1);
 }
}
