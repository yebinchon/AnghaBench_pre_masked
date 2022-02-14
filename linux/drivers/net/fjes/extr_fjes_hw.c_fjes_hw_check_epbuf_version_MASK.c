
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ version; } ;
union ep_buffer_info {TYPE_1__ common; } ;
typedef scalar_t__ u32 ;
struct epbuf_handler {union ep_buffer_info* info; } ;



bool FUNC_0(struct epbuf_handler *VAR_0, u32 VAR_1)
{
 union ep_buffer_info *VAR_2 = VAR_0->info;

 return (VAR_2->common.version == VAR_1);
}
