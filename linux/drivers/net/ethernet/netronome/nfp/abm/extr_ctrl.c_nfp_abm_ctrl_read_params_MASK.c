
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_abm_link {TYPE_1__* vnic; int queue_base; } ;
struct TYPE_2__ {int stride_rx; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_abm_link*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(struct nfp_abm_link *VAR_1)
{
 VAR_1->queue_base = FUNC_1(VAR_1->vnic, VAR_0);
 VAR_1->queue_base /= VAR_1->vnic->stride_rx;

 return FUNC_0(VAR_1);
}
