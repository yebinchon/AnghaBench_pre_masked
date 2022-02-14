
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct TYPE_2__ {int type; scalar_t__ config; } ;
struct perf_event {TYPE_1__ attr; } ;
typedef enum perf_type_id { ____Placeholder_perf_type_id } perf_type_id ;


 scalar_t__ FUNC_0 (struct perf_event*,struct pt_regs*) ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_0,
    enum perf_type_id VAR_1,
    u32 VAR_2,
    struct perf_sample_data *VAR_3,
    struct pt_regs *VAR_4)
{
 if (VAR_0->attr.type != VAR_1)
  return 0;

 if (VAR_0->attr.config != VAR_2)
  return 0;

 if (FUNC_0(VAR_0, VAR_4))
  return 0;

 return 1;
}
