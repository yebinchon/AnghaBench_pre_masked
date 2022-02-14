
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_sport {int cts_gpio; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct pic32_sport *VAR_0)
{

 if (FUNC_1(VAR_0->cts_gpio))
  return !FUNC_0(VAR_0->cts_gpio);

 return 1;
}
