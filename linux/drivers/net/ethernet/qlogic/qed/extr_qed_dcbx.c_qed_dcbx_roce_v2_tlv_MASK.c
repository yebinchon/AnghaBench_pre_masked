
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(u32 VAR_2, u16 VAR_3, bool VAR_4)
{
 bool VAR_5;

 if (VAR_4)
  VAR_5 = FUNC_1(VAR_2,
           VAR_0);
 else
  VAR_5 = FUNC_0(VAR_2);

 return !!(VAR_5 && (VAR_3 == VAR_1));
}
