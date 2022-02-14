
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2 {scalar_t__ hw_version; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(struct mvpp2 *VAR_4)
{
 unsigned int VAR_5;

 if (VAR_4->hw_version == VAR_0 && VAR_3 == VAR_2)
  return 1;






 VAR_5 = (FUNC_0() + 3) & ~0x3;
 if (VAR_5 > VAR_1)
  VAR_5 = VAR_1;

 return VAR_5;
}
