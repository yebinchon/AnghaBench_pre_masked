
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ frame_max; int rx_status; } ;
union ep_buffer_info {TYPE_1__ v1i; } ;
typedef int u32 ;
struct epbuf_handler {union ep_buffer_info* info; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;

bool FUNC_1(struct epbuf_handler *VAR_1, u32 VAR_2)
{
 union ep_buffer_info *VAR_3 = VAR_1->info;

 return ((VAR_3->v1i.frame_max == FUNC_0(VAR_2)) &&
  VAR_3->v1i.rx_status & VAR_0);
}
