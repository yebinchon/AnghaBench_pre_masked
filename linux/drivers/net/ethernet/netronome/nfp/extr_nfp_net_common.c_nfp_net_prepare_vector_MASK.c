
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net_r_vector {int irq_entry; int irq_vector; int affinity_mask; int tasklet; int napi; int name; int handler; } ;
struct TYPE_2__ {scalar_t__ netdev; } ;
struct nfp_net {TYPE_1__ dp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__,int *,int ,int ) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (struct nfp_net*) ;
 int VAR_1 ;
 int FUNC_5 (struct nfp_net*,char*,int,int ,int ) ;
 int FUNC_6 (struct nfp_net*,char*,int ) ;
 int FUNC_7 (int ,int ,int ,int ,struct nfp_net_r_vector*) ;
 int FUNC_8 (int ,int,char*,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct nfp_net *VAR_2, struct nfp_net_r_vector *VAR_3,
         int VAR_4)
{
 int VAR_5;


 if (VAR_2->dp.netdev)
  FUNC_2(VAR_2->dp.netdev, &VAR_3->napi,
          VAR_1, VAR_0);
 else
  FUNC_10(&VAR_3->tasklet);

 FUNC_8(VAR_3->name, sizeof(VAR_3->name),
   "%s-rxtx-%d", FUNC_4(VAR_2), VAR_4);
 VAR_5 = FUNC_7(VAR_3->irq_vector, VAR_3->handler, 0, VAR_3->name,
     VAR_3);
 if (VAR_5) {
  if (VAR_2->dp.netdev)
   FUNC_3(&VAR_3->napi);
  else
   FUNC_9(&VAR_3->tasklet);

  FUNC_6(VAR_2, "Error requesting IRQ %d\n", VAR_3->irq_vector);
  return VAR_5;
 }
 FUNC_0(VAR_3->irq_vector);

 FUNC_1(VAR_3->irq_vector, &VAR_3->affinity_mask);

 FUNC_5(VAR_2, "RV%02d: irq=%03d/%03d\n", VAR_4, VAR_3->irq_vector,
        VAR_3->irq_entry);

 return 0;
}
