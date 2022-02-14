
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net_r_vector {TYPE_1__* nfp_net; int tasklet; int irq_entry; int lock; int tx_ring; } ;
struct TYPE_2__ {int dp; } ;


 int FUNC_0 (struct nfp_net_r_vector*) ;
 scalar_t__ FUNC_1 (struct nfp_net_r_vector*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_0)
{
 struct nfp_net_r_vector *VAR_1 = (void *)VAR_0;

 FUNC_5(&VAR_1->lock);
 FUNC_3(VAR_1->tx_ring, 0);
 FUNC_0(VAR_1);
 FUNC_6(&VAR_1->lock);

 if (FUNC_1(VAR_1)) {
  FUNC_2(VAR_1->nfp_net, VAR_1->irq_entry);
 } else {
  FUNC_7(&VAR_1->tasklet);
  FUNC_4(&VAR_1->nfp_net->dp,
      "control message budget exceeded!\n");
 }
}
