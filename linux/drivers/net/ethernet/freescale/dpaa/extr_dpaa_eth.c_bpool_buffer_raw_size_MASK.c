
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;

__attribute__((used)) static inline size_t FUNC_0(u8 VAR_1, u8 VAR_2)
{
 size_t VAR_3 = VAR_0 / 4;
 u8 VAR_4;

 for (VAR_4 = (VAR_2 < 3) ? VAR_2 : 3; VAR_4 < 3 + VAR_1; VAR_4++)
  VAR_3 *= 2;
 return VAR_3;
}
