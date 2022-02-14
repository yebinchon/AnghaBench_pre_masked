
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sample_regs_user; int sample_regs_intr; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct perf_event *VAR_1)
{
 return (VAR_1->attr.sample_regs_user & VAR_0) ||
        (VAR_1->attr.sample_regs_intr & VAR_0);
}
