
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* soc; } ;
struct TYPE_4__ {scalar_t__ has_gpu_clamps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static inline bool FUNC_2(int VAR_4)
{
 if (VAR_4 == VAR_2 && VAR_3->soc->has_gpu_clamps)
  return (FUNC_1(VAR_3, VAR_0) & 0x1) == 0;
 else
  return (FUNC_1(VAR_3, VAR_1) & FUNC_0(VAR_4)) != 0;
}
