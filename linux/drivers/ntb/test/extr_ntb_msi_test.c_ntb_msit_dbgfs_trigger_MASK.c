
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u64 ;
struct ntb_msit_peer {size_t num_irqs; int * msi_desc; int pidx; TYPE_1__* nm; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {TYPE_2__* ntb; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,size_t,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, u64 VAR_2)
{
 struct ntb_msit_peer *VAR_3 = VAR_1;

 if (VAR_2 >= VAR_3->num_irqs)
  return -VAR_0;

 FUNC_0(&VAR_3->nm->ntb->dev, "trigger irq %llu on peer %u\n",
  VAR_2, VAR_3->pidx);

 return FUNC_1(VAR_3->nm->ntb, VAR_3->pidx,
        &VAR_3->msi_desc[VAR_2]);
}
