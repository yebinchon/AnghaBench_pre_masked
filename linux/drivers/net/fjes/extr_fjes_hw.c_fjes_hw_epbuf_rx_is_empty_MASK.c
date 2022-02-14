
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_status; scalar_t__ count_max; int tail; int head; } ;
union ep_buffer_info {TYPE_1__ v1i; } ;
struct epbuf_handler {union ep_buffer_info* info; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_0 ;

bool FUNC_1(struct epbuf_handler *VAR_1)
{
 union ep_buffer_info *VAR_2 = VAR_1->info;

 if (!(VAR_2->v1i.rx_status & VAR_0))
  return 1;

 if (VAR_2->v1i.count_max == 0)
  return 1;

 return FUNC_0(VAR_2->v1i.head, VAR_2->v1i.tail,
        VAR_2->v1i.count_max);
}
