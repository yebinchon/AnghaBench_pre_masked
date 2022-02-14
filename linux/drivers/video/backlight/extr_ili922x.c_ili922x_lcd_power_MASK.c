
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ili922x {int power; int spi; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ili922x *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_0(VAR_1) && !FUNC_0(VAR_0->power))
  VAR_2 = FUNC_2(VAR_0->spi);
 else if (!FUNC_0(VAR_1) && FUNC_0(VAR_0->power))
  VAR_2 = FUNC_1(VAR_0->spi);

 if (!VAR_2)
  VAR_0->power = VAR_1;

 return VAR_2;
}
