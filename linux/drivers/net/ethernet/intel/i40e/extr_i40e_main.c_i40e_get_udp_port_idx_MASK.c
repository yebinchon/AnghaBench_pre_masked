
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct i40e_pf {int pending_udp_bitmap; TYPE_1__* udp_ports; } ;
struct TYPE_2__ {scalar_t__ port; } ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;

__attribute__((used)) static u8 FUNC_1(struct i40e_pf *VAR_1, u16 VAR_2)
{
 u8 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {



  if (!VAR_2 && (VAR_1->pending_udp_bitmap & FUNC_0(VAR_3)))
   continue;
  if (VAR_1->udp_ports[VAR_3].port == VAR_2)
   return VAR_3;
 }

 return VAR_3;
}
