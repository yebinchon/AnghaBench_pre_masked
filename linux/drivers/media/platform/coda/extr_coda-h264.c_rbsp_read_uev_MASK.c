
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {int dummy; } ;


 int FUNC_0 (struct rbsp*) ;
 int FUNC_1 (struct rbsp*,int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct rbsp *VAR_0, unsigned int *VAR_1)
{
 int VAR_2 = 0;
 unsigned int VAR_3 = 0;
 int VAR_4;

 while ((VAR_4 = FUNC_0(VAR_0)) == 0)
  VAR_2++;
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_2 > 0) {
  VAR_4 = FUNC_1(VAR_0, VAR_2, &VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 if (VAR_1)
  *VAR_1 = (1 << VAR_2) - 1 + VAR_3;

 return 0;
}
