
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_vport {scalar_t__ used_umv_num; } ;
struct hclge_dev {int num_alloc_vport; int max_umv_size; int num_req_vfs; int umv_mutex; scalar_t__ priv_umv_size; scalar_t__ share_umv_size; struct hclge_vport* vport; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hclge_dev *VAR_0)
{
 struct hclge_vport *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_alloc_vport; VAR_2++) {
  VAR_1 = &VAR_0->vport[VAR_2];
  VAR_1->used_umv_num = 0;
 }

 FUNC_0(&VAR_0->umv_mutex);
 VAR_0->share_umv_size = VAR_0->priv_umv_size +
   VAR_0->max_umv_size % (VAR_0->num_req_vfs + 2);
 FUNC_1(&VAR_0->umv_mutex);
}
