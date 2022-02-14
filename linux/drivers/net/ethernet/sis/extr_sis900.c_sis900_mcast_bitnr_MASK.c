
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__*) ;

__attribute__((used)) static inline u16 FUNC_1(u8 *VAR_2, u8 VAR_3)
{

 u32 VAR_4 = FUNC_0(6, VAR_2);


 if ((VAR_3 >= VAR_0) || (VAR_3 == VAR_1))
  return (int)(VAR_4 >> 24);
 else
  return (int)(VAR_4 >> 25);
}
