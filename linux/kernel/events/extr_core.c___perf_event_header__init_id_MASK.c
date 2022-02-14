
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {scalar_t__ reserved; int cpu; } ;
struct TYPE_5__ {int tid; int pid; } ;
struct perf_sample_data {int type; TYPE_3__ cpu_entry; int stream_id; int id; int time; TYPE_2__ tid_entry; } ;
struct perf_event_header {int size; } ;
struct TYPE_4__ {int sample_type; } ;
struct perf_event {int id; scalar_t__ id_header_size; TYPE_1__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*,int ) ;
 int FUNC_2 (struct perf_event*,int ) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct perf_event_header *VAR_7,
      struct perf_sample_data *VAR_8,
      struct perf_event *VAR_9)
{
 u64 VAR_10 = VAR_9->attr.sample_type;

 VAR_8->type = VAR_10;
 VAR_7->size += VAR_9->id_header_size;

 if (VAR_10 & VAR_4) {

  VAR_8->tid_entry.pid = FUNC_1(VAR_9, VAR_6);
  VAR_8->tid_entry.tid = FUNC_2(VAR_9, VAR_6);
 }

 if (VAR_10 & VAR_5)
  VAR_8->time = FUNC_0(VAR_9);

 if (VAR_10 & (VAR_1 | VAR_2))
  VAR_8->id = FUNC_3(VAR_9);

 if (VAR_10 & VAR_3)
  VAR_8->stream_id = VAR_9->id;

 if (VAR_10 & VAR_0) {
  VAR_8->cpu_entry.cpu = FUNC_4();
  VAR_8->cpu_entry.reserved = 0;
 }
}
