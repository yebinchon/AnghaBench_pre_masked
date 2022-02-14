
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t frame_max; int count_max; int head; } ;
union ep_buffer_info {TYPE_1__ v1i; } ;
struct esmem_frame {void* frame_data; scalar_t__ frame_size; } ;
struct epbuf_handler {int * ring; union ep_buffer_info* info; } ;


 size_t FUNC_0 (int ,int ) ;

void *FUNC_1(struct epbuf_handler *VAR_0,
           size_t *VAR_1)
{
 union ep_buffer_info *VAR_2 = VAR_0->info;
 struct esmem_frame *VAR_3;
 void *VAR_4;

 VAR_3 = (struct esmem_frame *)&(VAR_0->ring[FUNC_0
          (VAR_2->v1i.head,
           VAR_2->v1i.count_max) *
          VAR_2->v1i.frame_max]);

 *VAR_1 = (size_t)VAR_3->frame_size;

 VAR_4 = VAR_3->frame_data;

 return VAR_4;
}
