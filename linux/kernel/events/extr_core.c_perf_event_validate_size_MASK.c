
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_event_header {int dummy; } ;
struct TYPE_4__ {int sample_type; } ;
struct perf_event {int read_size; int header_size; int id_header_size; TYPE_2__ attr; TYPE_1__* group_leader; } ;
struct TYPE_3__ {scalar_t__ nr_siblings; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*,int) ;
 int FUNC_1 (struct perf_event*,scalar_t__) ;
 int FUNC_2 (struct perf_event*) ;

__attribute__((used)) static bool FUNC_3(struct perf_event *VAR_1)
{




 FUNC_1(VAR_1, VAR_1->group_leader->nr_siblings + 1);
 FUNC_0(VAR_1, VAR_1->attr.sample_type & ~VAR_0);
 FUNC_2(VAR_1);





 if (VAR_1->read_size + VAR_1->header_size +
     VAR_1->id_header_size + sizeof(struct perf_event_header) >= 16*1024)
  return 0;

 return 1;
}
