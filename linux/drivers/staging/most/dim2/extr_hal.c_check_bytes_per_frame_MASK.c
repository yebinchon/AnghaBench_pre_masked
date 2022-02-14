
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ const u16 ;
struct TYPE_2__ {scalar_t__ fcnt; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(u32 VAR_2)
{
 u16 const VAR_3 = VAR_1.fcnt + 2;
 u16 const VAR_4 = ((u16)VAR_0 + 1u) >> VAR_3;

 if (VAR_2 <= 0)
  return 0;

 if (VAR_2 > VAR_4)
  return 0;

 return 1;
}
