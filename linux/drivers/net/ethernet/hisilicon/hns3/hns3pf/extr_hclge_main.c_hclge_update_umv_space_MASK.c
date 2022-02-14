
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_vport {scalar_t__ used_umv_num; struct hclge_dev* back; } ;
struct hclge_dev {scalar_t__ priv_umv_size; scalar_t__ share_umv_size; int umv_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hclge_vport *VAR_0, bool VAR_1)
{
 struct hclge_dev *VAR_2 = VAR_0->back;

 FUNC_0(&VAR_2->umv_mutex);
 if (VAR_1) {
  if (VAR_0->used_umv_num > VAR_2->priv_umv_size)
   VAR_2->share_umv_size++;

  if (VAR_0->used_umv_num > 0)
   VAR_0->used_umv_num--;
 } else {
  if (VAR_0->used_umv_num >= VAR_2->priv_umv_size &&
      VAR_2->share_umv_size > 0)
   VAR_2->share_umv_size--;
  VAR_0->used_umv_num++;
 }
 FUNC_1(&VAR_2->umv_mutex);
}
