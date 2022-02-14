
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct device*,unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_3, unsigned int VAR_4)
{
 return (FUNC_0(VAR_3, VAR_4) ||
  VAR_4 == VAR_1 || VAR_4 == VAR_2 ||
  VAR_4 == VAR_0);
}
