
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {int dummy; } ;


 int FUNC_0 (struct rbsp*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct rbsp *VAR_0, int *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_2)
  return VAR_2;

 if (VAR_1) {
  if (VAR_3 & 1)
   *VAR_1 = (VAR_3 + 1) / 2;
  else
   *VAR_1 = -(VAR_3 / 2);
 }

 return 0;
}
