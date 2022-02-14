
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int dummy; } ;
struct perf_event {int dummy; } ;
struct file {struct perf_event* private_data; } ;


 long FUNC_0 (struct perf_event*,unsigned int,unsigned long) ;
 struct perf_event_context* FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*,struct perf_event_context*) ;

__attribute__((used)) static long FUNC_3(struct file *VAR_0, unsigned int VAR_1, unsigned long VAR_2)
{
 struct perf_event *VAR_3 = VAR_0->private_data;
 struct perf_event_context *VAR_4;
 long VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_2(VAR_3, VAR_4);

 return VAR_5;
}
