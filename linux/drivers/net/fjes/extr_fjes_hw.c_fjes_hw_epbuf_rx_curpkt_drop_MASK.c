
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count_max; int head; } ;
union ep_buffer_info {TYPE_1__ v1i; } ;
struct epbuf_handler {union ep_buffer_info* info; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct epbuf_handler*) ;

void FUNC_2(struct epbuf_handler *VAR_0)
{
 union ep_buffer_info *VAR_1 = VAR_0->info;

 if (FUNC_1(VAR_0))
  return;

 FUNC_0(VAR_0->info->v1i.head, VAR_1->v1i.count_max);
}
