
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vhost_net {TYPE_1__* vqs; } ;
struct TYPE_2__ {int rxq; scalar_t__ sock_hlen; scalar_t__ vhost_hlen; int * ubufs; scalar_t__ upend_idx; scalar_t__ done_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vhost_net*) ;

__attribute__((used)) static void FUNC_2(struct vhost_net *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->vqs[VAR_2].done_idx = 0;
  VAR_1->vqs[VAR_2].upend_idx = 0;
  VAR_1->vqs[VAR_2].ubufs = ((void*)0);
  VAR_1->vqs[VAR_2].vhost_hlen = 0;
  VAR_1->vqs[VAR_2].sock_hlen = 0;
  FUNC_0(&VAR_1->vqs[VAR_2].rxq);
 }

}
