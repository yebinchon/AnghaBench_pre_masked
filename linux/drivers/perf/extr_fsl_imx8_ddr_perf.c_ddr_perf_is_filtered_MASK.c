
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int config; } ;
struct perf_event {TYPE_1__ attr; } ;



__attribute__((used)) static bool FUNC_0(struct perf_event *VAR_0)
{
 return VAR_0->attr.config == 0x41 || VAR_0->attr.config == 0x42;
}
