
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsm_entry {int domain; } ;
struct qcom_smsm {int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int *,int ,int ,char*,void*) ;
 int FUNC_2 (struct device_node*,int,int *,struct smsm_entry*) ;
 int FUNC_3 (struct device_node*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct qcom_smsm *VAR_5,
         struct smsm_entry *VAR_6,
         struct device_node *VAR_7)
{
 int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_7, 0);
 if (!VAR_9) {
  FUNC_0(VAR_5->dev, "failed to parse smsm interrupt\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_5->dev, VAR_9,
     ((void*)0), VAR_3,
     VAR_2,
     "smsm", (void *)VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_5->dev, "failed to request interrupt\n");
  return VAR_8;
 }

 VAR_6->domain = FUNC_2(VAR_7, 32, &VAR_4, VAR_6);
 if (!VAR_6->domain) {
  FUNC_0(VAR_5->dev, "failed to add irq_domain\n");
  return -VAR_1;
 }

 return 0;
}
