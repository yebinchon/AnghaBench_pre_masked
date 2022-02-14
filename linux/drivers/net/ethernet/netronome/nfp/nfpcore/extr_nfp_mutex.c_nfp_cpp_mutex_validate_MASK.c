
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(u16 VAR_3, int *VAR_4, unsigned long long VAR_5)
{

 if (FUNC_0(VAR_3) ==
     VAR_1)
  return -VAR_0;


 if (VAR_5 & 7)
  return -VAR_0;

 if (*VAR_4 != VAR_2)
  return -VAR_0;

 return 0;
}
