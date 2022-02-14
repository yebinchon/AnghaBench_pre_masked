
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int disabled; int bp_len; int bp_type; int bp_addr; } ;



__attribute__((used)) static void FUNC_0(struct perf_event_attr *VAR_0,
        struct perf_event_attr *VAR_1)
{
 VAR_0->bp_addr = VAR_1->bp_addr;
 VAR_0->bp_type = VAR_1->bp_type;
 VAR_0->bp_len = VAR_1->bp_len;
 VAR_0->disabled = VAR_1->disabled;
}
