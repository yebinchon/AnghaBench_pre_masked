
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(u32 VAR_3, u8 VAR_4)
{
 u8 VAR_5 = FUNC_0(VAR_3, VAR_0);


 if (VAR_5 == VAR_1)
  return FUNC_1(VAR_3);

 return !!(VAR_5 == VAR_4 || VAR_5 == VAR_2);
}
