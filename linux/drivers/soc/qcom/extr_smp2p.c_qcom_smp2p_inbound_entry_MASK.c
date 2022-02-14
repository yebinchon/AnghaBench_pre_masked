
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp2p_entry {int domain; } ;
struct qcom_smp2p {int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct device_node*,int,int *,struct smp2p_entry*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct qcom_smp2p *VAR_2,
        struct smp2p_entry *VAR_3,
        struct device_node *VAR_4)
{
 VAR_3->domain = FUNC_1(VAR_4, 32, &VAR_1, VAR_3);
 if (!VAR_3->domain) {
  FUNC_0(VAR_2->dev, "failed to add irq_domain\n");
  return -VAR_0;
 }

 return 0;
}
