
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct go7007 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct go7007*,int*,int*) ;
 scalar_t__ FUNC_1 (struct go7007*,int,int) ;

int FUNC_2(struct go7007 *VAR_1, u16 VAR_2, u16 *VAR_3)
{
 int VAR_4 = 100;
 u16 VAR_5;

 if (FUNC_1(VAR_1, 0x0010, VAR_2) < 0)
  return -VAR_0;
 while (VAR_4-- > 0) {
  if (FUNC_0(VAR_1, &VAR_5, VAR_3) == 0 &&
    VAR_5 == 0xa000)
   return 0;
 }
 return -VAR_0;
}
