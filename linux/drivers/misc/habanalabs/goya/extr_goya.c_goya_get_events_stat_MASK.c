
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hl_device {struct goya_device* asic_specific; } ;
struct goya_device {void* events_stat_aggregate; void* events_stat; } ;



void *FUNC_0(struct hl_device *VAR_0, bool VAR_1, u32 *VAR_2)
{
 struct goya_device *VAR_3 = VAR_0->asic_specific;

 if (VAR_1) {
  *VAR_2 = (u32) sizeof(VAR_3->events_stat_aggregate);
  return VAR_3->events_stat_aggregate;
 }

 *VAR_2 = (u32) sizeof(VAR_3->events_stat);
 return VAR_3->events_stat;
}
