
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_sample_data {int dummy; } ;
struct perf_output_handle {int dummy; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_3__ {TYPE_2__ header; } ;
struct perf_ksymbol_event {int name_len; int name; TYPE_1__ event_id; } ;
struct perf_event {int dummy; } ;


 int FUNC_0 (struct perf_output_handle*,int ,int ) ;
 int FUNC_1 (struct perf_event*,struct perf_output_handle*,struct perf_sample_data*) ;
 int FUNC_2 (TYPE_2__*,struct perf_sample_data*,struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_output_handle*,struct perf_event*,int ) ;
 int FUNC_5 (struct perf_output_handle*) ;
 int FUNC_6 (struct perf_output_handle*,TYPE_1__) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_0, void *VAR_1)
{
 struct perf_ksymbol_event *VAR_2 = VAR_1;
 struct perf_output_handle VAR_3;
 struct perf_sample_data VAR_4;
 int VAR_5;

 if (!FUNC_3(VAR_0))
  return;

 FUNC_2(&VAR_2->event_id.header,
       &VAR_4, VAR_0);
 VAR_5 = FUNC_4(&VAR_3, VAR_0,
    VAR_2->event_id.header.size);
 if (VAR_5)
  return;

 FUNC_6(&VAR_3, VAR_2->event_id);
 FUNC_0(&VAR_3, VAR_2->name, VAR_2->name_len);
 FUNC_1(VAR_0, &VAR_3, &VAR_4);

 FUNC_5(&VAR_3);
}
