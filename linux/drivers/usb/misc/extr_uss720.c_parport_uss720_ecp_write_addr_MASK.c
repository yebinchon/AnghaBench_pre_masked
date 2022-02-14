
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct parport*,int ) ;
 scalar_t__ FUNC_1 (struct parport*,int,char,int ) ;

__attribute__((used)) static size_t FUNC_2(struct parport *VAR_3, const void *VAR_4, size_t VAR_5, int VAR_6)
{
 size_t VAR_7 = 0;

 if (FUNC_0(VAR_3, VAR_0))
  return 0;
 for (; VAR_7 < VAR_5; VAR_7++) {
  if (FUNC_1(VAR_3, 5, *(char *)VAR_4, VAR_2))
   break;
  VAR_4++;
 }
 FUNC_0(VAR_3, VAR_1);
 return VAR_7;
}
