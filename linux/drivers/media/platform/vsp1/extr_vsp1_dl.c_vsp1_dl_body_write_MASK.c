
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct vsp1_dl_body {size_t num_entries; size_t max_entries; TYPE_1__* entries; } ;
struct TYPE_2__ {void* data; void* addr; } ;


 scalar_t__ FUNC_0 (int,char*,size_t) ;

void FUNC_1(struct vsp1_dl_body *VAR_0, u32 VAR_1, u32 VAR_2)
{
 if (FUNC_0(VAR_0->num_entries >= VAR_0->max_entries,
        "DLB size exceeded (max %u)", VAR_0->max_entries))
  return;

 VAR_0->entries[VAR_0->num_entries].addr = VAR_1;
 VAR_0->entries[VAR_0->num_entries].data = VAR_2;
 VAR_0->num_entries++;
}
