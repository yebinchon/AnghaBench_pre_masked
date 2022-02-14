
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_sample_data {int type; int id; int cpu_entry; int stream_id; int time; int tid_entry; } ;
struct perf_output_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct perf_output_handle*,int ) ;

__attribute__((used)) static void FUNC_1(struct perf_output_handle *VAR_6,
        struct perf_sample_data *VAR_7)
{
 u64 VAR_8 = VAR_7->type;

 if (VAR_8 & VAR_4)
  FUNC_0(VAR_6, VAR_7->tid_entry);

 if (VAR_8 & VAR_5)
  FUNC_0(VAR_6, VAR_7->time);

 if (VAR_8 & VAR_1)
  FUNC_0(VAR_6, VAR_7->id);

 if (VAR_8 & VAR_3)
  FUNC_0(VAR_6, VAR_7->stream_id);

 if (VAR_8 & VAR_0)
  FUNC_0(VAR_6, VAR_7->cpu_entry);

 if (VAR_8 & VAR_2)
  FUNC_0(VAR_6, VAR_7->id);
}
