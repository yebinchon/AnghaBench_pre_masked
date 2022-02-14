
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ num_tc; } ;
struct dpaa2_eth_priv {struct dpaa2_eth_fq* fq; struct net_device* net_dev; } ;
struct dpaa2_eth_fq {int target_cpu; } ;
struct cpumask {int dummy; } ;


 int FUNC_0 (struct cpumask*) ;
 int FUNC_1 (int ,struct cpumask*) ;
 int FUNC_2 (struct dpaa2_eth_priv*) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct net_device*,struct cpumask*,int) ;

__attribute__((used)) static int FUNC_5(struct dpaa2_eth_priv *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->net_dev;
 struct cpumask VAR_2;
 struct dpaa2_eth_fq *VAR_3;
 int VAR_4, VAR_5, VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_2(VAR_0);
 VAR_6 = (VAR_1->num_tc ? : 1) * VAR_5;




 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  VAR_3 = &VAR_0->fq[VAR_4 % VAR_5];

  FUNC_0(&VAR_2);
  FUNC_1(VAR_3->target_cpu, &VAR_2);

  VAR_7 = FUNC_4(VAR_1, &VAR_2, VAR_4);
  if (VAR_7) {
   FUNC_3(VAR_1, "Error setting XPS queue\n");
   break;
  }
 }

 return VAR_7;
}
