
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpaa2_eth_priv {int num_fqs; int dpio_cpumask; struct dpaa2_eth_fq* fq; TYPE_2__* net_dev; } ;
struct dpaa2_eth_fq {int type; int target_cpu; int channel; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct dpaa2_eth_priv*,int) ;
 int VAR_0 ;
 int FUNC_4 (struct dpaa2_eth_priv*) ;

__attribute__((used)) static void FUNC_5(struct dpaa2_eth_priv *VAR_1)
{
 struct device *VAR_2 = VAR_1->net_dev->dev.parent;
 struct dpaa2_eth_fq *VAR_3;
 int VAR_4, VAR_5;
 int VAR_6;





 VAR_4 = VAR_5 = FUNC_0(&VAR_1->dpio_cpumask);

 for (VAR_6 = 0; VAR_6 < VAR_1->num_fqs; VAR_6++) {
  VAR_3 = &VAR_1->fq[VAR_6];
  switch (VAR_3->type) {
  case 129:
   VAR_3->target_cpu = VAR_4;
   VAR_4 = FUNC_1(VAR_4, &VAR_1->dpio_cpumask);
   if (VAR_4 >= VAR_0)
    VAR_4 = FUNC_0(&VAR_1->dpio_cpumask);
   break;
  case 128:
   VAR_3->target_cpu = VAR_5;
   VAR_5 = FUNC_1(VAR_5, &VAR_1->dpio_cpumask);
   if (VAR_5 >= VAR_0)
    VAR_5 = FUNC_0(&VAR_1->dpio_cpumask);
   break;
  default:
   FUNC_2(VAR_2, "Unknown FQ type: %d\n", VAR_3->type);
  }
  VAR_3->channel = FUNC_3(VAR_1, VAR_3->target_cpu);
 }

 FUNC_4(VAR_1);
}
