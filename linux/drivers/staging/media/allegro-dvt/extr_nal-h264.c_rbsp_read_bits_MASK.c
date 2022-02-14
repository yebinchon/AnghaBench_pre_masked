
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbsp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rbsp*) ;

__attribute__((used)) static inline int FUNC_1(struct rbsp *VAR_1, int VAR_2, unsigned int *VAR_3)
{
 int VAR_4;
 int VAR_5;
 unsigned int VAR_6 = 0;

 if (VAR_2 > 8 * sizeof(*VAR_3))
  return -VAR_0;

 for (VAR_4 = VAR_2; VAR_4 > 0; VAR_4--) {
  VAR_5 = FUNC_0(VAR_1);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_6 |= VAR_5 << (VAR_4 - 1);
 }

 if (VAR_3)
  *VAR_3 = VAR_6;

 return 0;
}
