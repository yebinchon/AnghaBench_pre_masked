
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static inline u8 FUNC_0(u16 VAR_0, u16 VAR_1)
{
 if (VAR_0 / VAR_1 >= 16)
  return 0;

 if (VAR_0 / VAR_1 >= 8)
  return 1;

 if (VAR_0 / VAR_1 >= 4)
  return 2;

 return 3;
}
