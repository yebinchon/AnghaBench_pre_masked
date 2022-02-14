
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct WD33C93_hostdata {int * sync_stat; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0 ( struct WD33C93_hostdata *VAR_1, int VAR_2 )
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
  if (VAR_2 & (1 << VAR_3))
   VAR_1->sync_stat[VAR_3] = VAR_0;
}
