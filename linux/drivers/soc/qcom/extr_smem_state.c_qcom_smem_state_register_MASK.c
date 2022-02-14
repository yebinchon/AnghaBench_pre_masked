
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_smem_state_ops {int dummy; } ;
struct qcom_smem_state {int list; void* priv; struct qcom_smem_state_ops ops; struct device_node* of_node; int refcount; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct qcom_smem_state* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct qcom_smem_state* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;

struct qcom_smem_state *FUNC_6(struct device_node *VAR_4,
       const struct qcom_smem_state_ops *VAR_5,
       void *VAR_6)
{
 struct qcom_smem_state *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_7->refcount);

 VAR_7->of_node = VAR_4;
 VAR_7->ops = *VAR_5;
 VAR_7->priv = VAR_6;

 FUNC_4(&VAR_2);
 FUNC_3(&VAR_7->list, &VAR_3);
 FUNC_5(&VAR_2);

 return VAR_7;
}
