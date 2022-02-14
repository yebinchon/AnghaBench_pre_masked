
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(const u8 *VAR_1)
{
 unsigned int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1[VAR_2] != 0)
   VAR_3++;
 }

 return VAR_3;
}
