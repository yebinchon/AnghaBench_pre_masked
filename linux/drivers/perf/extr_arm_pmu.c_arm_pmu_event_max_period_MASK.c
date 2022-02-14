
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int flags; } ;
struct perf_event {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline u64 FUNC_1(struct perf_event *VAR_1)
{
 if (VAR_1->hw.flags & VAR_0)
  return FUNC_0(63, 0);
 else
  return FUNC_0(31, 0);
}
