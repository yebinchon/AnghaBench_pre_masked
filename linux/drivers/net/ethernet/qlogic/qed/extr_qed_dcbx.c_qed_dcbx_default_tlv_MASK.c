
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(u32 VAR_1, u16 VAR_2, bool VAR_3)
{
 bool VAR_4;

 if (VAR_3)
  VAR_4 = FUNC_1(VAR_1);
 else
  VAR_4 = FUNC_0(VAR_1);

 return !!(VAR_4 && (VAR_2 == VAR_0));
}
