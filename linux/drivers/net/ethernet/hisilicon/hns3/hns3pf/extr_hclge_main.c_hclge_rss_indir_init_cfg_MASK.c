
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_vport {int* rss_indirection_tbl; int alloc_rss_size; } ;
struct hclge_dev {int num_vmdq_vport; struct hclge_vport* vport; } ;


 int VAR_0 ;

void FUNC_0(struct hclge_dev *VAR_1)
{
 struct hclge_vport *VAR_2 = VAR_1->vport;
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->num_vmdq_vport + 1; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   VAR_2[VAR_4].rss_indirection_tbl[VAR_3] =
    VAR_3 % VAR_2[VAR_4].alloc_rss_size;
 }
}
