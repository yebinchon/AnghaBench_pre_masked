
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_vport {scalar_t__ used_umv_num; struct hclge_dev* back; } ;
struct hclge_dev {scalar_t__ priv_umv_size; scalar_t__ share_umv_size; int umv_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct hclge_vport *VAR_0)
{
 struct hclge_dev *VAR_1 = VAR_0->back;
 bool VAR_2;

 FUNC_0(&VAR_1->umv_mutex);
 VAR_2 = (VAR_0->used_umv_num >= VAR_1->priv_umv_size &&
     VAR_1->share_umv_size == 0);
 FUNC_1(&VAR_1->umv_mutex);

 return VAR_2;
}
