
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct perf_sample_data {int dummy; } ;
struct perf_output_handle {int dummy; } ;
struct TYPE_6__ {int size; int type; } ;
struct TYPE_5__ {TYPE_3__ header; int tid; int pid; } ;
struct perf_mmap_event {TYPE_2__ event_id; int file_size; int file_name; TYPE_2__ flags; TYPE_2__ prot; TYPE_2__ ino_generation; TYPE_2__ ino; TYPE_2__ min; TYPE_2__ maj; } ;
struct TYPE_4__ {scalar_t__ mmap2; } ;
struct perf_event {TYPE_1__ attr; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_output_handle*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct perf_event*,struct perf_output_handle*,struct perf_sample_data*) ;
 int FUNC_2 (TYPE_3__*,struct perf_sample_data*,struct perf_event*) ;
 int FUNC_3 (struct perf_event*,void*) ;
 int FUNC_4 (struct perf_event*,int ) ;
 int FUNC_5 (struct perf_event*,int ) ;
 int FUNC_6 (struct perf_output_handle*,struct perf_event*,int) ;
 int FUNC_7 (struct perf_output_handle*) ;
 int FUNC_8 (struct perf_output_handle*,TYPE_2__) ;

__attribute__((used)) static void FUNC_9(struct perf_event *VAR_2,
       void *VAR_3)
{
 struct perf_mmap_event *VAR_4 = VAR_3;
 struct perf_output_handle VAR_5;
 struct perf_sample_data VAR_6;
 int VAR_7 = VAR_4->event_id.header.size;
 u32 VAR_8 = VAR_4->event_id.header.type;
 int VAR_9;

 if (!FUNC_3(VAR_2, VAR_3))
  return;

 if (VAR_2->attr.mmap2) {
  VAR_4->event_id.header.type = VAR_0;
  VAR_4->event_id.header.size += sizeof(VAR_4->maj);
  VAR_4->event_id.header.size += sizeof(VAR_4->min);
  VAR_4->event_id.header.size += sizeof(VAR_4->ino);
  VAR_4->event_id.header.size += sizeof(VAR_4->ino_generation);
  VAR_4->event_id.header.size += sizeof(VAR_4->prot);
  VAR_4->event_id.header.size += sizeof(VAR_4->flags);
 }

 FUNC_2(&VAR_4->event_id.header, &VAR_6, VAR_2);
 VAR_9 = FUNC_6(&VAR_5, VAR_2,
    VAR_4->event_id.header.size);
 if (VAR_9)
  goto out;

 VAR_4->event_id.pid = FUNC_4(VAR_2, VAR_1);
 VAR_4->event_id.tid = FUNC_5(VAR_2, VAR_1);

 FUNC_8(&VAR_5, VAR_4->event_id);

 if (VAR_2->attr.mmap2) {
  FUNC_8(&VAR_5, VAR_4->maj);
  FUNC_8(&VAR_5, VAR_4->min);
  FUNC_8(&VAR_5, VAR_4->ino);
  FUNC_8(&VAR_5, VAR_4->ino_generation);
  FUNC_8(&VAR_5, VAR_4->prot);
  FUNC_8(&VAR_5, VAR_4->flags);
 }

 FUNC_0(&VAR_5, VAR_4->file_name,
       VAR_4->file_size);

 FUNC_1(VAR_2, &VAR_5, &VAR_6);

 FUNC_7(&VAR_5);
out:
 VAR_4->event_id.header.size = VAR_7;
 VAR_4->event_id.header.type = VAR_8;
}
