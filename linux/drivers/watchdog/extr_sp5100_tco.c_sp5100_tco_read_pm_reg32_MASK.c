
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(u8 VAR_0)
{
 u32 VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 3; VAR_2 >= 0; VAR_2--)
  VAR_1 = (VAR_1 << 8) + FUNC_0(VAR_0 + VAR_2);

 return VAR_1;
}
