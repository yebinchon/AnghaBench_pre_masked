
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_sample_data {int dummy; } ;
struct perf_output_handle {int dummy; } ;
struct TYPE_2__ {scalar_t__ sample_id_all; } ;
struct perf_event {TYPE_1__ attr; } ;


 int FUNC_0 (struct perf_output_handle*,struct perf_sample_data*) ;

void FUNC_1(struct perf_event *VAR_0,
      struct perf_output_handle *VAR_1,
      struct perf_sample_data *VAR_2)
{
 if (VAR_0->attr.sample_id_all)
  FUNC_0(VAR_1, VAR_2);
}
