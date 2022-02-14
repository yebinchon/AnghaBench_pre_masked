
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t frame_max; int count_max; scalar_t__ tail; int head; } ;
union ep_buffer_info {TYPE_1__ v1i; } ;
struct esmem_frame {size_t frame_size; scalar_t__ frame_data; } ;
struct epbuf_handler {union ep_buffer_info* info; int * ring; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 size_t FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (void*,void*,size_t) ;

int FUNC_4(struct epbuf_handler *VAR_1,
         void *VAR_2, size_t VAR_3)
{
 union ep_buffer_info *VAR_4 = VAR_1->info;
 struct esmem_frame *VAR_5;

 if (FUNC_0(VAR_4->v1i.head, VAR_4->v1i.tail, VAR_4->v1i.count_max))
  return -VAR_0;

 VAR_5 = (struct esmem_frame *)&(VAR_1->ring[FUNC_1
          (VAR_4->v1i.tail - 1,
           VAR_4->v1i.count_max) *
          VAR_4->v1i.frame_max]);

 VAR_5->frame_size = VAR_3;
 FUNC_3((void *)(VAR_5->frame_data), (void *)VAR_2, VAR_3);

 FUNC_2(VAR_1->info->v1i.tail, VAR_4->v1i.count_max);

 return 0;
}
