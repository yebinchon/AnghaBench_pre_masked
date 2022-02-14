
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__*) ;

__attribute__((used)) static s32
FUNC_1(s32 VAR_2, s32 VAR_3)
{
 s32 VAR_4 = 0;

 if (VAR_0 == VAR_2 ||
     VAR_0 == VAR_3)
  return 0;

 FUNC_0(VAR_3 - VAR_2,
         VAR_1, &VAR_4);

 if (VAR_3 > VAR_2)
  VAR_4 *= 2;
 if ((VAR_4 < -2) || (VAR_4 > 2))
  VAR_4 = 0;

 return VAR_4;
}
