
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
struct rbsp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rbsp*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct rbsp *VAR_1, int VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 if (VAR_2 > 8 * sizeof(VAR_3))
  return -VAR_0;

 while (VAR_2--) {
  VAR_4 = FUNC_0(VAR_1, (VAR_3 >> VAR_2) & 1);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
