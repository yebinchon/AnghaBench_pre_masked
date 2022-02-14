
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_q_vector {int v_idx; int reg_idx; int napi; int affinity_mask; int * vsi; struct iavf_adapter* adapter; } ;
struct iavf_adapter {int num_msix_vectors; int netdev; int vsi; struct iavf_q_vector* q_vectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 struct iavf_q_vector* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct iavf_adapter *VAR_6)
{
 int VAR_7 = 0, VAR_8;
 struct iavf_q_vector *VAR_9;

 VAR_8 = VAR_6->num_msix_vectors - VAR_3;
 VAR_6->q_vectors = FUNC_1(VAR_8, sizeof(*VAR_9),
         VAR_1);
 if (!VAR_6->q_vectors)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_9 = &VAR_6->q_vectors[VAR_7];
  VAR_9->adapter = VAR_6;
  VAR_9->vsi = &VAR_6->vsi;
  VAR_9->v_idx = VAR_7;
  VAR_9->reg_idx = VAR_7;
  FUNC_0(&VAR_9->affinity_mask, VAR_4);
  FUNC_2(VAR_6->netdev, &VAR_9->napi,
          VAR_5, VAR_2);
 }

 return 0;
}
