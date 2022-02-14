
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_voltage_desc {int max; int min; int step; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const struct sec_voltage_desc *VAR_1,
       int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1 == ((void*)0))
  return -VAR_0;

 if (VAR_2 > VAR_1->max)
  return -VAR_0;

 if (VAR_2 < VAR_1->min)
  VAR_2 = VAR_1->min;

 VAR_3 = FUNC_0(VAR_2 - VAR_1->min, VAR_1->step);

 if (VAR_1->min + VAR_1->step * VAR_3 > VAR_1->max)
  return -VAR_0;

 return VAR_3;
}
