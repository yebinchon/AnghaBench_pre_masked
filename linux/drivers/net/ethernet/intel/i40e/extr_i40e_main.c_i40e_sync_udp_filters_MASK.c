
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_pf {int state; int pending_udp_bitmap; TYPE_1__* udp_ports; } ;
struct TYPE_2__ {scalar_t__ port; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct i40e_pf *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->udp_ports[VAR_3].port)
   VAR_2->pending_udp_bitmap |= FUNC_0(VAR_3);
 }

 FUNC_1(VAR_1, VAR_2->state);
}
