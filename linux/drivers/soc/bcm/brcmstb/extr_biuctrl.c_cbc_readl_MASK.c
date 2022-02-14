
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(int VAR_2)
{
 int VAR_3 = VAR_1[VAR_2];

 if (VAR_3 == -1)
  return (u32)-1;

 return FUNC_0(VAR_0 + VAR_3);
}
