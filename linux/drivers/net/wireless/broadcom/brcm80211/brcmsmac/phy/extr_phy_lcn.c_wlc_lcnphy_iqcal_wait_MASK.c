
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct brcms_phy*) ;

__attribute__((used)) static bool FUNC_2(struct brcms_phy *VAR_0)
{
 uint VAR_1 = 0;

 while (FUNC_1(VAR_0)) {
  FUNC_0(100);
  VAR_1++;

  if (VAR_1 > (10 * 500))
   break;
 }

 return (0 == FUNC_1(VAR_0));
}
