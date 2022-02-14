
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* vlan_id; } ;
union ep_buffer_info {TYPE_1__ v1i; } ;
typedef scalar_t__ u16 ;
struct epbuf_handler {union ep_buffer_info* info; } ;


 int VAR_0 ;

bool FUNC_0(struct epbuf_handler *VAR_1, u16 VAR_2)
{
 union ep_buffer_info *VAR_3 = VAR_1->info;
 bool VAR_4 = 0;
 int VAR_5;

 if (VAR_2 == 0) {
  VAR_4 = 1;
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (VAR_2 == VAR_3->v1i.vlan_id[VAR_5]) {
    VAR_4 = 1;
    break;
   }
  }
 }
 return VAR_4;
}
