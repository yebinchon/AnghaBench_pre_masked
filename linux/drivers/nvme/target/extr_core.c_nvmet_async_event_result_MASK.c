
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvmet_async_event {int event_type; int event_info; int log_page; } ;



__attribute__((used)) static u32 FUNC_0(struct nvmet_async_event *VAR_0)
{
 return VAR_0->event_type | (VAR_0->event_info << 8) | (VAR_0->log_page << 16);
}
