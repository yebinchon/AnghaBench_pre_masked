
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ rangelow; scalar_t__ rangehigh; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(u32 VAR_1, u32 VAR_2,
           int VAR_3)
{
 return VAR_1 >= VAR_0[VAR_3].rangelow &&
  VAR_2 <= VAR_0[VAR_3].rangehigh;
}
