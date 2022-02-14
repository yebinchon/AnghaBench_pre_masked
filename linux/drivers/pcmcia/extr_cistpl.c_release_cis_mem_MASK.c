
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int * res; } ;
struct pcmcia_socket {int ops_mutex; int * cis_virt; TYPE_2__ cis_mem; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_mem_map ) (struct pcmcia_socket*,TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pcmcia_socket*,TYPE_2__*) ;

void FUNC_6(struct pcmcia_socket *VAR_1)
{
 FUNC_2(&VAR_1->ops_mutex);
 if (VAR_1->cis_mem.flags & VAR_0) {
  VAR_1->cis_mem.flags &= ~VAR_0;
  VAR_1->ops->set_mem_map(VAR_1, &VAR_1->cis_mem);
  if (VAR_1->cis_mem.res) {
   FUNC_4(VAR_1->cis_mem.res);
   FUNC_1(VAR_1->cis_mem.res);
   VAR_1->cis_mem.res = ((void*)0);
  }
  FUNC_0(VAR_1->cis_virt);
  VAR_1->cis_virt = ((void*)0);
 }
 FUNC_3(&VAR_1->ops_mutex);
}
