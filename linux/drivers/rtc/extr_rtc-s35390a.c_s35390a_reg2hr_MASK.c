
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s35390a {scalar_t__ twentyfourhour; } ;


 int FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1(struct s35390a *VAR_0, char VAR_1)
{
 unsigned VAR_2;

 if (VAR_0->twentyfourhour)
  return FUNC_0(VAR_1 & 0x3f);

 VAR_2 = FUNC_0(VAR_1 & 0x3f);
 if (VAR_1 & 0x40)
  VAR_2 += 12;

 return VAR_2;
}
