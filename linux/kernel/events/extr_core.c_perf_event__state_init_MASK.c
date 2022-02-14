
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ disabled; } ;
struct perf_event {TYPE_1__ attr; int state; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct perf_event *VAR_2)
{
 VAR_2->state = VAR_2->attr.disabled ? VAR_1 :
           VAR_0;
}
