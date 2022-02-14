
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(char *VAR_7)
{




 if (VAR_3 == VAR_5)
  return 0;
 switch (*VAR_7) {
 case 16:
  if (VAR_6 != VAR_5)
   VAR_6 = (VAR_6-1) % VAR_1;
  FUNC_0(VAR_2, VAR_4[VAR_6], VAR_0);
  return 1;
 case 14:
  if (VAR_6 != VAR_3)
   VAR_6 = (VAR_6+1) % VAR_1;
  FUNC_0(VAR_2, VAR_4[VAR_6], VAR_0);
  return 1;
 }
 return 0;
}
