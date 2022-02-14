
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnet_port {int q_index; struct vnet* vp; } ;
struct vnet {scalar_t__* q_used; int nports; } ;


 int VAR_0 ;

void FUNC_0(struct vnet_port *VAR_1)
{
 struct vnet *VAR_2 = VAR_1->vp;
 int VAR_3 = 0;
 int VAR_4;





 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2->q_used[VAR_4] == 0) {
   VAR_3 = VAR_4;
   break;
  }
  if (VAR_2->q_used[VAR_4] < VAR_2->q_used[VAR_3])
   VAR_3 = VAR_4;
 }

 VAR_2->nports++;
 VAR_2->q_used[VAR_3]++;
 VAR_1->q_index = VAR_3;
}
