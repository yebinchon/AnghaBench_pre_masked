
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int num_r_vecs; int netdev; } ;
struct nfp_net {int link_up; TYPE_3__ dp; TYPE_1__* r_vecs; TYPE_2__* irq_entries; } ;
struct TYPE_5__ {int vector; } ;
struct TYPE_4__ {int napi; int irq_vector; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct nfp_net *VAR_1)
{
 unsigned int VAR_2;

 FUNC_0(VAR_1->irq_entries[VAR_0].vector);
 FUNC_2(VAR_1->dp.netdev);
 VAR_1->link_up = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->dp.num_r_vecs; VAR_2++) {
  FUNC_0(VAR_1->r_vecs[VAR_2].irq_vector);
  FUNC_1(&VAR_1->r_vecs[VAR_2].napi);
 }

 FUNC_3(VAR_1->dp.netdev);
}
